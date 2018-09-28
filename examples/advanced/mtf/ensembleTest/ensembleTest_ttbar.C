//
// This ROOT macro is part of BAT and can only be run if BAT
// was installed correctly.
//
// The macro can be run from within ROOT via commands
//
//    root[1] .x ensembleTest.C
//
// or
//
//    root[1] .L ensembleTest.C
//    root[2] ensembleTest()
//
// or from the command line
//
//    $ root ensembleTest.C
//
// To improve the performance the macro can be run in a compiled
// mode. The commands are the same as above but with a '+' sign
// added to the name of the file, e.g.,
//
//    root[1] .x ensembleTest.C+
//
// See ROOT documentation for details.
//
//
// Below are the includes needed for compilation of the macro
// the #if ... #endif directives around the includes allow to
// run the macro in both normal and compiled mode.
#if defined(__MAKECINT__) || defined(__ROOTCLING__) || (!defined(__CINT__) && !defined(__CLING__))

#include <BAT/BCGaussianPrior.h>
#include <BAT/BCLog.h>
#include <BAT/BCParameter.h>
#include <BAT/BCMTF.h>
#include <BAT/BCMTFChannel.h>
#include <BAT/BCMTFAnalysisFacility.h>

#include <TFile.h>
#include <TH1D.h>
#include <TTree.h>

#include <string>
#include <vector>

#endif


void ensembleTest_ttbar(int mass,int pe,bool scale)
{
    vector<const char*> channel={"00","01","02","03","10","11","12","13"};
    const char * lumi;
    if (scale) lumi="100p";
    else lumi="36p1";
	    
    // open log file
   	 BCLog::OpenLog(Form("./LogFiles/combined_%s/log_Zprime%d.txt",lumi,mass), BCLog::detail, BCLog::detail);

   	 // ---- read histograms from a file ---- //

   	 // open file
   	 std::string fname = Form("./templates_%s/ttbar_Zprime%d.root",lumi,mass);
   	 TFile* file = TFile::Open(fname.data(), "READ");
	 TFile* accfile=TFile::Open(Form("./templates_%s/AccTimesEffforZprime%d.root",lumi,mass),"READ");

	 TTree* accsinglechannel=(TTree*)accfile->Get("acctimeseff");

   	 // check if file is open
   	 if (!file || !file->IsOpen()|| !accfile ||!accfile->IsOpen()) {
   	     BCLog::OutError(Form("Could not open file %s.", fname.c_str()));
   	     BCLog::OutError("Run macro CreateHistograms.C in Root to create the file.");
   	     return;
   	 }

   	 // create new fitter object
   	 BCMTF* m = new BCMTF("MyModel");
   	 
   	 //set Metropolis as marginalization method
   	 m->SetMarginalizationMethod(BCIntegrate::kMargMetropolis);
   	 
   	 // set the required precision of the MCMC (kLow, kQuick, kMedium, kHigh)
   	 // the higher the precision the longer the MCMC run
   	 m->SetPrecision(BCEngineMCMC::kQuick);
   	 
	 // read histograms and add channels
   	 int N=channel.size();
	 double totbkgAllChannels=0;
	 vector<TH1D*> bkg={};
	 vector<TH1D*> sgn={};
	 vector<TH1D*> data={};
	 vector<double> totbkg={};
	 vector<double> accsgn={};
	 vector<double> accbkg={};

	 //Loop over each channel to read histograms and estimate maxNSignal
	 for (int i=0;i<N;i++)
	 {
		 const char* ch=channel.at(i);
	   	 TH1D* hist_bkg  = (TH1D*)file->Get(Form("bkg%s",ch));    
		 TH1D* hist_sgn  = (TH1D*)file->Get(Form("sgn%s",ch));    
		 TH1D* hist_data  = (TH1D*)file->Get(Form("data%s",ch));  
    		
	         bkg.push_back(hist_bkg);
		 sgn.push_back(hist_sgn);
		 data.push_back(hist_data);

		 double tot_bkg=hist_bkg->Integral();
		 totbkg.push_back(tot_bkg);
		 totbkgAllChannels+=tot_bkg;
	
		 double tot_sgn=hist_sgn->Integral();
        	 hist_sgn->Scale(1./tot_sgn);
	
		 //Get acceptance for each channel
		 if (accsinglechannel)
                {
                        double x;
                        accsinglechannel->SetBranchAddress(Form("accofch%s",ch),&x);
			double y;
			accsinglechannel->SetBranchAddress(Form("bkgofch%s",ch),&y);
                        for (int n=0;n<accsinglechannel->GetEntries();n++)
                        {
                                accsinglechannel->GetEvent(n);
                                accsgn.push_back(x);
				accbkg.push_back(y);
                        }
                }

		 if (!hist_bkg) {
                     BCLog::OutError(Form("Could not find bkg%s histograms",ch));
                     return;
                 }

                 if (!hist_sgn) {
                     BCLog::OutError(Form("Could not find sgn%s histograms",ch));
                     return;
                 }

                 if (!hist_data) {
                     BCLog::OutError(Form("Could not find data%s histograms",ch));
                     return;
                 }
	}//end of reading histograms and acceptance
	        
	
	//Estimate maximum number of signal events
	//Inherited from BayesianFramework 
        double maxNSignal=0;
        double stepsize=10;
        double maxLsoFar=0;
        double thisL=1;
	double logL=0;

	while (maxLsoFar/thisL<1e5)
	{
	       	for (int ch=0;ch<N;ch++)
		{
			double e=accsgn[ch];
			//std::cout<<"acc:"<<e<<std::endl;
			TH1D *hist_bkg=bkg[ch];
			TH1D *hist_sgn=sgn[ch];
			TH1D *hist_data=data[ch];	
			for (int bin=1;bin<hist_bkg->GetNbinsX()+1;bin++)
	                {
	                        double d=hist_data->GetBinContent(bin);
	                        double b=hist_bkg->GetBinContent(bin)+maxNSignal*hist_sgn->GetBinContent(bin)*e;
	                        logL-=log(TMath::PoissonI(d,b));
	
	                }
		}//Loop over each channel and each bin
		thisL=exp(-logL);// Get the combined likelihood for all the channels.
	  	if (thisL>maxLsoFar) maxLsoFar=thisL;
	        maxNSignal+=stepsize;
		logL=0;
	 }
	
 	// add signal and background processes
	m->AddProcess("signal",0,maxNSignal);
	m->AddProcess("background",0,2*totbkgAllChannels);
		 
	// add channels, and templates
	for (int i=0;i<N;i++)
	{
		 const char* ch=channel.at(i);
	   	 //m->AddProcess(Form("background_channel%s",ch), 0, 3*totbkg.at(i) );

		 // add channel
		 m->AddChannel(Form("channel%s",ch));
		 

	   	 // set data
	   	 m->SetData(Form("channel%s",ch), *data.at(i));
	
	   	 // set template and histograms
	   	 // note: the process "background_channel2" is ignored in channel 1
	   	 m->SetTemplate(Form("channel%s",ch), "signal", *sgn.at(i), accsgn.at(i));
	   	 m->SetTemplate(Form("channel%s",ch), "background", *bkg.at(i), accbkg.at(i));
	   	 // m->SetTemplate("channel1", "background_channel2", *hist_bkg1, 0.0);
	

	   	 // set priors
	   	 m->GetParameter("background").SetPrior(new BCGaussianPrior(totbkgAllChannels, sqrt(totbkgAllChannels)));
	   	 //m->GetParameter("background_channel2").SetPrior(new BCGaussianPrior(12, 50));
	   	 m->GetParameter("signal").SetPriorConstant();
	}

   	 // run MCMC
   	 m->MarginalizeAll();
   	 
	 // Get observed upper limit
   	 BCH1D  marginalizedSig = m->GetMarginalized(0);
   	 double CLpercentage = 0.95;
   	 double trueCL = marginalizedSig.GetLimit(CLpercentage);
   	 TH1D *CL=new TH1D("observedCL","",1,0,1);
   	 CL->SetBinContent(1,trueCL);
   	 //std::cout<<"trueCL:"<<trueCL<<std::endl;

   	 // find global mode
   	 m->FindMode( m->GetBestFitParameters() );

   	 // print all marginalized distributions
   	 m->PrintAllMarginalized(Form("./results/Step2/combined_%s/marginalized_Zprime%d.pdf",lumi,mass));

   	 // print results of the analysis into a text file
   	 m->PrintSummary();

   	 // print templates and stacks
   	 for (int j = 0; j < m->GetNChannels(); ++j) {
   	     BCMTFChannel* channel = m->GetChannel(j);
   	     channel->PrintTemplates(channel->GetName() + "_templates.pdf");
   	     m->PrintStack(j, m->GetBestFitParameters(), channel->GetName() + "_stack.pdf");
   	 }

   	 // ---- perform ensemble tests ---- //

   	 // create new analysis facility
   	 BCMTFAnalysisFacility* facility = new BCMTFAnalysisFacility(m);

   	 // settings
   	 facility->SetFlagMarginalize(true);

   	 // open new file
   	 file = TFile::Open(Form("./results/Step2/combined_%s/Step2_Zprime%d.root",lumi,mass), "RECREATE");
   	 file->cd();

   	 // create ensembles
   	 TTree* tree = facility->BuildEnsembles( m->GetBestFitParameters(), pe );
	
   	 // run ensemble test
   	 TTree* tree_out = facility->PerformEnsembleTest(tree, pe);

   	 // write trees into file
   	 CL->Write();
   	 tree->Write();
   	 tree_out->Write();

   	 // close file
   	 file->Close();

   	 // free memory
   	 delete file;

   	 // ---- clean up ---- //

   	 // free memory
   	 delete m;
    
}
