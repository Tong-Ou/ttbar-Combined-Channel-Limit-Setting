#include<iostream>
#include<TFile.h>
#include<TH1F.h>
#include<TTree.h>
#include<vector>

void acceptance()
{
	int Zprimemass[7]={1750,2000,2250,2500,2750,3000,4000};
	double xsec[7]={334,172,92.4,51.1,28.9,16.7,2.13}; //fb
	for (int i=0;i<7;i++)
	{
		int mass=Zprimemass[i];
		TFile * sgn=TFile::Open(Form("./templates/ttbar_Zprime%d.root",mass));
		TFile * output=new TFile(Form("./templates/AccTimesEffforZprime%d.root",mass),"RECREATE");
		double totsgn=0;
		std::vector<std::vector<double>> SingleChannel={};
		std::vector<double> SingleRegion(4);
		TTree * acc=new TTree("acctimeseff","");
		acc->Branch(Form("totaccformass%d",mass),&totsgn,Form("totaccformass%d/D",mass));

		for (int i=0;i<2;i++) SingleChannel.push_back(SingleRegion);

		for (int i=0;i<2;i++)
		{
			for (int j=0;j<4;j++)
			{
				
				acc->Branch(Form("accofch%d%d",i,j),&(SingleChannel[i])[j],Form("accofch%d%d/D",i,j));
				TH1F* hist_sgn=(TH1F*)sgn->Get(Form("sgn%d%d",i,j));
				double n=hist_sgn->Integral();
				(SingleChannel[i])[j]=n;
				totsgn+=n;
			}
		}
		
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<4;j++)
				(SingleChannel[i])[j]/=totsgn;
		}
		
		totsgn/=(xsec[i]*36.1);
		acc->Fill();
		output->cd();
		acc->Write();
		
		//delete output;
		//delete acc;
	}					
	
}


