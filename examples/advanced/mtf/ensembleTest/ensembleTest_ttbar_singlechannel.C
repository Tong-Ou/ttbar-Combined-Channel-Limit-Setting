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
#include<TMath.h>

#include <string>

#endif


void ensembleTest_ttbar_singlechannel(int mass,int i,int j,int pe)
{
    //int Zprimemass[7]={1750,2000,2250,2500,2750,3000,4000};
    // open log file
   	 BCLog::OpenLog(Form("./LogFiles/log_Zprime%d%d%d.txt",mass,i,j), BCLog::detail, BCLog::detail);

   	 // ---- read histograms from a file ---- //

   	 // open file
	 //TFile* fitfile=TFile::Open("./inputs/SearchResultData.root","READ");
   	 std::string fname = Form("./templates/ttbar_Zprime%d.root",mass);
   	 TFile* file = TFile::Open(fname.data(), "READ");

   	 // check if file is open
   	 if (!file || !file->IsOpen()) {
   	     BCLog::OutError(Form("Could not open file %s.", fname.c_str()));
   	     BCLog::OutError("Run macro CreateHistograms.C in Root to create the file.");
   	     return;
   	 }

   	 // read histograms
   	 TH1D* hist_bkg1  = (TH1D*)file->Get(Form("bkg%d%d",i,j));    // background template for channel 1
   	 TH1D* hist_sgn1  = (TH1D*)file->Get(Form("sgn%d%d",i,j)); // signal template for channel 1
   	 TH1D* hist_data1 = (TH1D*)file->Get(Form("data%d%d",i,j));  // data for channel 1
   	 double tot_bkg1=hist_bkg1->Integral();
   	 double tot_sgn1=hist_sgn1->Integral();
	 hist_sgn1->Scale(1./tot_sgn1);
	 double maxNSignal=0;
	 double stepsize=5;
	 double maxLsoFar=0;
	 double thisL=1;

	 // Estimate maximum number of signal events
	 while (maxLsoFar/thisL<1e5)
	 {
		double logL=0;
		for (int bin=1;bin<hist_bkg1->GetNbinsX()+1;bin++)
		{
			double d=hist_data1->GetBinContent(bin);
			double b=hist_bkg1->GetBinContent(bin)+maxNSignal*hist_sgn1->GetBinContent(bin);
			logL-=log(TMath::PoissonI(d,b));

		}
		thisL=exp(-logL);
		if (thisL>maxLsoFar) maxLsoFar=thisL;
		maxNSignal+=stepsize;
	 }

	 //TF1* fitfunction=(TF1*)fitfile->Get("theFitFunction");

   	 if (!hist_bkg1 ||  !hist_sgn1 ||  !hist_data1 ) {
   	     BCLog::OutError("Could not find data histograms");
   	     return;
   	 }

   	 // ---- perform fitting ---- //

   	 // create new fitter object
   	 BCMTF* m = new BCMTF("MyModel");

   	 // set Metropolis as marginalization method
   	 m->SetMarginalizationMethod(BCIntegrate::kMargMetropolis);

   	 // set the required precision of the MCMC (kLow, kQuick, kMedium, kHigh)
   	 // the higher the precision the longer the MCMC run
   	 m->SetPrecision(BCEngineMCMC::kQuick);

   	 // add channels
   	 m->AddChannel("channel1");
   	 //m->AddChannel("channel2");

   	 // add processes
   	 m->AddProcess("signal",                0, maxNSignal);
   	 m->AddProcess("background_channel1", 0, 3*tot_bkg1 );
   	 //m->AddProcess("background_channel2", 300., 700.);
   	 

   	 // set data
   	 m->SetData("channel1", *hist_data1);
   	 //m->SetData("channel2", *hist_data2);

   	 // set template and histograms
   	 // note: the process "background_channel2" is ignored in channel 1
   	 m->SetTemplate("channel1", "signal", *hist_sgn1, 1.0);
   	 m->SetTemplate("channel1", "background_channel1", *hist_bkg1, 1.0);
   	 // m->SetTemplate("channel1", "background_channel2", *hist_bkg1, 0.0);

   	 // set priors
   	 m->GetParameter("background_channel1").SetPrior(new BCGaussianPrior(tot_bkg1, sqrt(tot_bkg1)));
   	 m->GetParameter("signal").SetPriorConstant();

   	 // run MCMC
   	 m->MarginalizeAll();
   	 BCH1D  marginalizedSig = m->GetMarginalized(0);
   	 double CLpercentage = 0.95;
   	 double trueCL = marginalizedSig.GetLimit(CLpercentage);
   	 TH1D *CL=new TH1D("observedCL","",1,0,1);
   	 CL->SetBinContent(1,trueCL);
   	 //std::cout<<"trueCL:"<<trueCL<<std::endl;

   	 // find global mode
   	 m->FindMode( m->GetBestFitParameters() );

   	 // print results of the analysis into a text file
   	 m->PrintSummary();

   	 // ---- perform ensemble tests ---- //

   	 // create new analysis facility
   	 BCMTFAnalysisFacility* facility = new BCMTFAnalysisFacility(m);

   	 // settings
   	 facility->SetFlagMarginalize(true);

   	 // open new file
   	 file = TFile::Open(Form("./results/Step2/Step2_Zprime%d%d%d.root",mass,i,j), "RECREATE");
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
