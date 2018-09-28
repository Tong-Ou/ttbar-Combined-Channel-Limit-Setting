#include<TGraph.h>
#include<TFile.h>

void theoryCurve()
{	
	int Zprimemass[8]={1750,2000,2250,2500,2750,3000,4000,5000};
	double xsec[8]={0.334,0.172,0.0924,0.0511,0.0289,0.0167,0.00213,0.000331};
	TGraph * theory=new TGraph();
	int index=0;
	for (int i=0;i<8;i++)
	{
		double mass=Zprimemass[i];
		theory->SetPoint(index,mass,xsec[i]);
		index+=1;
	}
	theory->SetName("ZPrime02_graph");
	TFile * output=TFile::Open("./templates/TheoryCurve.root","RECREATE");
	output->cd();
	theory->Write();
	
}
