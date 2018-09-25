#include<iostream>
#include<TGraphErrors.h>
#include<TGraphAsymmErrors.h>
#include<TFile.h>
#include<TH1D.h>
#include<TTree.h>
#include<vector>

void myLimitSetting()
{
	int Zprimemass[7]={1750,2000,2250,2500,2750,3000,4000};
	double lumi=36100;
	int index=0;
	TGraphErrors * observed = new TGraphErrors();
        TGraphAsymmErrors * expectedWithOneSigma = new TGraphAsymmErrors();
        TGraphAsymmErrors * expectedWithTwoSigma = new TGraphAsymmErrors();

	for (int i=0;i<7;i++)
	{
		int mass=Zprimemass[i];
		TFile * Step2output=TFile::Open(Form("./results/Step2/datalike/Step2_Zprime%d00.root",mass),"READ");
		
		//Read observed upper limit
		TH1D * observedCL=(TH1D*) Step2output->Get("observedCL");
		double CLObserved=observedCL->GetBinContent(1)/lumi;

		TTree * ensemble_test=(TTree*)Step2output->Get("ensemble_test");
		int nentries=ensemble_test->GetEntries();
		double CL;
		vector<double>CLPseudo={};

		ensemble_test->SetBranchAddress("95quantile_marginalized_0",&CL);
		for (int j=0;j<nentries;j++)
		{
			ensemble_test->GetEvent(j);
			CLPseudo.push_back(CL);
		//	std::cout << "individual pseudo CL = " << CL << "/" << lumi << " = " << CL/lumi << std::endl;
		}
		
		//GetCenterAndSigmaDeviations
		std::sort(CLPseudo.begin(),CLPseudo.end());
		int nVals=CLPseudo.size();
		vector<double> bandLimits;
  		double wantEvents;
  		int bestEvent;
  		double quantiles [5] = {0.02275,0.1587,0.5,0.8413,0.9772};
  		for (int i=0; i<5; i++) {		
    		wantEvents = nVals*quantiles[i];
    		bestEvent = (int) wantEvents;
    		bandLimits.push_back(CLPseudo.at(bestEvent)/lumi);
  		}

		//Set points on observed and expected graphs
		observed->SetPoint(index,mass,CLObserved);
		observed->SetPointError(index,0,0);
		expectedWithOneSigma->SetPoint(index,mass,bandLimits.at(2));
		expectedWithOneSigma->SetPointError(index,0,0,(bandLimits.at(2)-bandLimits.at(1)),(bandLimits.at(3)-bandLimits.at(2)));
		expectedWithTwoSigma->SetPoint(index,mass,bandLimits.at(2));
		expectedWithTwoSigma->SetPointError(index,0,0,(bandLimits.at(2)-bandLimits.at(0)),(bandLimits.at(4)-bandLimits.at(2)));
		std::cout << "Uncertainty bands " << bandLimits.at(1) << " " << bandLimits.at(3) << std::endl;
		index+=1;
	}

	TFile outfile("./results/Step300_datalike.root","RECREATE");
	outfile.cd();
	observed->SetName("observedXSecAccVersusMass");
  	observed->Write();
  	expectedWithOneSigma->SetName("expectedXSecAccVersusMass_oneSigma");
  	expectedWithOneSigma->Write();
  	expectedWithTwoSigma->SetName("expectedXSecAccVersusMass_twoSigma");
  	expectedWithTwoSigma->Write();

  	outfile.Close();

	
}
