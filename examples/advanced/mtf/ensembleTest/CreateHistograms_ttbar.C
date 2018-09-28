#include<TFile.h>
#include<TH1D.h>
#include<TString.h>
#include<TH1F.h>
#include<TCanvas.h>
#include<iostream>

void CreateHistograms_ttbar(int mass,bool scale)
{
 
    //whether to rescale
    double lumi0=36.1;
    double lumi1=100;
    const char * Lumi;
    if (scale) Lumi="100p";
    else Lumi="36p1";

    // efficiencies
    //int Zprimemass[7]={1750,2000,2250,2500,2750,3000,4000};
    double eff_sgn1 = 1.0;
    double eff_bkg1 = 1.0;
    vector<const char*> histname={"xmttmedium1b","xmttmedium2b","xmtttight1b","xmtttight2b"};

  
    // templates
    for (int i=0;i<4;i++)
	{
	for (int j=0;j<2;j++)
	{
	    TString pathtoBF;
	    TString re;
	    if (j==0) re="_R0_rebin_raw.root";
	    else re="_R3_rebin_raw.root";
	    pathtoBF="/global/homes/t/tongou/ttbar/test/source/Bayesian/inputs/sample/";
	    TFile* bkg1=TFile::Open(pathtoBF+"bkg"+re,"READ");
	    TFile* sgn1=TFile::Open(Form(pathtoBF+"Zprime%d"+re,mass),"READ");
	    TFile* data1=TFile::Open(pathtoBF+"data"+re,"READ");
	    TFile* datalike1=TFile::Open(pathtoBF+"datalike"+re,"READ");

	    TH1F* hist_bkg1raw= (TH1F*)bkg1->Get(histname.at(i));
	    TH1F* hist_sgn1raw= (TH1F*)sgn1->Get(histname.at(i));
	    TH1F* hist_data1raw=(TH1F*)data1->Get(histname.at(i));
	    TH1F* hist_datalikeraw=(TH1F*)datalike1->Get(histname.at(i));

	    int nbins=hist_bkg1raw->GetNbinsX();
	    //double xmin=hist_bkg1raw->GetBinLowEdge(1);
	    //double xmax=hist_bkg1raw->GetBinLowEdge(nbins+1);
	 
	    
	    //cut on 1.5 TeV
	    int m=0;
	    vector<double> bkg={};
	    vector<double> sgn={};
	    vector<double> data={};
	    vector<double> datalike={};
	    vector<double> bkgerr={};
	    vector<double> sgnerr={};
	    vector<double> dataerr={};
	    vector<double> datalikeerr={};
	    for (int k=1;k<nbins+1;k++)
	    {	
		if (hist_bkg1raw->GetBinLowEdge(k)<1500) continue;
		else
		{
			m+=1;
			if (!scale)
			{
				sgn.push_back(hist_sgn1raw->GetBinContent(k));
	                        sgnerr.push_back(hist_sgn1raw->GetBinError(k));
				bkg.push_back(hist_bkg1raw->GetBinContent(k));
                        	bkgerr.push_back(hist_bkg1raw->GetBinError(k));
				data.push_back(hist_data1raw->GetBinContent(k));
				dataerr.push_back(hist_data1raw->GetBinError(k));
				datalike.push_back(hist_datalikeraw->GetBinContent(k));
                	        datalikeerr.push_back(hist_datalikeraw->GetBinError(k));
			}
			else
			{
				double f=lumi1/lumi0;
				sgn.push_back(hist_sgn1raw->GetBinContent(k)*f);
	                        sgnerr.push_back(hist_sgn1raw->GetBinError(k)*f);
				bkg.push_back(hist_bkg1raw->GetBinContent(k)*f);
                        	bkgerr.push_back(hist_bkg1raw->GetBinError(k)*f);
				data.push_back(hist_data1raw->GetBinContent(k)*f);
                                dataerr.push_back(hist_data1raw->GetBinError(k)*f);
                                datalike.push_back(hist_datalikeraw->GetBinContent(k)*f);
                                datalikeerr.push_back(hist_datalikeraw->GetBinError(k)*f);

			}
		}
	    }
            double xmin=hist_bkg1raw->GetBinLowEdge(nbins-m+1);
	    double xmax=hist_bkg1raw->GetBinLowEdge(nbins+1);
	    TH1F* hist_bkg1=new TH1F(Form("bkg%d%d",j,i),"",m,xmin,xmax);
	    TH1F* hist_sgn1=new TH1F(Form("sgn%d%d",j,i),"",m,xmin,xmax);
     	    TH1F* hist_data1=new TH1F(Form("data%d%d",j,i),"",m,xmin,xmax);
	    TH1F* hist_datalike=new TH1F(Form("datalike%d%d",j,i),"",m,xmin,xmax);
	    //Rebin
	    Double_t xbins[15]={1500,1700,1900,2100,2300,2500,2700,3000,3300,3600,4000,4400,4800,5300,6000};
	    hist_bkg1->SetBins(14,xbins);
	    hist_sgn1->SetBins(14,xbins);
	    hist_data1->SetBins(14,xbins);
	    hist_datalike->SetBins(14,xbins);
	    
	    for (int k=1;k<m+1;k++)
	    {
		hist_bkg1->SetBinContent(k,bkg.at(k-1));
		hist_sgn1->SetBinContent(k,sgn.at(k-1));
		hist_data1->SetBinContent(k,data.at(k-1));
		hist_datalike->SetBinContent(k,datalike.at(k-1));
		hist_bkg1->SetBinError(k,bkgerr.at(k-1));
                hist_sgn1->SetBinError(k,sgnerr.at(k-1));
                hist_data1->SetBinError(k,dataerr.at(k-1));
		hist_datalike->SetBinError(k,datalikeerr.at(k-1));
	    }
    
	    // write histograms to file
	    const char *option;
	    if (i==0&&j==0) option="RECREATE";
	    else option="UPDATE";
	    TFile* file = TFile::Open(Form("./templates_%s/ttbar_Zprime%d.root",Lumi,mass), option);
	    file->cd();
	
	    hist_bkg1->Write();
	    hist_sgn1->Write();
	    hist_data1->Write();
	    hist_datalike->Write();

	    // close file
	    file->Close();
	}
    }
	    // free memory
//	   delete hist_bkg1;
//	   delete hist_bkg1raw;
//	   delete hist_sgn1;
//	   delete hist_sgn1raw;
//	   delete hist_data1;
//	   delete hist_data1raw;
}
