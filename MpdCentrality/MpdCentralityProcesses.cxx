#ifndef MpdCentralityProcesses_cxx
#define MpdCentralityProcesses_cxx

#include <iostream>
#include "MpdCentralityProcesses.h"

MpdCentralityProcesses::MpdCentralityProcesses(){};
MpdCentralityProcesses::~MpdCentralityProcesses()
{
  delete fInput;
  delete hInput;
  delete pInput;
}

int MpdCentralityProcesses::GetCentralityClasses(TGraph *gInput, const int steps)
{
  //std::vector<double> vOutput;

  fInput = new TF1("fInput", "pol8", 0., 1.);
  hInput = (TH2F *)GetHistogram(gInput, "hMultEdep", "N_{ch} TPC vs E_{dep} FHCal;M/M_{max};E_{dep}/E_{dep,max}", 600, 0., 1., 600, 0., 1.);
  pInput = (TProfile *)hInput->ProfileX("pInput");
  pInput->Fit(fInput, "R0");
  fInput->SetLineWidth(2);

  TCanvas *canv = new TCanvas("canv", "", 700, 700);
  canv->SetLogz();
  canv->cd();
  gInput->Draw("AP");
  fInput->Draw("same");

  const int N_sections = steps;

  std::cout << "Number of steps: " << N_sections << std::endl;

  TF1 *perp[N_sections];
  l = 0;
  for (int i = 0; i < N_sections; i++)
  {
    x1 = (Double_t)i / N_sections;
    y1 = fInput->Eval(x1);
    x2 = (Double_t)(i + 1) / N_sections;
    y2 = fInput->Eval(x2);
    l += TMath::Sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  }
  length = l;
  std::cout << "Line length = " << length << std::endl;
  std::cout << "Total integral = " << gInput->GetN() << std::endl;

  for (int i = 0; i < N_sections; i++)
  {
    if (i == 0)
    {
      x = 0;
      xprev = 0;
    }
    if (fInput->Derivative(xprev) < N_sections)
      x = (Double_t)(xprev + (length / N_sections) * TMath::Cos(TMath::ATan(fInput->Derivative(xprev))));
    else
      x = (Double_t)(xprev + 1 / N_sections);
    //std::cout << i << " || StepX: " << x << "| step length: " <<
    //              TMath::Sqrt((x-xprev)*(x-xprev) + (fInput->Eval(x)-fInput->Eval(xprev))*(fInput->Eval(x)-fInput->Eval(xprev)))
    //          <<  " | Cos: " << TMath::Cos(TMath::ATan(fInput->Derivative(xprev))) << std::endl;
    xprev = x;
    perp[i] = new TF1(Form("perp%i", i), "pol1", 0., 1.);
    perp[i]->SetLineWidth(1);
    perp[i]->SetLineColor(3);
    perp[i]->SetParameter(0, fInput->Eval(x) + x / fInput->Derivative(x));
    perp[i]->SetParameter(1, -1 / fInput->Derivative(x));
    xLow = x - 0.1 * TMath::Cos(TMath::ATan(perp[i]->GetParameter(1)));
    xHigh = x + 0.1 * TMath::Cos(TMath::ATan(perp[i]->GetParameter(1)));
    perp[i]->DrawF1(xLow, xHigh, "same");
  }

  return 0;
}

int MpdCentralityProcesses::GetCentralityClasses(TH2F *hInput, const int steps)
{
  //std::vector<double> vOutput;

  fInput = new TF1("fInput", "pol8", 0., 1.);
  pInput = (TProfile *)hInput->ProfileX("pInput");
  pInput->Fit(fInput, "R0");
  fInput->SetLineWidth(2);

  TCanvas *canv = new TCanvas("canv", "", 700, 700);
  canv->SetLogz();
  canv->cd();
  hInput->Draw("colz");
  fInput->Draw("same");

  const int N_sections = steps;

  std::cout << "Number of steps: " << N_sections << std::endl;

  TF1 *perp[N_sections];
  l = 0;
  for (int i = 0; i < N_sections; i++)
  {
    x1 = (Double_t)i / N_sections;
    y1 = fInput->Eval(x1);
    x2 = (Double_t)(i + 1) / N_sections;
    y2 = fInput->Eval(x2);
    l += TMath::Sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  }
  length = l;
  std::cout << "Line length = " << length << std::endl;
  std::cout << "Total integral = " << hInput->Integral(1, 600, 1, 600, "") << std::endl;

  for (int i = 0; i < N_sections; i++)
  {
    if (i == 0)
    {
      x = 0;
      xprev = 0;
    }
    if (fInput->Derivative(xprev) < N_sections)
      x = (Double_t)(xprev + (length / N_sections) * TMath::Cos(TMath::ATan(fInput->Derivative(xprev))));
    else
      x = (Double_t)(xprev + 1 / N_sections);
    //std::cout << i << " || StepX: " << x << "| step length: " <<
    //              TMath::Sqrt((x-xprev)*(x-xprev) + (fInput->Eval(x)-fInput->Eval(xprev))*(fInput->Eval(x)-fInput->Eval(xprev)))
    //          <<  " | Cos: " << TMath::Cos(TMath::ATan(fInput->Derivative(xprev))) << std::endl;
    xprev = x;
    perp[i] = new TF1(Form("perp%i", i), "pol1", 0., 1.);
    perp[i]->SetLineWidth(1);
    perp[i]->SetLineColor(3);
    perp[i]->SetParameter(0, fInput->Eval(x) + x / fInput->Derivative(x));
    perp[i]->SetParameter(1, -1 / fInput->Derivative(x));
    xLow = x - 0.1 * TMath::Cos(TMath::ATan(perp[i]->GetParameter(1)));
    xHigh = x + 0.1 * TMath::Cos(TMath::ATan(perp[i]->GetParameter(1)));
    perp[i]->DrawF1(xLow, xHigh, "same");
  }

  return 0;
}

int MpdCentralityProcesses::GetCentralityClasses(TH2F *hInput)
{
  const int steps = (int)TMath::Sqrt(hInput->GetXaxis()->GetNbins() * hInput->GetYaxis()->GetNbins());
  return GetCentralityClasses(hInput, steps);
}

int MpdCentralityProcesses::GetCentralityClasses(TGraph *hInput)
{
  const int steps = TMath::Sqrt(hInput->GetN());
  return GetCentralityClasses(hInput, steps);
}

TH2F *MpdCentralityProcesses::GetHistogram(TGraph *gInput, TString name, TString title, int NbinX, float Xmin, float Xmax, int NbinY, float Ymin, float Ymax)
{
  TH2F *hOutput = new TH2F(name, title, NbinX, Xmin, Xmax, NbinY, Ymin, Ymax);

  for (int i = 0; i < gInput->GetN(); i++)
  {
    gInput->GetPoint(i, x, y);
    hOutput->Fill(x, y);
  }
  return hOutput;
}

#endif
