#include<iostream>
#include<TFile.h>
#include<TH1F.h>
#include<TTree.h>
#include<vector>

void acceptance(bool scale)
{
	double lumi;
	const char* Lumi;
	if (scale) 
	{
		lumi=36.1;
		Lumi="36p1";
	}
	else
	{
		lumi=100;
		Lumi="100p";
	}

	int Zprimemass[8]={1750,2000,2250,2500,2750,3000,4000,5000};
	double xsec[8]={334,172,92.4,51.1,28.9,16.7,2.13,0.331}; //fb
	for (int i=0;i<8;i++)
	{
		int mass=Zprimemass[i];
		TFile * input=TFile::Open(Form("./templates_%s/ttbar_Zprime%d.root",Lumi,mass));
		TFile * output=new TFile(Form("./templates_%s/AccTimesEffforZprime%d.root",Lumi,mass),"RECREATE");
		double totsgn=0;
		double totbkg=0;
		std::vector<std::vector<double>> SingleChannelSgn={};
		std::vector<double> SingleRegionSgn(4);
		std::vector<std::vector<double>> SingleChannelBkg={};
		std::vector<double> SingleRegionBkg(4);
		TTree * acc=new TTree("acctimeseff","");
		acc->Branch(Form("totaccformass%d",mass),&totsgn,Form("totaccformass%d/D",mass));

		for (int i=0;i<2;i++) 
		{
			SingleChannelSgn.push_back(SingleRegionSgn);
			SingleChannelBkg.push_back(SingleRegionBkg);

		}
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<4;j++)
			{
				
				acc->Branch(Form("accofch%d%d",i,j),&(SingleChannelSgn[i])[j],Form("accofch%d%d/D",i,j));
				acc->Branch(Form("bkgofch%d%d",i,j),&(SingleChannelBkg[i])[j],Form("bkgofch%d%d/D",i,j));
				//Signal acc*eff for each channel
				TH1F* hist_sgn=(TH1F*)input->Get(Form("sgn%d%d",i,j));
				double n=hist_sgn->Integral();
				(SingleChannelSgn[i])[j]=n;
				totsgn+=n;
				//Background acc*eff for each channel
				TH1F* hist_bkg=(TH1F*)input->Get(Form("bkg%d%d",i,j));
				double m=hist_bkg->Integral();
				(SingleChannelBkg[i])[j]=m;
				totbkg+=m;
			}
		}
		
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<4;j++)
			{
				(SingleChannelSgn[i])[j]/=totsgn;
				(SingleChannelBkg[i])[j]/=totbkg;
			}
		}
		
		totsgn/=(xsec[i]*lumi);
		acc->Fill();
		output->cd();
		acc->Write();
		
		//delete output;
		//delete acc;
	}					
	
}


