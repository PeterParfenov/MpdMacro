void DrawSimulatedBMNData()
{
  TFile *inFileGeant4 = new TFile("~/Documents/Dataset/analzdc_geant4_noShift.root","read");
  TFile *inFileGeant3 = new TFile("~/Documents/Dataset/analzdc_geant3_noShift.root","read");

  TH1F *hEnTotalGeant4 = (TH1F*) inFileGeant4 -> Get("hdEdxTotal");
  TH1F *hEnCentralGeant4 = (TH1F*) inFileGeant4 -> Get("hdEdxCentral");
  TH1F *hEnSectionGeant4[10];
  for (int i=0;i<10;i++){
    hEnSectionGeant4[i] = (TH1F*) inFileGeant4 -> Get(Form("hdEdxCentralSect%d",i));
    hEnSectionGeant4[i] -> SetTitle(Form("Section %d",i));
  }

  TH1F *hEnTotalGeant3 = (TH1F*) inFileGeant3 -> Get("hdEdxTotal");
  TH1F *hEnCentralGeant3 = (TH1F*) inFileGeant3 -> Get("hdEdxCentral");
  TH1F *hEnSectionGeant3[10];
  for (int i=0;i<10;i++){
    hEnSectionGeant3[i] = (TH1F*) inFileGeant3 -> Get(Form("hdEdxCentralSect%d",i));
    hEnSectionGeant3[i] -> SetTitle(Form("Section %d",i));
  }

  std::vector<TLegend *> leg;
  Int_t ic = -1;

  TFile *styleFile = new TFile("~/Documents/WorkLocal/MPD/RootFiles/TDR/my_style.root", "read");
  TStyle *style = (TStyle *)styleFile->Get("style");
  // style->SetLabelSize(0.05);
  // style->SetTitleSize(0.05);
  style->SetOptTitle(0);

  gROOT->ForceStyle();
  style -> cd();
  gStyle->SetPalette(kDarkRainBow);
  // gStyle->SetPalette(kCMYK);
  // gStyle->SetPalette(kVisibleSpectrum);

  TCanvas *c_EnTotal = new TCanvas("c_EnTotal","Total energy",700,500);
  c_EnTotal -> cd();
  leg.push_back(new TLegend(0.25,0.7,0.85,0.89));
  ic++;

  hEnTotalGeant3 -> GetXaxis() -> SetNdivisions(905);
  hEnTotalGeant3 -> GetYaxis() -> SetNdivisions(905);

  hEnTotalGeant3 -> GetXaxis() -> SetTitle("E_{dep}/event, [GeV]");
  hEnTotalGeant3 -> GetYaxis() -> SetTitle("N_{count}");
  hEnTotalGeant3 -> GetXaxis() -> SetTitleSize(0.05);
  hEnTotalGeant3 -> GetYaxis() -> SetTitleSize(0.05);
  hEnTotalGeant3 -> GetXaxis() -> SetTitleOffset(1.);
  hEnTotalGeant3 -> GetYaxis() -> SetTitleOffset(1.2);
  hEnTotalGeant3 -> GetXaxis() -> SetLabelSize(0.05);
  hEnTotalGeant3 -> GetYaxis() -> SetLabelSize(0.05);

  hEnTotalGeant3 -> SetLineWidth(2);
  hEnTotalGeant4 -> SetLineWidth(2);

  leg.at(ic)->SetNColumns(2);
  leg.at(ic)->SetHeader("Au+Au, LAQGSM, E_{A}=4.5 AGeV","C");
  leg.at(ic)->AddEntry(hEnTotalGeant3, "GEANT3", "l");
  leg.at(ic)->AddEntry(hEnTotalGeant4, "GEANT4", "l");

  hEnTotalGeant3 -> Draw("PLC PMC");
  hEnTotalGeant4 -> Draw("same PLC PMC");
  leg.at(ic)->Draw();
  c_EnTotal -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/BMNSimZDC/EnTotal.png");

  TCanvas *c_EnCentral = new TCanvas("c_EnCentral","Total energy",700,500);
  c_EnCentral -> cd();
  leg.push_back(new TLegend(0.25,0.7,0.85,0.89));
  ic++;

  hEnCentralGeant3 -> GetXaxis() -> SetRangeUser(0.,2.);
  hEnCentralGeant3 -> GetXaxis() -> SetNdivisions(905);

  hEnCentralGeant3 -> GetXaxis() -> SetTitle("E_{dep}/event, [GeV]");
  hEnCentralGeant3 -> GetYaxis() -> SetTitle("N_{count}");
  hEnCentralGeant3 -> GetXaxis() -> SetTitleSize(0.05);
  hEnCentralGeant3 -> GetYaxis() -> SetTitleSize(0.05);
  hEnCentralGeant3 -> GetXaxis() -> SetTitleOffset(1.);
  hEnCentralGeant3 -> GetYaxis() -> SetTitleOffset(1.5);
  hEnCentralGeant3 -> GetXaxis() -> SetLabelSize(0.05);
  hEnCentralGeant3 -> GetYaxis() -> SetLabelSize(0.05);

  hEnCentralGeant3 -> SetLineWidth(2);
  hEnCentralGeant4 -> SetLineWidth(2);

  leg.at(ic)->SetNColumns(2);
  leg.at(ic)->SetHeader("Au+Au, LAQGSM, E_{A}=4.5 AGeV","C");
  leg.at(ic)->AddEntry(hEnCentralGeant3, "GEANT3", "l");
  leg.at(ic)->AddEntry(hEnCentralGeant4, "GEANT4", "l");

  hEnCentralGeant3 -> Draw("PLC PMC");
  hEnCentralGeant4 -> Draw("same PLC PMC");
  leg.at(ic)->Draw();
  c_EnCentral -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/BMNSimZDC/EnCentral.png");

  TCanvas *c_EnSectionGeant3 = new TCanvas("c_EnSectionGeant3","Total energy GEANT3",700,500);
  c_EnSectionGeant3 -> cd();
  leg.push_back(new TLegend(0.25,0.7,0.85,0.89));
  ic++;

  hEnSectionGeant3[0] -> GetXaxis() -> SetRangeUser(0.,0.5);
  hEnSectionGeant3[0] -> GetYaxis() -> SetRangeUser(0.,25e3);
  hEnSectionGeant3[0] -> GetXaxis() -> SetNdivisions(905);
  hEnSectionGeant3[0] -> GetXaxis() -> SetNdivisions(905);

  hEnSectionGeant3[0] -> GetXaxis() -> SetTitle("E_{dep}/event, [GeV]");
  hEnSectionGeant3[0] -> GetYaxis() -> SetTitle("N_{count}");
  hEnSectionGeant3[0] -> GetXaxis() -> SetTitleSize(0.05);
  hEnSectionGeant3[0] -> GetYaxis() -> SetTitleSize(0.05);
  hEnSectionGeant3[0] -> GetXaxis() -> SetTitleOffset(1.);
  hEnSectionGeant3[0] -> GetYaxis() -> SetTitleOffset(1.5);
  hEnSectionGeant3[0] -> GetXaxis() -> SetLabelSize(0.05);
  hEnSectionGeant3[0] -> GetYaxis() -> SetLabelSize(0.05);

  for (int i=0; i<10;i++)
  {
    hEnSectionGeant3[i] -> SetLineWidth(2);
  }

  leg.at(ic)->SetNColumns(5);
  leg.at(ic)->SetHeader("Au+Au, LAQGSM, E_{A}=4.5 AGeV, GEANT3","C");
  for (int i=0; i<10;i++)
  {
    leg.at(ic)->AddEntry(hEnSectionGeant3[i], hEnSectionGeant3[i] -> GetTitle(), "l");
  }

  hEnSectionGeant3[0] -> Draw("PLC PMC");
  for (int i=1; i<10;i++)
  {
    hEnSectionGeant3[i] -> Draw("same PLC PMC");
  }
  leg.at(ic)->Draw();
  c_EnSectionGeant3 -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/BMNSimZDC/EnSectionGeant3.png");

  TCanvas *c_EnSectionGeant4 = new TCanvas("c_EnSectionGeant4","Total energy GEANT4",700,500);
  c_EnSectionGeant4 -> cd();
  leg.push_back(new TLegend(0.25,0.7,0.85,0.89));
  ic++;

  hEnSectionGeant4[0] -> GetXaxis() -> SetRangeUser(0.,0.5);
  hEnSectionGeant4[0] -> GetYaxis() -> SetRangeUser(0.,25e3);
  hEnSectionGeant4[0] -> GetXaxis() -> SetNdivisions(905);
  hEnSectionGeant4[0] -> GetYaxis() -> SetNdivisions(905);

  hEnSectionGeant4[0] -> GetXaxis() -> SetTitle("E_{dep}/event, [GeV]");
  hEnSectionGeant4[0] -> GetYaxis() -> SetTitle("N_{count}");
  hEnSectionGeant4[0] -> GetXaxis() -> SetTitleSize(0.05);
  hEnSectionGeant4[0] -> GetYaxis() -> SetTitleSize(0.05);
  hEnSectionGeant4[0] -> GetXaxis() -> SetTitleOffset(1.);
  hEnSectionGeant4[0] -> GetYaxis() -> SetTitleOffset(1.5);
  hEnSectionGeant4[0] -> GetXaxis() -> SetLabelSize(0.05);
  hEnSectionGeant4[0] -> GetYaxis() -> SetLabelSize(0.05);

  for (int i=0; i<10;i++)
  {
    hEnSectionGeant4[i] -> SetLineWidth(2);
  }

  leg.at(ic)->SetNColumns(5);
  leg.at(ic)->SetHeader("Au+Au, LAQGSM, E_{A}=4.5 AGeV, GEANT4","C");
  for (int i=0; i<10;i++)
  {
    leg.at(ic)->AddEntry(hEnSectionGeant4[i], hEnSectionGeant4[i] -> GetTitle(), "l");
  }

  hEnSectionGeant4[0] -> Draw("PLC PMC");
  for (int i=1; i<10;i++)
  {
    hEnSectionGeant4[i] -> Draw("same PLC PMC");
  }
  leg.at(ic)->Draw();
  c_EnSectionGeant4 -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/BMNSimZDC/EnSectionGeant4.png");

  TCanvas *c_EnSectionGeant3Log = new TCanvas("c_EnSectionGeant3Log","Total energy GEANT3",700,500);
  c_EnSectionGeant3Log -> cd();
  c_EnSectionGeant3Log -> SetLogy();
  leg.push_back(new TLegend(0.25,0.7,0.85,0.89));
  ic++;

  hEnSectionGeant3[0] -> GetXaxis() -> SetRangeUser(0.,1.);
  hEnSectionGeant3[0] -> GetYaxis() -> SetRangeUser(1.,25e5);
  // hEnSectionGeant3[0] -> GetXaxis() -> SetNdivisions(905);
  // hEnSectionGeant3[0] -> GetXaxis() -> SetNdivisions(905);

  // hEnSectionGeant3[0] -> GetXaxis() -> SetTitle("E_{dep}/event, [GeV]");
  // hEnSectionGeant3[0] -> GetYaxis() -> SetTitle("N_{count}");
  // hEnSectionGeant3[0] -> GetXaxis() -> SetTitleSize(0.05);
  // hEnSectionGeant3[0] -> GetYaxis() -> SetTitleSize(0.05);
  // hEnSectionGeant3[0] -> GetXaxis() -> SetTitleOffset(1.);
  // hEnSectionGeant3[0] -> GetYaxis() -> SetTitleOffset(1.5);
  // hEnSectionGeant3[0] -> GetXaxis() -> SetLabelSize(0.05);
  // hEnSectionGeant3[0] -> GetYaxis() -> SetLabelSize(0.05);

  // for (int i=0; i<10;i++)
  // {
  //   hEnSectionGeant3[i] -> SetLineWidth(2);
  // }

  leg.at(ic)->SetNColumns(5);
  leg.at(ic)->SetHeader("Au+Au, LAQGSM, E_{A}=4.5 AGeV, GEANT3","C");
  for (int i=0; i<10;i++)
  {
    leg.at(ic)->AddEntry(hEnSectionGeant3[i], hEnSectionGeant3[i] -> GetTitle(), "l");
  }

  hEnSectionGeant3[0] -> Draw("PLC PMC");
  for (int i=1; i<10;i++)
  {
    hEnSectionGeant3[i] -> Draw("same PLC PMC");
  }
  leg.at(ic)->Draw();
  c_EnSectionGeant3Log -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/BMNSimZDC/EnSectionGeant3Log.png");

  TCanvas *c_EnSectionGeant4Log = new TCanvas("c_EnSectionGeant4Log","Total energy GEANT4",700,500);
  c_EnSectionGeant4Log -> cd();
  c_EnSectionGeant4Log -> SetLogy();
  leg.push_back(new TLegend(0.25,0.7,0.85,0.89));
  ic++;

  hEnSectionGeant4[0] -> GetXaxis() -> SetRangeUser(0.,1.);
  hEnSectionGeant4[0] -> GetYaxis() -> SetRangeUser(1.,25e5);
  // hEnSectionGeant4[0] -> GetXaxis() -> SetNdivisions(905);
  // hEnSectionGeant4[0] -> GetYaxis() -> SetNdivisions(905);

  // hEnSectionGeant4[0] -> GetXaxis() -> SetTitle("E_{dep}/event, [GeV]");
  // hEnSectionGeant4[0] -> GetYaxis() -> SetTitle("N_{count}");
  // hEnSectionGeant4[0] -> GetXaxis() -> SetTitleSize(0.05);
  // hEnSectionGeant4[0] -> GetYaxis() -> SetTitleSize(0.05);
  // hEnSectionGeant4[0] -> GetXaxis() -> SetTitleOffset(1.);
  // hEnSectionGeant4[0] -> GetYaxis() -> SetTitleOffset(1.5);
  // hEnSectionGeant4[0] -> GetXaxis() -> SetLabelSize(0.05);
  // hEnSectionGeant4[0] -> GetYaxis() -> SetLabelSize(0.05);

  // for (int i=0; i<10;i++)
  // {
  //   hEnSectionGeant4[i] -> SetLineWidth(2);
  // }

  leg.at(ic)->SetNColumns(5);
  leg.at(ic)->SetHeader("Au+Au, LAQGSM, E_{A}=4.5 AGeV, GEANT4","C");
  for (int i=0; i<10;i++)
  {
    leg.at(ic)->AddEntry(hEnSectionGeant4[i], hEnSectionGeant4[i] -> GetTitle(), "l");
  }

  hEnSectionGeant4[0] -> Draw("PLC PMC");
  for (int i=1; i<10;i++)
  {
    hEnSectionGeant4[i] -> Draw("same PLC PMC");
  }
  leg.at(ic)->Draw();
  c_EnSectionGeant4Log -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/BMNSimZDC/EnSectionGeant4Log.png");
}