#include<iostream>

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
		TFile * Step2output=TFile::Open(Form("./results/Step2/Step2_Zprime%d00.root",mass),"READ");
		TH1D * observedCL=(TH1D*) Step2output->Get("observedCL");
		double CLObserved=observedCL->GetBinContent(1)/lumi;
		TTree * ensemble_test=(TTree*)Step2output->Get("ensemble_test");
		int nentries=ensemble_test->GetEntries();
		double CL;
		TH1D * CLPseudo=new TH1D("CLPseudo","",50,0,100);

		ensemble_test->SetBranchAddress("95quantile_marginalized_0",&CL);
		for (int j=0;j<nentries;j++)
		{
			ensemble_test->GetEvent(j);
			CLPseudo->Fill(CL);
			std::cout << "individual pseudo CL = " << CL << "/" << lumi << " = " << CL/lumi << std::endl;
		}
		double expectedCL=CLPseudo->GetMean(1)/lumi;
		double sigma=CLPseudo->GetStdDev(1)/lumi;

		observed->SetPoint(index,mass,CLObserved);
		observed->SetPointError(index,0,0);
		expectedWithOneSigma->SetPoint(index,mass,expectedCL);
		expectedWithOneSigma->SetPointError(index,0,0,sigma,sigma);
		expectedWithTwoSigma->SetPoint(index,mass,expectedCL);
		expectedWithTwoSigma->SetPointError(index,0,0,2*sigma,2*sigma);
		index+=1;
	}
	TFile outfile("./results/Step300.root","RECREATE");
	outfile.cd();
	observed->SetName("observedXSecAccVersusMass");
  	observed->Write();
  	expectedWithOneSigma->SetName("expectedXSecAccVersusMass_oneSigma");
  	expectedWithOneSigma->Write();
  	expectedWithTwoSigma->SetName("expectedXSecAccVersusMass_twoSigma");
  	expectedWithTwoSigma->Write();

  	outfile.Close();

	
}
