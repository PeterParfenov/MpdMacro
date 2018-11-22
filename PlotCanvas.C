void PlotCanvas()
{
  // Creating a style pattern for a plots
  TStyle* style = new TStyle("style","my_style");

  style->SetTitleSize(0.08,"X");
  style->SetTitleSize(0.08,"Y");
  style->SetTitleOffset(1.1,"Y");
  style->SetTitleOffset(0.9,"X");
  style->SetFrameLineWidth(2);
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
  style->SetHistLineWidth(3);
  style->SetLineWidth(2);
  style->SetCanvasBorderMode(0);
  style->SetLegendBorderSize(0);
  style->SetPadBorderMode(0);
  //style->SetTitleAlign(13);

  gROOT->ForceStyle();
  style->cd();

  //Initialize histograms
  TH1F* histo1 = new TH1F("histo1","First histogram: Gaus;X axis;Y axis",50,-5.,5.); histo1->Sumw2();
  TH1F* histo2 = new TH1F("histo2","Second histogram: Landau;X axis;Y axis",50,-5.,5.); histo2->Sumw2();
  TH1F* histo3 = new TH1F("histo3","Third histogram: Pol2;X axis;Y axis",50,-5.,5.); histo3->Sumw2();

  //Initialize the text
  TLatex* ltext = new TLatex();

  //Filling histograms
  histo1->FillRandom("gaus",10000);
  histo2->FillRandom("landau",10000);
  histo3->FillRandom("pol2",10000);

  //Creating canvas
  TCanvas* canv = new TCanvas("canv","Main canvas",1500,500);
  
  //Creating pads
  TPad* pad1 = new TPad("pad1","Pad 1",0.   ,0. ,0.33,0.9); //left pad
  TPad* pad2 = new TPad("pad2","Pad 2",0.33 ,0. ,0.66,0.9); //middle pad
  TPad* pad3 = new TPad("pad3","Pad 3",0.66 ,0. ,1.  ,0.9); //right pad

  //Draw pads
  canv->cd();
  pad1->Draw();
  pad2->Draw();
  pad3->Draw();

  //Prepare plots to be drawn
  histo1->SetMarkerStyle(20);
  histo2->SetMarkerStyle(21);
  histo3->SetMarkerStyle(22);

  //Draw plots
  pad1->cd();
  histo1->Draw();

  pad2->cd();
  histo2->Draw();

  pad3->cd();
  histo3->Draw();

  //Finally, plot some text in the upper part
  canv->cd();
  ltext->DrawLatex(0.4,0.93,"Some text. Latex formula examples: #sqrt{s_{NN}}, #Psi_{RP}.");
}