#include "DataReaderPlotter.h"

DataReaderPlotter::DataReaderPlotter()
{
  Init();
}
DataReaderPlotter::~DataReaderPlotter()
{
}

void DataReaderPlotter::Init()
{
  std::cout << "DataReaderPlotter::Init: Processing." << std::endl;
  Int_t NumberOfVariables = NumberOfEventVariables + NumberOfTrackVariables;
  for (Int_t i = 0; i < NumberOfVariables; i++)
  {
    NumberOfBins[VariablesName[i]] = 100;
  }

  ValueRange[VariablesName[0]] = {0., 3.};                    //Pt
  ValueRange[VariablesName[1]] = {-5., 5.};                   //Eta
  ValueRange[VariablesName[2]] = {-5., 5.};                   //Rapidity
  ValueRange[VariablesName[3]] = {-TMath::Pi(), TMath::Pi()}; //Phi
  ValueRange[VariablesName[4]] = {0., 17.};                   //B
  ValueRange[VariablesName[5]] = {0., 2500.};                 //Npart
  ValueRange[VariablesName[6]] = {-TMath::Pi(), TMath::Pi()}; //PsiRP

  for (Int_t iVariables = 0; iVariables < NumberOfTrackVariables; iVariables++)
  {
    //Track variables
    for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
    {
      fHistogramYild[TString("hYild" + VariablesName[iVariables] + ParticleName[iPID])] = new TH1D(Form("hYild%s%s", VariablesName[iVariables].Data(), ParticleName[iPID].Data()), Form("hYild%s%s;%s;%s", VariablesName[iVariables].Data(), ParticleName[iPID].Data(),AxisName[iVariables].first.Data(),AxisName[iVariables].second.Data()), NumberOfBins[VariablesName[iVariables]], ValueRange[VariablesName[iVariables]].first, ValueRange[VariablesName[iVariables]].second);
      fHistogramYild[TString("hYild" + VariablesName[iVariables] + ParticleName[iPID])] -> Sumw2();
    }
  }
  //Event variables
  for (Int_t iVariables = NumberOfTrackVariables; iVariables < NumberOfVariables; iVariables++)
  {
    fHistogramYild[TString("hYild" + VariablesName[iVariables])] = new TH1D(Form("hYild%s", VariablesName[iVariables].Data()), Form("hYild%s;%s;%s", VariablesName[iVariables].Data(),AxisName[iVariables].first.Data(),AxisName[iVariables].second.Data()), NumberOfBins[VariablesName[iVariables]], ValueRange[VariablesName[iVariables]].first, ValueRange[VariablesName[iVariables]].second);
    fHistogramYild[TString("hYild" + VariablesName[iVariables])] -> Sumw2();
  }
  std::cout << "DataReaderPlotter::Init: histograms were initialized:" << std::endl;
  for (auto it = fHistogramYild.begin(); it != fHistogramYild.end(); it++)
  {
    printf("%20s Nbins = %4d Xmin = %+3.2f Xmax = %+3.2f\n", it->second->GetName(), it->second->GetNbinsX(), it->second->GetXaxis()->GetXmin(), it->second->GetXaxis()->GetXmax());
  }
}

void DataReaderPlotter::Fill(DataReaderEvent *_event, Double_t _weight = 1.)
{
  Double_t Rapidity, Pt, Eta, P;
  if (_event->B <= 3.5 && _event->B >= 0)
  {
    fHistogramYild["hYildB"]->Fill(_event->B, _weight);
    fHistogramYild["hYildPsiRP"]->Fill(_event->PsiRP, _weight);
    fHistogramYild["hYildNpart"]->Fill(_event->Nparticles, _weight);
    for (Int_t iParticle = 0; iParticle < _event->Nparticles; iParticle++)
    {
      for (Int_t iPID=0;iPID<NumberOfParticles; iPID++){
        if (_event->PID[iParticle] == PDGcode[iPID])
        {
          Pt = TMath::Sqrt(_event->Px[iParticle] * _event->Px[iParticle] + _event->Py[iParticle] * _event->Py[iParticle]);
          P = TMath::Sqrt(Pt * Pt + _event->Pz[iParticle] * _event->Pz[iParticle]);
          Eta = 0.5 * TMath::Log((P + _event->Pz[iParticle]) / (P - _event->Pz[iParticle]));
          Rapidity = 0.5 * TMath::Log((_event->E[iParticle] + _event->Pz[iParticle]) / (_event->E[iParticle] - _event->Pz[iParticle]));

          fHistogramYild[TString("hYildPt"+ParticleName[iPID])]->Fill(Pt, _weight);
          fHistogramYild[TString("hYildEta"+ParticleName[iPID])]->Fill(Eta, _weight);
          fHistogramYild[TString("hYildRapidity"+ParticleName[iPID])]->Fill(Rapidity, _weight);
        }
      }
    }
  }
}

void DataReaderPlotter::ScaleAllHist(Double_t _scale)
{
  for (auto it=fHistogramYild.begin(); it != fHistogramYild.end(); it++)
  {
    it->second -> Scale(_scale);
  }
}

void DataReaderPlotter::ScaleYildsForAllDataset(Double_t _NumberOfFiles)
{
  Double_t scaleModifier;
  for (Int_t iVariables = 0; iVariables < NumberOfTrackVariables; iVariables++)
  {
    scaleModifier = _NumberOfFiles*(fHistogramYild["hYildB"]->Integral())*TMath::Abs(ValueRange[VariablesName[iVariables]].second - ValueRange[VariablesName[iVariables]].first)/(NumberOfBins[VariablesName[iVariables]]);
    for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
    {
      fHistogramYild[TString("hYild" + VariablesName[iVariables] + ParticleName[iPID])] -> Scale(1./scaleModifier);
    }
  }
}

void DataReaderPlotter::Write(TFile* _file)
{
  _file->cd();
  for (auto it=fHistogramYild.begin(); it != fHistogramYild.end(); it++)
  {
    it->second -> Write();
  }
}

ClassImp(DataReaderPlotter);