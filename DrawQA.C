void DrawQA()
{
  const Int_t Nsorts = 3;
  const std::pair<TString, TString> sSorts [] = {{TString("Pion"),TString("piplus")}, {TString("Kaon"), TString("kplus")}, {TString("Proton"),TString("p")}};

  const Double_t max_pt [] = {1.,1.1,1.5};
  const std::pair<TString, TString> legTitle = {TString("Petr's QA"), TString("Oleg's QA")};

  std::pair<TFile*, TFile*> File = {new TFile("~/Documents/Dataset/modelQA_DCQMD_3AGeV_110k_hist_noCuts_noMidYCut.root","read"), new TFile("~/Documents/Dataset/botvina_3.3agev_100K.root","read")};
  // std::pair<TFile*, TFile*> File = {new TFile("~/Documents/Dataset/modelQA_DCQMD_3AGeV_110k_hist_noCuts1.root","read"), new TFile("~/Documents/Dataset/botvina_3.3agev_100K.root","read")};
  TFile *styleFile = new TFile("~/Documents/WorkLocal/MPD/RootFiles/TDR/my_style.root", "read");

  std::pair<TH1D*, TH1F*> hPt[Nsorts];
  std::pair<TH1F*, TH1F*> hY[Nsorts];
  std::pair<TProfile*, TProfile*> hv1Pt[Nsorts];
  std::pair<TProfile*, TProfile*> hv1Y[Nsorts];
  std::pair<TProfile*, TProfile*> hv2Pt[Nsorts];
  std::pair<TProfile*, TProfile*> hv2Y[Nsorts];
  std::pair<TH1D*, TH1F*> hB;
  TLegend* lPt[Nsorts];
  TLegend* lY[Nsorts];
  TLegend* lv1Pt[Nsorts];
  TLegend* lv1Y[Nsorts];
  TLegend* lv2Pt[Nsorts];
  TLegend* lv2Y[Nsorts];

  TLine zeroLine;
  zeroLine.SetLineWidth(2);
  zeroLine.SetLineStyle(2);

  // TStyle *style = (TStyle *)styleFile->Get("style");
  TStyle* style = new TStyle("style","my_style");

  style->SetTitleSize(0.08,"X");
  style->SetTitleSize(0.08,"Y");
  style->SetTitleOffset(1.1,"Y");
  style->SetTitleOffset(0.9,"X");
  // style->SetFrameLineWidth(2);
  style->SetFrameFillColor(0);
  style->SetPadColor(0);
  style->SetLabelSize(0.06,"X");
  style->SetLabelSize(0.06,"Y");
  style->SetPadTopMargin(0.1);
  style->SetPadBottomMargin(0.18);
  style->SetPadLeftMargin(0.18);
  style->SetPadTopMargin(0.1);
  style->SetPadRightMargin(0.1);
  //style->SetMarkerSize(2.);
  style->SetErrorX(0);
  style->SetOptStat(0);
  style->SetCanvasColor(0);
  style->SetTitleFillColor(0);
  style->SetTitleBorderSize(0);
  //style->SetMarkerStyle(20);
  style->SetHistLineWidth(2);
  style->SetLineWidth(2);
  style->SetCanvasBorderMode(0);
  style->SetLegendBorderSize(0);
  style->SetPadBorderMode(0);
  style->SetLabelSize(0.05);
  style->SetTitleSize(0.05);
  style->SetOptTitle(0);
  style->SetTitleOffset(1.1, "X");
  style->SetMarkerSize(1.3);
  style->SetNdivisions(509,"X");
  style->SetNdivisions(509,"Y");

  gROOT->ForceStyle();
  style->cd();
  gStyle->SetPalette(kDarkRainBow);

  hB.first = (TH1D*) File.first->Get(Form("Kinematics/All/hKinematicAllB"));
  hB.second = (TH1F*) File.second->Get(Form("hB"));

  for (Int_t i=0; i<Nsorts; i++)
  {
    hPt[i].first = (TH1D*) File.first->Get(Form("Kinematics/All/hKinematicsAllPt%s",sSorts[i].first.Data()));
    hPt[i].second = (TH1F*) File.second->Get(Form("Pt/hTrackPt_%s",sSorts[i].second.Data()));

    hY[i].first = (TH1F*) File.first->Get(Form("Kinematics/All/hKinematicsAllRapidity%s",sSorts[i].first.Data()));
    hY[i].second = (TH1F*) File.second->Get(Form("Y/hTrackY_%s",sSorts[i].second.Data()));

    hv1Pt[i].first = (TProfile*) File.first->Get(Form("Flow/All/hv1AllPt%s",sSorts[i].first.Data()));
    hv1Pt[i].second = (TProfile*) File.second->Get(Form("V1_pT/hv1_%s_pT",sSorts[i].second.Data()));

    hv1Y[i].first = (TProfile*) File.first->Get(Form("Flow/All/hv1AllRapidity%s",sSorts[i].first.Data()));
    hv1Y[i].second = (TProfile*) File.second->Get(Form("V1_Y/hv1_%s_Y",sSorts[i].second.Data()));

    // std::cout << Form("V1_Y/hv1_%s_Y ",sSorts[i].second.Data()) << std::endl;

    hv2Pt[i].first = (TProfile*) File.first->Get(Form("Flow/All/hv2AllPt%s",sSorts[i].first.Data()));
    hv2Pt[i].second = (TProfile*) File.second->Get(Form("V2_pT/hv2_%s_pT",sSorts[i].second.Data()));

    hv2Y[i].first = (TProfile*) File.first->Get(Form("Flow/All/hv2AllRapidity%s",sSorts[i].first.Data()));
    hv2Y[i].second = (TProfile*) File.second->Get(Form("V2_Y/hv2_%s_Y",sSorts[i].second.Data()));

    hPt[i].first->SetMarkerStyle(20);
    hPt[i].second->SetMarkerStyle(24);
    hPt[i].first->Rebin(10);
    hPt[i].second->Rebin(10);

    hY[i].first->SetMarkerStyle(20);
    hY[i].second->SetMarkerStyle(24);
    hY[i].first->Rebin(10);
    hY[i].second->Rebin(10);

    hv1Pt[i].first->SetMarkerStyle(20);
    hv1Pt[i].second->SetMarkerStyle(24);

    hv1Y[i].first->SetMarkerStyle(20);
    hv1Y[i].second->SetMarkerStyle(24);

    hv2Pt[i].first->SetMarkerStyle(20);
    hv2Pt[i].second->SetMarkerStyle(24);

    hv2Y[i].first->SetMarkerStyle(20);
    hv2Y[i].second->SetMarkerStyle(24);

    lPt[i] = new TLegend(0.6,0.7,0.89,0.89);
    lY[i] = new TLegend(0.4,0.2,0.69,0.35);
    lv1Pt[i] = new TLegend(0.2,0.7,0.45,0.89);
    lv1Y[i] = new TLegend(0.35,0.7,0.75,0.89);
    lv2Pt[i] = new TLegend(0.2,0.7,0.45,0.89);
    lv2Y[i] = new TLegend(0.6,0.7,0.89,0.89);
  }

  TCanvas* canvasB = new TCanvas("canvasB","Impact parameter",700,500);
  canvasB->cd();
  TLegend* legB = new TLegend(0.2,0.7,0.45,0.89);
  hB.first->SetMarkerStyle(20);
  hB.second->SetMarkerStyle(24);
  hB.first->Rebin(10);
  // legB->SetHeader("Impact parameter","C");
  legB->AddEntry(hB.first,legTitle.first.Data(),"p");
  legB->AddEntry(hB.second,legTitle.second.Data(),"p");
  hB.first->Draw("PLC PMC");
  hB.second->DrawNormalized("same PLC PMC",hB.first->Integral()/100*170);
  legB->Draw();
  canvasB->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/Impact.png");
  canvasB->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/Impact.pdf");

  TCanvas* canvasPt = new TCanvas("canvasPt","canvasPt",1500,1000);
  canvasPt->cd();
  canvasPt->Divide(3,2);
  for (Int_t i=0; i<Nsorts; i++)
  {
    canvasPt->cd(i+1);
    lPt[i]->SetHeader(sSorts[i].first.Data(),"C");
    lPt[i]->AddEntry(hPt[i].first,legTitle.first.Data(),"p");
    lPt[i]->AddEntry(hPt[i].second,legTitle.second.Data(),"p");
    hPt[i].first -> GetXaxis() -> SetRangeUser(0.,max_pt[i]);
    hPt[i].first -> Draw("p PLC PMC");
    hPt[i].second -> Draw("p same PLC PMC");
    // hPt[i].second -> DrawNormalized("p same PLC PMC",hPt[i].first -> Integral());
    lPt[i]->Draw();

    canvasPt->cd(i+4);
    lY[i]->SetHeader(sSorts[i].first.Data(),"C");
    lY[i]->AddEntry(hY[i].first,legTitle.first.Data(),"p");
    lY[i]->AddEntry(hY[i].second,legTitle.second.Data(),"p");
    hY[i].first -> GetXaxis() -> SetRangeUser(-1.7,1.7);
    hY[i].first -> Draw("p PLC PMC");
    hY[i].second -> Draw("p same PLC PMC");
    // hY[i].second -> DrawNormalized("p same PLC PMC",hY[i].first -> Integral());
    lY[i]->Draw();
  }
  canvasPt->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/Kinematics.png");
  canvasPt->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/Kinematics.pdf");

  TCanvas* canvasv1 = new TCanvas("canvasv1","canvasv1",1500,1000);
  canvasv1->cd();
  canvasv1->Divide(3,2);
  for (Int_t i=0; i<Nsorts; i++)
  {
    canvasv1->cd(i+1);
    lv1Pt[i]->SetHeader(sSorts[i].first.Data(),"C");
    lv1Pt[i]->AddEntry(hv1Pt[i].first,legTitle.first.Data(),"p");
    lv1Pt[i]->AddEntry(hv1Pt[i].second,legTitle.second.Data(),"p");
    hv1Pt[i].first -> GetXaxis() -> SetRangeUser(0.,1.4);
    if (i!=2) hv1Pt[i].first -> GetYaxis() -> SetRangeUser(-0.16,0.2);
    if (i==2) hv1Pt[i].first -> GetYaxis() -> SetRangeUser(-0.02,0.25);
    hv1Pt[i].first -> Draw("PLC PMC");
    hv1Pt[i].second -> Draw("same PLC PMC");
    lv1Pt[i]->Draw();

    canvasv1->cd(i+4);
    lv1Y[i]->SetHeader(sSorts[i].first.Data(),"C");
    lv1Y[i]->AddEntry(hv1Y[i].first,legTitle.first.Data(),"p");
    lv1Y[i]->AddEntry(hv1Y[i].second,legTitle.second.Data(),"p");
    if (i!=1) hv1Y[i].first -> GetYaxis() -> SetRangeUser(-0.19,0.22);
    if (i==1) hv1Y[i].first -> GetYaxis() -> SetRangeUser(-0.04,0.08);
    hv1Y[i].first -> Draw("PLC PMC");
    hv1Y[i].second -> Draw("same PLC PMC");
    zeroLine.DrawLine(hv1Y[i].first->GetXaxis()->GetXmin(),0.,hv1Y[i].first->GetXaxis()->GetXmax(),0.);
    lv1Y[i]->Draw();
  }
  canvasv1->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/v1.png");
  canvasv1->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/v1.pdf");

  TCanvas* canvasv2 = new TCanvas("canvasv2","canvasv2",1500,1000);
  canvasv2->cd();
  canvasv2->Divide(3,2);
  for (Int_t i=0; i<Nsorts; i++)
  {
    canvasv2->cd(i+1);
    lv2Pt[i]->SetHeader(sSorts[i].first.Data(),"C");
    lv2Pt[i]->AddEntry(hv2Pt[i].first,legTitle.first.Data(),"p");
    lv2Pt[i]->AddEntry(hv2Pt[i].second,legTitle.second.Data(),"p");
    hv2Pt[i].first -> GetXaxis() -> SetRangeUser(0.,1.4);
    if (i==0) hv2Pt[i].first -> GetYaxis() -> SetRangeUser(-0.15,0.09);
    if (i==1) hv2Pt[i].first -> GetYaxis() -> SetRangeUser(-0.15,0.25);
    if (i==2) hv2Pt[i].first -> GetYaxis() -> SetRangeUser(-0.004,0.02);
    hv2Pt[i].first -> Draw("PLC PMC");
    hv2Pt[i].second -> Draw("same PLC PMC");
    lv2Pt[i]->Draw();

    canvasv2->cd(i+4);
    lv2Y[i]->SetHeader(sSorts[i].first.Data(),"C");
    lv2Y[i]->AddEntry(hv2Y[i].first,legTitle.first.Data(),"p");
    lv2Y[i]->AddEntry(hv2Y[i].second,legTitle.second.Data(),"p");
    if (i==0) hv2Y[i].first -> GetYaxis() -> SetRangeUser(-0.014,0.012);
    if (i==1) hv2Y[i].first -> GetYaxis() -> SetRangeUser(-0.04,0.05);
    if (i==2) hv2Y[i].first -> GetYaxis() -> SetRangeUser(-0.004,0.015);
    hv2Y[i].first -> Draw("PLC PMC");
    hv2Y[i].second -> Draw("same PLC PMC");
    lv2Y[i]->Draw();
  }
  canvasv2->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/v2.png");
  canvasv2->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/QACompare/v2.pdf");
}