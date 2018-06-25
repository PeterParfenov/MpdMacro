void DrawLAQGSMres()
{
	const int 						n_geant 				= 2;
	const TString 					l_res_title 		[] 	= {TString("Au+Au, #sqrt{s_{NN}}=11 GeV, LAQGSM, 100k")};
	const int 						marker_res_color 	[] 	= {1,2,1,2};
	const int 						marker_res_style 	[] 	= {20,21,24,25};
	const std::pair<double,double>	range_X_res			[]	= {{0.1,79.},{0.1,79.}};
	const std::pair<double,double>	range_Y_res			[]	= {{0.3,1.1},{0.05,0.95}};
	const TString					s_side				[]	= {TString("R"),TString("L")};
	const std::pair<double,double>  latex_coord				= {0.2,0.95};
	const std::pair<int,int>		ElrIndexs			[]	= {{0,0},{0,1},{0,2},{1,0},{1,1},{1,2},{2,0},{2,1},{2,2}};

	gROOT -> ForceStyle();
	TFile * fStyle = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/my_style.root","read");

	TStyle * style = (TStyle*) fStyle -> Get("style");
	style -> cd();

	TFile *    fRes_true[n_geant];
	TFile *    fRes_reco[n_geant];
	TFile *    fBasicQA[n_geant];
	TProfile * p_true[n_geant][2];
	TProfile * p_reco[n_geant][2];
	TProfile * p_b_vs_E[n_geant];
	TH2F *     h2_b_vs_E[n_geant];
	TH2F *     h2_LR_EnFHCAL[n_geant];
	TH2F *     h2_TotalEnFHCAL[n_geant][2];
	
	TH2F* hFHCalElrCorr[n_geant][3][3];
	TH2F* hFHCalELMult[n_geant][3];
	TH2F* hFHCalERMult[n_geant][3];
	TH2F* hFHCalDiffEMult[n_geant][3];
	TH2F* hFHCalDiffEvsEL[n_geant][3];
	TH2F* hFHCalDiffEvsER[n_geant][3];

	fRes_true[0] = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/res_hist-11gev-LAQGSM-GEANT3.root","read");
	fRes_true[1] = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/res_hist-11gev-LAQGSM-GEANT4.root","read");
	fRes_reco[0] = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/res-fit-11gev-LAQGSM-GEANT3.root" ,"read");
	fRes_reco[1] = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/res-fit-11gev-LAQGSM-GEANT4.root" ,"read");
	
	fBasicQA[0]  = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/qa_11gev_geant3.root","read");
	fBasicQA[1]  = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/qa_11gev_geant4.root","read");

	for (int i=0;i<n_geant;i++){
		p_b_vs_E[i] = (TProfile*) fRes_true[i] -> Get(Form("p_b_vs_energy"));
		p_b_vs_E[i] -> SetTitle("");
		p_b_vs_E[i] -> SetName(Form("p_b_vs_E%i",i));
		p_b_vs_E[i] -> GetXaxis() -> SetTitle("E_{dep}, a.u.");
		p_b_vs_E[i] -> GetYaxis() -> SetTitle("b, fm");
		p_b_vs_E[i] -> GetXaxis() -> SetNdivisions(505);
		p_b_vs_E[i] -> GetYaxis() -> SetNdivisions(505);
		p_b_vs_E[i] -> SetMarkerColor(marker_res_color[i*2]);
		p_b_vs_E[i] -> SetLineColor(marker_res_color[i*2]);
		p_b_vs_E[i] -> SetMarkerStyle(marker_res_style[i]);
		p_b_vs_E[i] -> GetXaxis() -> SetRangeUser(0.,68.);
		p_b_vs_E[i] -> GetYaxis() -> SetRangeUser(6.,15.);
		
		h2_b_vs_E[i] = (TH2F*) fRes_true[i] -> Get(Form("h2_b_vs_energy"));
		h2_b_vs_E[i] -> SetTitle("");
		h2_b_vs_E[i] -> SetName(Form("h2_b_vs_E%i",i));
		h2_b_vs_E[i] -> GetXaxis() -> SetTitle("E_{dep}, a.u.");
		h2_b_vs_E[i] -> GetYaxis() -> SetTitle("b, fm");
		h2_b_vs_E[i] -> GetXaxis() -> SetNdivisions(505);
		h2_b_vs_E[i] -> GetYaxis() -> SetNdivisions(505);
		h2_b_vs_E[i] -> GetXaxis() -> SetRangeUser(0.,68.);
		h2_b_vs_E[i] -> GetYaxis() -> SetRangeUser(0.,18.);
		
		h2_LR_EnFHCAL[i] =  (TH2F*) fRes_true[i] -> Get(Form("h2_energyZDC_L_vs_energy_ZDC_R"));
		h2_LR_EnFHCAL[i] -> SetTitle("");
		h2_LR_EnFHCAL[i] -> SetName(Form("h2_LR_EnFHCAL%i",i));
		h2_LR_EnFHCAL[i] -> GetXaxis() -> SetTitle("E_{L}, a.u.");
		h2_LR_EnFHCAL[i] -> GetYaxis() -> SetTitle("E_{R}, a.u.");
		h2_LR_EnFHCAL[i] -> GetXaxis() -> SetNdivisions(505);
		h2_LR_EnFHCAL[i] -> GetYaxis() -> SetNdivisions(505);
		h2_LR_EnFHCAL[i] -> GetYaxis() -> SetRangeUser(0.,40.);
		h2_LR_EnFHCAL[i] -> GetXaxis() -> SetRangeUser(0.,40.);
		
		for (int j=0;j<3;j++){
			hFHCalELMult[i][j]    = (TH2F*) fBasicQA[i] -> Get(Form("Centrality/hFHCalELMult%i",j));
			hFHCalELMult[i][j]	 -> SetName(Form("hFHCalELMult%i%i",i,j));
			hFHCalERMult[i][j]    = (TH2F*) fBasicQA[i] -> Get(Form("Centrality/hFHCalERMult%i",j));
			hFHCalERMult[i][j]	 -> SetName(Form("hFHCalERMult%i%i",i,j));
			hFHCalDiffEMult[i][j] = (TH2F*) fBasicQA[i] -> Get(Form("Centrality/hFHCalDiffEMult%i",j));
			hFHCalDiffEMult[i][j]-> SetName(Form("hFHCalDiffEMult%i%i",i,j));
			hFHCalDiffEvsEL[i][j] = (TH2F*) fBasicQA[i] -> Get(Form("Centrality/hFHCalDiffEvsEL%i",j));
			hFHCalDiffEvsEL[i][j]-> SetName(Form("hFHCalDiffEvsEL%i%i",i,j));
			hFHCalDiffEvsER[i][j] = (TH2F*) fBasicQA[i] -> Get(Form("Centrality/hFHCalDiffEvsER%i",j));
			hFHCalDiffEvsER[i][j]-> SetName(Form("hFHCalDiffEvsER%i%i",i,j));
			for (int k=0;k<3;k++){
				hFHCalElrCorr[i][j][k] = (TH2F*) fBasicQA[i] -> Get(Form("Centrality/hFHCalElrCorr%i%i",j,k));
				hFHCalElrCorr[i][j][k]-> SetName(Form("hFHCalElrCorr%i%i%i",i,j,k));
			}
		}
		
		for (int i_side=0;i_side<2;i_side++){
			h2_TotalEnFHCAL[i][i_side] =  (TH2F*) fRes_true[i] -> Get(Form("h2_energy_ZDC_vs_multiplicity[%i]",i_side));
			h2_TotalEnFHCAL[i][i_side] -> SetTitle("");
			h2_TotalEnFHCAL[i][i_side] -> SetName(Form("h2_TotalEnFHCAL%i%i",i,i_side));
			h2_TotalEnFHCAL[i][i_side] -> GetYaxis() -> SetTitle("Multiplicity in TPC");
			h2_TotalEnFHCAL[i][i_side] -> GetXaxis() -> SetTitle(Form("E_{%s}, a.u.",s_side[i_side].Data()));
			h2_TotalEnFHCAL[i][i_side] -> GetXaxis() -> SetNdivisions(505);
			h2_TotalEnFHCAL[i][i_side] -> GetYaxis() -> SetNdivisions(505);
			h2_TotalEnFHCAL[i][i_side] -> GetXaxis() -> SetRangeUser(0.,40.);
			h2_TotalEnFHCAL[i][i_side] -> GetYaxis() -> SetRangeUser(0.,700.);
		}
		
		for (int i_harm=0;i_harm<2;i_harm++){
			p_true[i][i_harm] = (TProfile*) fRes_true[i] -> Get(Form("p_true_Res_vs_b[%i][%i][%i]",i_harm,0,1));
			p_true[i][i_harm] -> GetXaxis() -> SetTitle("Centrality (TPC), %");
			p_true[i][i_harm] -> GetYaxis() -> SetTitle(Form("<cos[%i(#Psi_{1} - #Psi_{RP})]>",i_harm+1));
			p_true[i][i_harm] -> SetTitle("");
			p_true[i][i_harm] -> GetXaxis() -> SetNdivisions(505);
			p_true[i][i_harm] -> GetYaxis() -> SetNdivisions(505);
			p_true[i][i_harm] -> SetMarkerColor(marker_res_color[i]);
			p_true[i][i_harm] -> SetLineColor(marker_res_color[i]);
			p_true[i][i_harm] -> SetMarkerStyle(marker_res_style[i]);
			p_true[i][i_harm] -> GetXaxis() -> SetRangeUser(range_X_res[i_harm].first, range_X_res[i_harm].second);
			p_true[i][i_harm] -> GetYaxis() -> SetRangeUser(range_Y_res[i_harm].first, range_Y_res[i_harm].second);
			
			p_reco[i][i_harm] = (TProfile*) fRes_reco[i] -> Get(Form("p_ResPsi_vs_b[%i][%i][%i]",i_harm,0,1));
			p_reco[i][i_harm] -> GetXaxis() -> SetTitle("Centrality (TPC), %");
			p_reco[i][i_harm] -> GetYaxis() -> SetTitle(Form("<cos[%i(#Psi_{1} - #Psi_{RP})]>",i_harm+1));
			p_reco[i][i_harm] -> SetTitle("");
			p_reco[i][i_harm] -> GetXaxis() -> SetNdivisions(505);
			p_reco[i][i_harm] -> GetYaxis() -> SetNdivisions(505);
			p_reco[i][i_harm] -> SetMarkerColor(marker_res_color[i+2]);
			p_reco[i][i_harm] -> SetLineColor(marker_res_color[i+2]);
			p_reco[i][i_harm] -> SetMarkerStyle(marker_res_style[i+2]);
			p_reco[i][i_harm] -> GetXaxis() -> SetRangeUser(range_X_res[i_harm].first, range_X_res[i_harm].second);
			p_reco[i][i_harm] -> GetYaxis() -> SetRangeUser(range_Y_res[i_harm].first, range_Y_res[i_harm].second);
		}
	}
	
	//------RESOLUTION------------------------------------------------------------------------------------------------//
	TCanvas * canv_res_total = new TCanvas("canv_res_total","Res true",1000,500);
	canv_res_total -> Divide(2,1);
	TLegend * l_res_total[2];
	for (int i=0;i<2;i++){
		l_res_total[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	
	canv_res_total -> cd(1);
	l_res_total[0] -> SetHeader(l_res_title[0],"C");
	l_res_total[0] -> SetNColumns(2);
	l_res_total[0] -> AddEntry(p_true[0][0],"true, GEANT3","p");
	l_res_total[0] -> AddEntry(p_true[1][0],"true, GEANT4","p");
	l_res_total[0] -> AddEntry(p_reco[0][0],"reco, GEANT3","p");
	l_res_total[0] -> AddEntry(p_reco[1][0],"reco, GEANT4","p");
	p_true[0][0] -> Draw();
	l_res_total[0] -> Draw();
	p_true[0][0] -> Draw("SAME");
	p_true[1][0] -> Draw("SAME");
	p_reco[0][0] -> Draw("PHISTSAME");
	p_reco[1][0] -> Draw("PHISTSAME");
	
	canv_res_total -> cd(2);
	l_res_total[1] -> SetHeader(l_res_title[0],"C");
	l_res_total[1] -> SetNColumns(2);
	l_res_total[1] -> AddEntry(p_true[0][1],"true, GEANT3","p");
	l_res_total[1] -> AddEntry(p_true[1][1],"true, GEANT4","p");
	l_res_total[1] -> AddEntry(p_reco[0][1],"reco, GEANT3","p");
	l_res_total[1] -> AddEntry(p_reco[1][1],"reco, GEANT4","p");
	p_true[0][1] -> Draw();
	l_res_total[1] -> Draw();
	p_true[0][1] -> Draw("SAME");
	p_true[1][1] -> Draw("SAME");
	p_reco[0][1] -> Draw("PHISTSAME");
	p_reco[1][1] -> Draw("PHISTSAME");
	
	canv_res_total -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_v1.pdf","recreate");
	canv_res_total -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_v1.png","recreate");
	
	TCanvas * canv_res_true = new TCanvas("canv_res_true","Res true",1000,500);
	canv_res_true -> Divide(2,1);
	TLegend * l_res_true[2];
	for (int i=0;i<2;i++){
		l_res_true[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	
	canv_res_true -> cd(1);
	l_res_true[0] -> SetHeader(l_res_title[0],"C");
	l_res_true[0] -> SetNColumns(2);
	l_res_true[0] -> AddEntry(p_true[0][0],"true, GEANT3","p");
	l_res_true[0] -> AddEntry(p_true[1][0],"true, GEANT4","p");
	p_true[0][0] -> Draw();
	l_res_true[0] -> Draw();
	p_true[0][0] -> Draw("SAME");
	p_true[1][0] -> Draw("SAME");
	
	canv_res_true -> cd(2);
	l_res_true[1] -> SetHeader(l_res_title[0],"C");
	l_res_true[1] -> SetNColumns(2);
	l_res_true[1] -> AddEntry(p_true[0][1],"true, GEANT3","p");
	l_res_true[1] -> AddEntry(p_true[1][1],"true, GEANT4","p");
	p_true[0][1] -> Draw();
	l_res_true[1] -> Draw();
	p_true[0][1] -> Draw("SAME");
	p_true[1][1] -> Draw("SAME");
	
	canv_res_true -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_true_v1.pdf","recreate");
	canv_res_true -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_true_v1.png","recreate");
	
	TCanvas * canv_res_reco = new TCanvas("canv_res_reco","Res true",1000,500);
	canv_res_reco -> Divide(2,1);
	TLegend * l_res_reco[2];
	for (int i=0;i<2;i++){
		l_res_reco[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	
	canv_res_reco -> cd(1);
	l_res_reco[0] -> SetHeader(l_res_title[0],"C");
	l_res_reco[0] -> SetNColumns(2);
	l_res_reco[0] -> AddEntry(p_reco[0][0],"reco, GEANT3","p");
	l_res_reco[0] -> AddEntry(p_reco[1][0],"reco, GEANT4","p");
	p_reco[0][0] -> Draw("PHIST");
	l_res_reco[0] -> Draw();
	p_reco[0][0] -> Draw("PHISTSAME");
	p_reco[1][0] -> Draw("PHISTSAME");
	
	canv_res_reco -> cd(2);
	l_res_reco[1] -> SetHeader(l_res_title[0],"C");
	l_res_reco[1] -> SetNColumns(2);
	l_res_reco[1] -> AddEntry(p_reco[0][1],"reco, GEANT3","p");
	l_res_reco[1] -> AddEntry(p_reco[1][1],"reco, GEANT4","p");
	p_reco[0][1] -> Draw("PHIST");
	l_res_reco[1] -> Draw();
	p_reco[0][1] -> Draw("PHISTSAME");
	p_reco[1][1] -> Draw("PHISTSAME");
	
	canv_res_reco -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_reco_v1.pdf","recreate");
	canv_res_reco -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_reco_v1.png","recreate");
	
	TCanvas * canv_res_reco_true = new TCanvas("canv_res_reco_true","Res true",1000,1000);
	canv_res_reco_true -> Divide(2,2);
	TLegend * l_res_reco_true[4];
	for (int i=0;i<4;i++){
		l_res_reco_true[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	
	canv_res_reco_true -> cd(1);
	p_true[0][0] -> SetMarkerStyle(marker_res_style[2]);
	p_reco[0][0] -> SetMarkerStyle(marker_res_style[3]);
	l_res_reco_true[0] -> SetHeader(l_res_title[0],"C");
	l_res_reco_true[0] -> SetNColumns(2);
	l_res_reco_true[0] -> AddEntry(p_true[0][0],"true, GEANT3","p");
	//l_res_reco_true[0] -> AddEntry(p_true[1][0],"true, GEANT4","p");
	l_res_reco_true[0] -> AddEntry(p_reco[0][0],"reco, GEANT3","p");
	//l_res_reco_true[0] -> AddEntry(p_reco[1][0],"reco, GEANT4","p");
	p_true[0][0] -> Draw();
	l_res_reco_true[0] -> Draw();
	p_true[0][0] -> Draw("SAME");
	//p_true[1][0] -> Draw("SAME");
	p_reco[0][0] -> Draw("PHISTSAME");
	//p_reco[1][0] -> Draw("PHISTSAME");
	
	canv_res_reco_true -> cd(2);
	p_true[0][1] -> SetMarkerStyle(marker_res_style[2]);
	p_reco[0][1] -> SetMarkerStyle(marker_res_style[3]);
	l_res_reco_true[1] -> SetHeader(l_res_title[0],"C");
	l_res_reco_true[1] -> SetNColumns(2);
	l_res_reco_true[1] -> AddEntry(p_true[0][1],"true, GEANT3","p");
	//l_res_reco_true[1] -> AddEntry(p_true[1][1],"true, GEANT4","p");
	l_res_reco_true[1] -> AddEntry(p_reco[0][1],"reco, GEANT3","p");
	//l_res_reco_true[1] -> AddEntry(p_reco[1][1],"reco, GEANT4","p");
	p_true[0][1] -> Draw();
	l_res_reco_true[1] -> Draw();
	p_true[0][1] -> Draw("SAME");
	//p_true[1][1] -> Draw("SAME");
	p_reco[0][1] -> Draw("PHISTSAME");
	//p_reco[1][1] -> Draw("PHISTSAME");
	
	canv_res_reco_true -> cd(3);
	p_true[1][0] -> SetMarkerStyle(marker_res_style[2]);
	p_reco[1][0] -> SetMarkerStyle(marker_res_style[3]);
	l_res_reco_true[2] -> SetHeader(l_res_title[0],"C");
	l_res_reco_true[2] -> SetNColumns(2);
	//l_res_reco_true[0] -> AddEntry(p_true[0][0],"true, GEANT3","p");
	l_res_reco_true[2] -> AddEntry(p_true[1][0],"true, GEANT4","p");
	//l_res_reco_true[0] -> AddEntry(p_reco[0][0],"reco, GEANT3","p");
	l_res_reco_true[2] -> AddEntry(p_reco[1][0],"reco, GEANT4","p");
	p_true[1][0] -> Draw();
	l_res_reco_true[2] -> Draw();
	//p_true[0][0] -> Draw("SAME");
	p_true[1][0] -> Draw("SAME");
	//p_reco[0][0] -> Draw("PHISTSAME");
	p_reco[1][0] -> Draw("PHISTSAME");
	
	canv_res_reco_true -> cd(4);
	p_true[1][1] -> SetMarkerStyle(marker_res_style[2]);
	p_reco[1][1] -> SetMarkerStyle(marker_res_style[3]);
	l_res_reco_true[3] -> SetHeader(l_res_title[0],"C");
	l_res_reco_true[3] -> SetNColumns(2);
	//l_res_reco_true[1] -> AddEntry(p_true[0][1],"true, GEANT3","p");
	l_res_reco_true[3] -> AddEntry(p_true[1][1],"true, GEANT4","p");
	//l_res_reco_true[1] -> AddEntry(p_reco[0][1],"reco, GEANT3","p");
	l_res_reco_true[3] -> AddEntry(p_reco[1][1],"reco, GEANT4","p");
	p_true[1][1] -> Draw();
	l_res_reco_true[3] -> Draw();
	//p_true[0][1] -> Draw("SAME");
	p_true[1][1] -> Draw("SAME");
	//p_reco[0][1] -> Draw("PHISTSAME");
	p_reco[1][1] -> Draw("PHISTSAME");
	
	canv_res_reco_true -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_reco_true_v1.pdf","recreate");
	canv_res_reco_true -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_res_reco_true_v1.png","recreate");
	
	//------LR-FHCAL--------------------------------------------------------------------------------------------------//
	TCanvas * canv_LR = new TCanvas("canv_LR","LR Energy",1000,500);
	TLegend * l_LR[2];
	for (int i=0;i<2;i++){
		l_LR[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	canv_LR -> Divide(2,1);
	
	canv_LR -> cd(1);
	canv_LR -> cd(1) -> SetLogz();
	l_LR[0] -> SetHeader("GEANT3","C");
	h2_LR_EnFHCAL[0] -> Draw("colz");
	l_LR[0] -> Draw();
	
	canv_LR -> cd(2);
	canv_LR -> cd(2) -> SetLogz();
	l_LR[1] -> SetHeader("GEANT4","C");
	h2_LR_EnFHCAL[1] -> Draw("colz");
	l_LR[1] -> Draw();
	
	canv_LR -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EdepLR.pdf","recreate");
	canv_LR -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EdepLR.png","recreate");
	
	//------Energy-Total----------------------------------------------------------------------------------------------//
	TCanvas * canv_Etot = new TCanvas("canv_Etot","Total Energy",1000,1000);
	TLegend * l_Etot[4];
	TLegendEntry *header;
	for (int i=0;i<4;i++){
		l_Etot[i] = new TLegend(0.2,0.85,0.88,0.897);
	}
	canv_Etot -> Divide(2,2);
	
	canv_Etot -> cd(1);
	canv_Etot -> cd(1) -> SetLogz();
	l_Etot[0] -> SetHeader((l_res_title[0]+", GEANT3").Data(),"C");
	l_Etot[0] -> SetNColumns(2);
	header = (TLegendEntry*) l_Etot[0] -> GetListOfPrimitives() -> First();
	header -> SetTextSize(.035);
	h2_TotalEnFHCAL[0][1] -> Draw("colz");
	l_Etot[0] -> Draw();
	
	canv_Etot -> cd(2);
	canv_Etot -> cd(2) -> SetLogz();
	l_Etot[1] -> SetHeader((l_res_title[0]+", GEANT3").Data(),"C");
	l_Etot[1] -> SetNColumns(2);
	header = (TLegendEntry*) l_Etot[1] -> GetListOfPrimitives() -> First();
	header -> SetTextSize(.035);
	h2_TotalEnFHCAL[0][0] -> Draw("colz");
	l_Etot[1] -> Draw();
	
	canv_Etot -> cd(3);
	canv_Etot -> cd(3) -> SetLogz();
	l_Etot[2] -> SetHeader((l_res_title[0]+", GEANT4").Data(),"C");
	l_Etot[2] -> SetNColumns(2);
	header = (TLegendEntry*) l_Etot[2] -> GetListOfPrimitives() -> First();
	header -> SetTextSize(.035);
	h2_TotalEnFHCAL[1][1] -> Draw("colz");
	l_Etot[2] -> Draw();
	
	canv_Etot -> cd(4);
	canv_Etot -> cd(4) -> SetLogz();
	l_Etot[3] -> SetHeader((l_res_title[0]+", GEANT4").Data(),"C");
	l_Etot[3] -> SetNColumns(2);
	header = (TLegendEntry*) l_Etot[3] -> GetListOfPrimitives() -> First();
	header -> SetTextSize(.035);
	h2_TotalEnFHCAL[1][0] -> Draw("colz");
	l_Etot[3] -> Draw();
	
	canv_Etot -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EdepTotal.pdf","recreate");
	canv_Etot -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EdepTotal.png","recreate");
	
	//------Edep-vs-Multiplicity--------------------------------------------------------------------------------------//
	TCanvas * canv_EdepMult = new TCanvas("canv_EdepMult","Edep vs Multiplicity",500,500);
	TLegend * l_EdepMult[2];
	for (int i=0;i<2;i++){
		l_EdepMult[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	
	canv_EdepMult -> cd();
	l_EdepMult[0] -> SetHeader(l_res_title[0],"C");
	l_EdepMult[0] -> SetNColumns(2);
	l_EdepMult[0] -> AddEntry(p_b_vs_E[0],"GEANT3","p");
	l_EdepMult[0] -> AddEntry(p_b_vs_E[1],"GEANT4","p");
	p_b_vs_E[0]   -> Draw();
	l_EdepMult[0] -> Draw();
	p_b_vs_E[0]   -> Draw("SAME");
	p_b_vs_E[1]   -> Draw("SAME");
	
	canv_EdepMult -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EdepMult.pdf","recreate");
	canv_EdepMult -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EdepMult.png","recreate");
	
	TCanvas * canv_EdepMult2d = new TCanvas("canv_EdepMult2d","Edep vs Multiplicity",1000,500);
	canv_EdepMult2d -> Divide(2,1);
	TLegend * l_EdepMult2d[2];
	for (int i=0;i<2;i++){
		l_EdepMult2d[i] = new TLegend(0.2,0.8,0.88,0.88);
	}
	
	canv_EdepMult2d -> cd(1);
	canv_EdepMult2d -> cd(1) -> SetLogz();
	l_EdepMult2d[0] -> SetHeader((l_res_title[0]+", GEANT3").Data(),"C");
	h2_b_vs_E[0]   -> Draw("COLZ");
	l_EdepMult2d[0] -> Draw();
	
	canv_EdepMult2d -> cd(2);
	canv_EdepMult2d -> cd(2) -> SetLogz();
	l_EdepMult2d[1] -> SetHeader((l_res_title[0]+", GEANT4").Data(),"C");
	h2_b_vs_E[1]   -> Draw("COLZ");
	l_EdepMult2d[1] -> Draw();
	
	canv_EdepMult2d -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_2dEdepMult.pdf","recreate");
	canv_EdepMult2d -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_2dEdepMult.png","recreate");
	
	//------FHCal-rings-correlators-----------------------------------------------------------------------------------//
	TCanvas* c_ElrCorr[n_geant];
	TLatex*  text = new TLatex();
	TString  sTitle;
	TLegend* lElrCorr[3][3];
	double thisRange[2] = {21.9/2,21.9};
	const TString lElrTitle [3][3] = {{TString("INNER-INNER") ,TString("INNER-MIDDLE") ,TString("INNER-OUTER")} ,
									  {TString("MIDDLE-INNER"),TString("MIDDLE-MIDDLE"),TString("MIDDLE-OUTER")},
									  {TString("OUTER-INNER") ,TString("OUTER-MIDDLE") ,TString("OUTER-OUTER")}};
	for (int i=0;i<n_geant;i++){
		c_ElrCorr[i] = new TCanvas(Form("c_ElrCorr%i",i),Form("c_ElrCorr%i",i),900,900);
	}
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			lElrCorr[i][j] = new TLegend(latex_coord.first, latex_coord.second-0.05,1-latex_coord.first, latex_coord.second);
		}
	}
	
	for (int i=0;i<n_geant;i++){
		c_ElrCorr[i] -> Divide(3,3);
		for (int j=0;j<9;j++){
			c_ElrCorr[i] -> cd(j+1);
			c_ElrCorr[i] -> cd(j+1) -> SetLogz();
			c_ElrCorr[i] -> cd(j+1) -> SetTopMargin(0.01);
			c_ElrCorr[i] -> cd(j+1) -> SetRightMargin(0.105);
			if (i == 0) sTitle = l_res_title[0]+", GEANT3";
			else 		sTitle = l_res_title[0]+", GEANT4";
			//lElrCorr [ElrIndexs[j].first][ElrIndexs[j].second] -> SetHeader(lElrTitle[ElrIndexs[j].first][ElrIndexs[j].second].Data(),"C");
			hFHCalElrCorr[i][ElrIndexs[j].first][ElrIndexs[j].second] -> SetTitle("");
			hFHCalElrCorr[i][ElrIndexs[j].first][ElrIndexs[j].second] -> GetXaxis() -> SetRangeUser(0.,thisRange[i]);
			hFHCalElrCorr[i][ElrIndexs[j].first][ElrIndexs[j].second] -> GetYaxis() -> SetRangeUser(0.,thisRange[i]);
			hFHCalElrCorr[i][ElrIndexs[j].first][ElrIndexs[j].second] -> GetYaxis() -> SetNdivisions(505);
			hFHCalElrCorr[i][ElrIndexs[j].first][ElrIndexs[j].second] -> GetXaxis() -> SetNdivisions(505);
			hFHCalElrCorr[i][ElrIndexs[j].first][ElrIndexs[j].second] -> Draw("colz");
			//lElrCorr [ElrIndexs[j].first][ElrIndexs[j].second] -> Draw();
			text -> SetTextSize(0.03);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second, sTitle.Data());
			text -> SetTextSize(0.05);
			text -> DrawLatexNDC(0.5, latex_coord.second-0.07, lElrTitle[ElrIndexs[j].first][ElrIndexs[j].second].Data());
		}
		c_ElrCorr[i] -> SaveAs(Form("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_ElrCorr%i.pdf",i),"recreate");
		c_ElrCorr[i] -> SaveAs(Form("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_ElrCorr%i.png",i),"recreate");
	}
	
	//------FHCal-rings-EvsMult---------------------------------------------------------------------------------------//
	TCanvas* c_EvsMult[n_geant];
	const TString lEMTitle [] = {TString("INNER") ,TString("MIDDLE") ,TString("OUTER")};
	for (int i=0;i<n_geant;i++){
		c_EvsMult[i] = new TCanvas(Form("c_EvsMult%i",i),Form("c_EvsMult%i",i),1500,1000);
	}
	for (int i=0;i<n_geant;i++){
		c_EvsMult[i] -> Divide(3,2);
		for (int j=0;j<3;j++){
			c_EvsMult[i] -> cd(j+1);
			c_EvsMult[i] -> cd(j+1) -> SetLogz();
			c_EvsMult[i] -> cd(j+1) -> SetTopMargin(0.01);
			c_EvsMult[i] -> cd(j+1) -> SetRightMargin(0.105);
			if (i == 0) sTitle = l_res_title[0]+", GEANT3";
			else 		sTitle = l_res_title[0]+", GEANT4";
			hFHCalELMult[i][j] -> SetTitle("");
			hFHCalELMult[i][j] -> GetYaxis() -> SetRangeUser(0.,thisRange[i]);
			hFHCalELMult[i][j] -> GetXaxis() -> SetRangeUser(0.,599.);
			hFHCalELMult[i][j] -> GetYaxis() -> SetNdivisions(505);
			hFHCalELMult[i][j] -> GetXaxis() -> SetNdivisions(505);
			hFHCalELMult[i][j] -> Draw("colz");
			text -> SetTextSize(0.03);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second, sTitle.Data());
			text -> SetTextSize(0.05);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second-0.07, lEMTitle[j].Data());
			
			c_EvsMult[i] -> cd(j+4);
			c_EvsMult[i] -> cd(j+4) -> SetLogz();
			c_EvsMult[i] -> cd(j+4) -> SetTopMargin(0.01);
			c_EvsMult[i] -> cd(j+4) -> SetRightMargin(0.105);
			if (i == 0) sTitle = l_res_title[0]+", GEANT3";
			else 		sTitle = l_res_title[0]+", GEANT4";
			hFHCalERMult[i][j] -> SetTitle("");
			hFHCalERMult[i][j] -> GetYaxis() -> SetRangeUser(0.,thisRange[i]);
			hFHCalERMult[i][j] -> GetXaxis() -> SetRangeUser(0.,599.);
			hFHCalERMult[i][j] -> GetYaxis() -> SetNdivisions(505);
			hFHCalERMult[i][j] -> GetXaxis() -> SetNdivisions(505);
			hFHCalERMult[i][j] -> Draw("colz");
			text -> SetTextSize(0.03);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second, sTitle.Data());
			text -> SetTextSize(0.05);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second-0.07, lEMTitle[j].Data());
		}
		c_EvsMult[i] -> SaveAs(Form("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EvsMult%i.pdf",i),"recreate");
		c_EvsMult[i] -> SaveAs(Form("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_EvsMult%i.png",i),"recreate");
	}

	//------FHCal-rings-Ediff-----------------------------------------------------------------------------------------//
	TCanvas* c_Ediff[n_geant];
	//const TString lEMTitle [] = {TString("INNER") ,TString("MIDDLE") ,TString("OUTER")};
	for (int i=0;i<n_geant;i++){
		c_Ediff[i] = new TCanvas(Form("c_Ediff%i",i),Form("c_Ediff%i",i),900,900);
	}
	for (int i=0;i<n_geant;i++){
		c_Ediff[i] -> Divide(3,3);
		for (int j=0;j<3;j++){
			c_Ediff[i] -> cd(j+1);
			c_Ediff[i] -> cd(j+1) -> SetLogz();
			c_Ediff[i] -> cd(j+1) -> SetTopMargin(0.01);
			c_Ediff[i] -> cd(j+1) -> SetRightMargin(0.105);
			if (i == 0) sTitle = l_res_title[0]+", GEANT3";
			else 		sTitle = l_res_title[0]+", GEANT4";
			hFHCalDiffEMult[i][j] -> SetTitle("");
			hFHCalDiffEMult[i][j] -> GetYaxis() -> SetRangeUser(-thisRange[i]/(j+1),thisRange[i]/(j+1));
			hFHCalDiffEMult[i][j] -> GetXaxis() -> SetRangeUser(0.,599.);
			hFHCalDiffEMult[i][j] -> GetYaxis() -> SetNdivisions(505);
			hFHCalDiffEMult[i][j] -> GetXaxis() -> SetNdivisions(505);
			hFHCalDiffEMult[i][j] -> Draw("colz");
			text -> SetTextSize(0.03);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second, sTitle.Data());
			text -> SetTextSize(0.05);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second-0.07, lEMTitle[j].Data());
			
			c_Ediff[i] -> cd(j+4);
			c_Ediff[i] -> cd(j+4) -> SetLogz();
			c_Ediff[i] -> cd(j+4) -> SetTopMargin(0.01);
			c_Ediff[i] -> cd(j+4) -> SetRightMargin(0.105);
			if (i == 0) sTitle = l_res_title[0]+", GEANT3";
			else 		sTitle = l_res_title[0]+", GEANT4";
			hFHCalDiffEvsEL[i][j] -> SetTitle("");
			hFHCalDiffEvsEL[i][j] -> GetYaxis() -> SetRangeUser(-thisRange[i]/(j+1),thisRange[i]/(j+1));
			hFHCalDiffEvsEL[i][j] -> GetXaxis() -> SetRangeUser(0.,thisRange[i]);
			hFHCalDiffEvsEL[i][j] -> GetYaxis() -> SetNdivisions(505);
			hFHCalDiffEvsEL[i][j] -> GetXaxis() -> SetNdivisions(505);
			hFHCalDiffEvsEL[i][j] -> Draw("colz");
			text -> SetTextSize(0.03);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second, sTitle.Data());
			text -> SetTextSize(0.05);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second-0.07, lEMTitle[j].Data());
			
			c_Ediff[i] -> cd(j+7);
			c_Ediff[i] -> cd(j+7) -> SetLogz();
			c_Ediff[i] -> cd(j+7) -> SetTopMargin(0.01);
			c_Ediff[i] -> cd(j+7) -> SetRightMargin(0.105);
			if (i == 0) sTitle = l_res_title[0]+", GEANT3";
			else 		sTitle = l_res_title[0]+", GEANT4";
			hFHCalDiffEvsER[i][j] -> SetTitle("");
			hFHCalDiffEvsER[i][j] -> GetYaxis() -> SetRangeUser(-thisRange[i]/(j+1),thisRange[i]/(j+1));
			hFHCalDiffEvsER[i][j] -> GetXaxis() -> SetRangeUser(0.,thisRange[i]);
			hFHCalDiffEvsER[i][j] -> GetYaxis() -> SetNdivisions(505);
			hFHCalDiffEvsER[i][j] -> GetXaxis() -> SetNdivisions(505);
			hFHCalDiffEvsER[i][j] -> Draw("colz");
			text -> SetTextSize(0.03);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second, sTitle.Data());
			text -> SetTextSize(0.05);
			text -> DrawLatexNDC(latex_coord.first, latex_coord.second-0.07, lEMTitle[j].Data());
		}
		c_Ediff[i] -> SaveAs(Form("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_Ediff%i.pdf",i),"recreate");
		c_Ediff[i] -> SaveAs(Form("/home/peter/Documents/WorkLocal/MPD/Pics/LAQGSM/c_Ediff%i.png",i),"recreate");
	}
}
