#include "DataReaderPlotter.h"
#include <string>

DataReaderPlotter::DataReaderPlotter()
{
  isYildInitialized = false;
  isKinematicsInitialized = false;
  isCutsInitialized = false;
  isFlowInitialized = false;
}
DataReaderPlotter::~DataReaderPlotter()
{
}

void DataReaderPlotter::InitYild()
{
  std::cout << "DataReaderPlotter::InitYild: Processing." << std::endl;
  Int_t NumberOfVariables = NumberOfEventVariables + NumberOfTrackVariables;
  for (Int_t i = 0; i < NumberOfVariables; i++)
  {
    NumberOfBinsYild[VariablesName[i]] = 100;
  }

  ValueRangeYild[VariablesName[0]] = {0., 3.};                    //Pt
  ValueRangeYild[VariablesName[1]] = {-5., 5.};                   //Eta
  ValueRangeYild[VariablesName[2]] = {-5., 5.};                   //Rapidity
  ValueRangeYild[VariablesName[3]] = {-TMath::Pi(), TMath::Pi()}; //Phi
  ValueRangeYild[VariablesName[4]] = {0., 17.};                   //B
  ValueRangeYild[VariablesName[5]] = {0., 2500.};                 //Npart
  ValueRangeYild[VariablesName[6]] = {-TMath::Pi(), TMath::Pi()}; //PsiRP

  for (Int_t iVariables = 0; iVariables < NumberOfTrackVariables; iVariables++)
  {
    //Track variables
    for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
    {
      fHistogramYild[TString("hYild" + VariablesName[iVariables] + ParticleName[iPID])] = new TH1D(Form("hYild%s%s", VariablesName[iVariables].Data(), ParticleName[iPID].Data()), Form("hYild%s%s;%s;%s", VariablesName[iVariables].Data(), ParticleName[iPID].Data(), AxisName[iVariables].first.Data(), AxisName[iVariables].second.Data()), NumberOfBinsYild[VariablesName[iVariables]], ValueRangeYild[VariablesName[iVariables]].first, ValueRangeYild[VariablesName[iVariables]].second);
      fHistogramYild[TString("hYild" + VariablesName[iVariables] + ParticleName[iPID])]->Sumw2();
    }
  }
  //Event variables
  for (Int_t iVariables = NumberOfTrackVariables; iVariables < NumberOfVariables; iVariables++)
  {
    fHistogramYild[TString("hYild" + VariablesName[iVariables])] = new TH1D(Form("hYild%s", VariablesName[iVariables].Data()), Form("hYild%s;%s;%s", VariablesName[iVariables].Data(), AxisName[iVariables].first.Data(), AxisName[iVariables].second.Data()), NumberOfBinsYild[VariablesName[iVariables]], ValueRangeYild[VariablesName[iVariables]].first, ValueRangeYild[VariablesName[iVariables]].second);
    fHistogramYild[TString("hYild" + VariablesName[iVariables])]->Sumw2();
  }
  std::cout << "DataReaderPlotter::InitYild: histograms were initialized:" << std::endl;
  for (auto it = fHistogramYild.begin(); it != fHistogramYild.end(); it++)
  {
    printf("%20s Nbins = %4d Xmin = %+3.2f Xmax = %+3.2f\n", it->second->GetName(), it->second->GetNbinsX(), it->second->GetXaxis()->GetXmin(), it->second->GetXaxis()->GetXmax());
  }
  isYildInitialized = true;
}

void DataReaderPlotter::InitKinematics()
{
  std::cout << "DataReaderPlotter::InitKinematics: Processing." << std::endl;
  Int_t NumberOfVariables = NumberOfEventVariables + NumberOfTrackVariables;
  std::map<TString, TH1D *> kinematicHists;
  for (Int_t i = 0; i < NumberOfVariables; i++)
  {
    NumberOfBinsKinematics[VariablesName[i]] = 100;
  }

  ValueRangeKinematics[VariablesName[0]] = {0., 3.};                    //Pt
  ValueRangeKinematics[VariablesName[1]] = {-5., 5.};                   //Eta
  ValueRangeKinematics[VariablesName[2]] = {-5., 5.};                   //Rapidity
  ValueRangeKinematics[VariablesName[3]] = {-TMath::Pi(), TMath::Pi()}; //Phi
  ValueRangeKinematics[VariablesName[4]] = {0., 17.};                   //B
  ValueRangeKinematics[VariablesName[5]] = {0., 2500.};                 //Npart
  ValueRangeKinematics[VariablesName[6]] = {-TMath::Pi(), TMath::Pi()}; //PsiRP

  for (Int_t iCentrality = 0; iCentrality < NumberOfBRegions; iCentrality++)
  {

    for (Int_t iVariables = 0; iVariables < NumberOfTrackVariables; iVariables++)
    {
      //Track variables
      for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
      {
        kinematicHists[TString("hKinematics" + FlowCentralityName[iCentrality] + VariablesName[iVariables] + ParticleName[iPID])] = new TH1D(Form("hKinematics%s%s%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data(), ParticleName[iPID].Data()), Form("hKinematics%s%s%s;%s;%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data(), ParticleName[iPID].Data(), AxisName[iVariables].first.Data(), AxisName[iVariables].second.Data()), NumberOfBinsKinematics[VariablesName[iVariables]], ValueRangeKinematics[VariablesName[iVariables]].first, ValueRangeKinematics[VariablesName[iVariables]].second);
        kinematicHists[TString("hKinematics" + FlowCentralityName[iCentrality] + VariablesName[iVariables] + ParticleName[iPID])]->Sumw2();
      }
    }
    //Event variables
    for (Int_t iVariables = NumberOfTrackVariables; iVariables < NumberOfVariables; iVariables++)
    {
      kinematicHists[TString("hKinematics" + FlowCentralityName[iCentrality] + VariablesName[iVariables])] = new TH1D(Form("hKinematic%s%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data()), Form("hKinematic%s%s;%s;%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data(), AxisName[iVariables].first.Data(), AxisName[iVariables].second.Data()), NumberOfBinsKinematics[VariablesName[iVariables]], ValueRangeKinematics[VariablesName[iVariables]].first, ValueRangeKinematics[VariablesName[iVariables]].second);
      kinematicHists[TString("hKinematics" + FlowCentralityName[iCentrality] + VariablesName[iVariables])]->Sumw2();
    }
    fHistogramKinematics.push_back(kinematicHists);
    std::cout << "DataReaderPlotter::InitKinematics: histograms were initialized:" << std::endl;
    for (auto it = fHistogramKinematics.at(iCentrality).begin(); it != fHistogramKinematics.at(iCentrality).end(); it++)
    {
      printf("%20s Nbins = %4d Xmin = %+3.2f Xmax = %+3.2f\n", it->second->GetName(), it->second->GetNbinsX(), it->second->GetXaxis()->GetXmin(), it->second->GetXaxis()->GetXmax());
    }
    kinematicHists.clear();
  }
  isKinematicsInitialized = true;
}

void DataReaderPlotter::InitCuts()
{
  std::cout << "DataReaderPlotter::InitCuts: Processing." << std::endl;
  Int_t NumberOfVariables = NumberOfEventVariables + NumberOfTrackVariables;
  std::map<TString, TH1D *> cutsHists;
  for (Int_t i = 0; i < NumberOfVariables; i++)
  {
    NumberOfBinsCuts[VariablesName[i]] = 100;
  }

  ValueRangeCuts[VariablesName[0]] = {0., 3.};                    //Pt
  ValueRangeCuts[VariablesName[1]] = {-5., 5.};                   //Eta
  ValueRangeCuts[VariablesName[2]] = {-5., 5.};                   //Rapidity
  ValueRangeCuts[VariablesName[3]] = {-TMath::Pi(), TMath::Pi()}; //Phi
  ValueRangeCuts[VariablesName[4]] = {0., 17.};                   //B
  ValueRangeCuts[VariablesName[5]] = {0., 2500.};                 //Npart
  ValueRangeCuts[VariablesName[6]] = {-TMath::Pi(), TMath::Pi()}; //PsiRP

  for (Int_t iCentrality = 0; iCentrality < NumberOfBRegions; iCentrality++)
  {

    for (Int_t iVariables = 0; iVariables < NumberOfTrackVariables; iVariables++)
    {
      //Track variables
      for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
      {
        cutsHists[TString("hCuts" + FlowCentralityName[iCentrality] + VariablesName[iVariables] + ParticleName[iPID])] = new TH1D(Form("hCuts%s%s%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data(), ParticleName[iPID].Data()), Form("hCuts%s%s%s;%s;%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data(), ParticleName[iPID].Data(), AxisName[iVariables].first.Data(), AxisName[iVariables].second.Data()), NumberOfBinsCuts[VariablesName[iVariables]], ValueRangeCuts[VariablesName[iVariables]].first, ValueRangeCuts[VariablesName[iVariables]].second);
        cutsHists[TString("hCuts" + FlowCentralityName[iCentrality] + VariablesName[iVariables] + ParticleName[iPID])]->Sumw2();
      }
    }
    //Event variables
    for (Int_t iVariables = NumberOfTrackVariables; iVariables < NumberOfVariables; iVariables++)
    {
      cutsHists[TString("hCuts" + FlowCentralityName[iCentrality] + VariablesName[iVariables])] = new TH1D(Form("hCuts%s%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data()), Form("hCuts%s%s;%s;%s", FlowCentralityName[iCentrality].Data(), VariablesName[iVariables].Data(), AxisName[iVariables].first.Data(), AxisName[iVariables].second.Data()), NumberOfBinsCuts[VariablesName[iVariables]], ValueRangeCuts[VariablesName[iVariables]].first, ValueRangeCuts[VariablesName[iVariables]].second);
      cutsHists[TString("hCuts" + FlowCentralityName[iCentrality] + VariablesName[iVariables])]->Sumw2();
    }
    fHistogramCuts.push_back(cutsHists);
    std::cout << "DataReaderPlotter::InitCuts: histograms were initialized:" << std::endl;
    for (auto it = fHistogramCuts.at(iCentrality).begin(); it != fHistogramCuts.at(iCentrality).end(); it++)
    {
      printf("%20s Nbins = %4d Xmin = %+3.2f Xmax = %+3.2f\n", it->second->GetName(), it->second->GetNbinsX(), it->second->GetXaxis()->GetXmin(), it->second->GetXaxis()->GetXmax());
    }
    cutsHists.clear();
  }
  isCutsInitialized = true;
}

void DataReaderPlotter::InitFlow()
{
  std::cout << "DataReaderPlotter::InitFlow: Processing." << std::endl;
  std::map<TString, TProfile *> flowHists;
  Int_t NumberOfVariables = NumberOfFlowEventVariables + NumberOfFlowTrackVariables;
  for (Int_t i = 0; i < NumberOfVariables; i++)
  {
    NumberOfBinsFlow[FlowVariablesName[i]] = 100;
  }
  // For uniformly distributed binning
  ValueRangeFlow[FlowVariablesName[0]] = {0., 3.};  //Pt
  ValueRangeFlow[FlowVariablesName[1]] = {-5., 5.}; //Eta
  ValueRangeFlow[FlowVariablesName[2]] = {-5., 5.}; //Rapidity
  ValueRangeFlow[FlowVariablesName[3]] = {0., 17.}; //B
  // For custom made binning
  ValueRangeFlowArray[FlowVariablesName[0]] = (Double_t *)FlowPtBinning;       //Pt
  ValueRangeFlowArray[FlowVariablesName[1]] = (Double_t *)FlowEtaBinning;      //Eta
  ValueRangeFlowArray[FlowVariablesName[2]] = (Double_t *)FlowRapidityBinning; //Rapidity
  ValueRangeFlowArray[FlowVariablesName[3]] = (Double_t *)FlowBBinning;        //B

  NumberOfBinsFlowArray[FlowVariablesName[0]] = FlowNPtBins;
  NumberOfBinsFlowArray[FlowVariablesName[1]] = FlowNEtaBins;
  NumberOfBinsFlowArray[FlowVariablesName[2]] = FlowNRapidityBins;
  NumberOfBinsFlowArray[FlowVariablesName[3]] = FlowNBBins;

  for (Int_t iCentrality = 0; iCentrality < NumberOfBRegions; iCentrality++)
  {
    for (Int_t iVariables = 0; iVariables < NumberOfVariables; iVariables++)
    {
      //Track variables
      for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
      {
        for (Int_t iHarm = 0; iHarm < FlowNumberOfHarmonic; iHarm++)
        {
          flowHists[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + FlowVariablesName[iVariables] + ParticleName[iPID])] = new TProfile(Form("hv%i%s%s%s", iHarm + 1, FlowCentralityName[iCentrality].Data(), FlowVariablesName[iVariables].Data(), ParticleName[iPID].Data()), Form("hv%i%s%s%s;%s;%s_{%i}", iHarm + 1, FlowCentralityName[iCentrality].Data(), FlowVariablesName[iVariables].Data(), ParticleName[iPID].Data(), AxisFlowName[iVariables].first.Data(), AxisFlowName[iVariables].second.Data(), iHarm + 1), NumberOfBinsFlowArray[FlowVariablesName[iVariables]], ValueRangeFlowArray[FlowVariablesName[iVariables]]);
          flowHists[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + FlowVariablesName[iVariables] + ParticleName[iPID])]->Sumw2();
        }
      }
    }
    fHistogramFlow.push_back(flowHists);
    std::cout << "\n"
              << FlowCentralityName[iCentrality] << std::endl;
    flowHists.clear();
    for (auto it = fHistogramFlow.at(iCentrality).begin(); it != fHistogramFlow.at(iCentrality).end(); it++)
    {
      printf("%20s Nbins = %4d Xmin = %+3.2f Xmax = %+3.2f\n", it->second->GetName(), it->second->GetNbinsX(), it->second->GetXaxis()->GetXmin(), it->second->GetXaxis()->GetXmax());
    }
  }
  isFlowInitialized = true;
}

void DataReaderPlotter::Fill(DataReaderEvent *_event, Double_t _weight = 1.)
{
  Double_t Rapidity, Pt, Eta, P, phi;

  if (isYildInitialized && _event->B <= BcutInYild.second && _event->B >= BcutInYild.first)
  {
    fHistogramYild["hYildB"]->Fill(_event->B, _weight);
    fHistogramYild["hYildPsiRP"]->Fill(_event->PsiRP, _weight);
    fHistogramYild["hYildNpart"]->Fill(_event->Nparticles, _weight);
    for (Int_t iParticle = 0; iParticle < _event->Nparticles; iParticle++)
    {
      for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
      {
        if (_event->PID[iParticle] == PDGcode[iPID])
        {
          Pt = TMath::Sqrt(_event->Px[iParticle] * _event->Px[iParticle] + _event->Py[iParticle] * _event->Py[iParticle]);
          P = TMath::Sqrt(Pt * Pt + _event->Pz[iParticle] * _event->Pz[iParticle]);
          Eta = 0.5 * TMath::Log((P + _event->Pz[iParticle]) / (P - _event->Pz[iParticle]));
          Rapidity = 0.5 * TMath::Log((_event->E[iParticle] + _event->Pz[iParticle]) / (_event->E[iParticle] - _event->Pz[iParticle]));
          phi = TMath::ATan2(_event->Py[iParticle], _event->Px[iParticle]);

          fHistogramYild[TString("hYildPt" + ParticleName[iPID])]->Fill(Pt, _weight);
          fHistogramYild[TString("hYildEta" + ParticleName[iPID])]->Fill(Eta, _weight);
          fHistogramYild[TString("hYildRapidity" + ParticleName[iPID])]->Fill(Rapidity, _weight);
          fHistogramYild[TString("hYildPhi" + ParticleName[iPID])]->Fill(phi, _weight);
        }
      }
    }
  }

  if (isKinematicsInitialized)
  {
    for (Int_t iCentrality = 0; iCentrality < NumberOfBRegions; iCentrality++)
    {
      if (_event->B >= FlowBRegion[iCentrality].first && _event->B < FlowBRegion[iCentrality].second)
      {
        fHistogramKinematics.at(iCentrality)["hKinematics" + FlowCentralityName[iCentrality] + "B"]->Fill(_event->B, _weight);
        fHistogramKinematics.at(iCentrality)["hKinematics" + FlowCentralityName[iCentrality] + "PsiRP"]->Fill(_event->PsiRP, _weight);
        fHistogramKinematics.at(iCentrality)["hKinematics" + FlowCentralityName[iCentrality] + "Npart"]->Fill(_event->Nparticles, _weight);
        for (Int_t iParticle = 0; iParticle < _event->Nparticles; iParticle++)
        {
          for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
          {
            if (_event->PID[iParticle] == PDGcode[iPID])
            {
              Pt = TMath::Sqrt(_event->Px[iParticle] * _event->Px[iParticle] + _event->Py[iParticle] * _event->Py[iParticle]);
              P = TMath::Sqrt(Pt * Pt + _event->Pz[iParticle] * _event->Pz[iParticle]);
              Eta = 0.5 * TMath::Log((P + _event->Pz[iParticle]) / (P - _event->Pz[iParticle]));
              Rapidity = 0.5 * TMath::Log((_event->E[iParticle] + _event->Pz[iParticle]) / (_event->E[iParticle] - _event->Pz[iParticle]));
              phi = TMath::ATan2(_event->Py[iParticle], _event->Px[iParticle]);

              fHistogramKinematics.at(iCentrality)[TString("hKinematics" + FlowCentralityName[iCentrality] + "Pt" + ParticleName[iPID])]->Fill(Pt, _weight);
              fHistogramKinematics.at(iCentrality)[TString("hKinematics" + FlowCentralityName[iCentrality] + "Eta" + ParticleName[iPID])]->Fill(Eta, _weight);
              fHistogramKinematics.at(iCentrality)[TString("hKinematics" + FlowCentralityName[iCentrality] + "Rapidity" + ParticleName[iPID])]->Fill(Rapidity, _weight);
              fHistogramKinematics.at(iCentrality)[TString("hKinematics" + FlowCentralityName[iCentrality] + "Phi" + ParticleName[iPID])]->Fill(phi, _weight);
            }
          }
        }
      }
    }
  }

  if (isCutsInitialized)
  {
    for (Int_t iCentrality = 0; iCentrality < NumberOfBRegions; iCentrality++)
    {
      if (_event->B >= FlowBRegion[iCentrality].first && _event->B < FlowBRegion[iCentrality].second)
      {
        fHistogramCuts.at(iCentrality)["hCuts" + FlowCentralityName[iCentrality] + "B"]->Fill(_event->B, _weight);
        fHistogramCuts.at(iCentrality)["hCuts" + FlowCentralityName[iCentrality] + "PsiRP"]->Fill(_event->PsiRP, _weight);
        fHistogramCuts.at(iCentrality)["hCuts" + FlowCentralityName[iCentrality] + "Npart"]->Fill(_event->Nparticles, _weight);
        for (Int_t iParticle = 0; iParticle < _event->Nparticles; iParticle++)
        {
          for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
          {
            if (_event->PID[iParticle] == PDGcode[iPID])
            {
              Pt = TMath::Sqrt(_event->Px[iParticle] * _event->Px[iParticle] + _event->Py[iParticle] * _event->Py[iParticle]);
              P = TMath::Sqrt(Pt * Pt + _event->Pz[iParticle] * _event->Pz[iParticle]);
              Eta = 0.5 * TMath::Log((P + _event->Pz[iParticle]) / (P - _event->Pz[iParticle]));
              Rapidity = 0.5 * TMath::Log((_event->E[iParticle] + _event->Pz[iParticle]) / (_event->E[iParticle] - _event->Pz[iParticle]));
              phi = TMath::ATan2(_event->Py[iParticle], _event->Px[iParticle]);

              if (Pt > FlowPtcut.first && Pt < FlowPtcut.second && Eta > FlowEtacut.first && Eta < FlowEtacut.second)
              {
                fHistogramCuts.at(iCentrality)[TString("hCuts" + FlowCentralityName[iCentrality] + "Pt" + ParticleName[iPID])]->Fill(Pt, _weight);
                fHistogramCuts.at(iCentrality)[TString("hCuts" + FlowCentralityName[iCentrality] + "Eta" + ParticleName[iPID])]->Fill(Eta, _weight);
                fHistogramCuts.at(iCentrality)[TString("hCuts" + FlowCentralityName[iCentrality] + "Rapidity" + ParticleName[iPID])]->Fill(Rapidity, _weight);
                fHistogramCuts.at(iCentrality)[TString("hCuts" + FlowCentralityName[iCentrality] + "Phi" + ParticleName[iPID])]->Fill(phi, _weight);
              }
            }
          }
        }
      }
    }
  }

  if (isFlowInitialized)
  {
    for (Int_t iCentrality = 0; iCentrality < NumberOfBRegions; iCentrality++)
    {
      if (_event->B >= FlowBRegion[iCentrality].first && _event->B < FlowBRegion[iCentrality].second)
      {
        for (Int_t iParticle = 0; iParticle < _event->Nparticles; iParticle++)
        {
          for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
          {
            if (_event->PID[iParticle] == PDGcode[iPID])
            {
              Pt = TMath::Sqrt(_event->Px[iParticle] * _event->Px[iParticle] + _event->Py[iParticle] * _event->Py[iParticle]);
              P = TMath::Sqrt(Pt * Pt + _event->Pz[iParticle] * _event->Pz[iParticle]);
              Eta = 0.5 * TMath::Log((P + _event->Pz[iParticle]) / (P - _event->Pz[iParticle]));
              Rapidity = 0.5 * TMath::Log((_event->E[iParticle] + _event->Pz[iParticle]) / (_event->E[iParticle] - _event->Pz[iParticle]));
              phi = TMath::ATan2(_event->Py[iParticle], _event->Px[iParticle]);

              if (Pt > FlowPtcut.first && Pt < FlowPtcut.second && Eta > FlowEtacut.first && Eta < FlowEtacut.second)
              {
                for (Int_t iHarm = 0; iHarm < FlowNumberOfHarmonic; iHarm++)
                {
                  fHistogramFlow.at(iCentrality)[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + "Rapidity" + ParticleName[iPID])]->Fill(Rapidity, TMath::Cos((iHarm + 1) * (phi - _event->PsiRP)), _weight);
                  fHistogramFlow.at(iCentrality)[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + "Eta" + ParticleName[iPID])]->Fill(Eta, TMath::Cos((iHarm + 1) * (phi - _event->PsiRP)), _weight);
                  if (iHarm != 0)
                  {
                    fHistogramFlow.at(iCentrality)[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + "Pt" + ParticleName[iPID])]->Fill(Pt, TMath::Cos((iHarm + 1) * (phi - _event->PsiRP)), _weight);

                    fHistogramFlow.at(iCentrality)[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + "B" + ParticleName[iPID])]->Fill(_event->B, TMath::Cos((iHarm + 1) * (phi - _event->PsiRP)), _weight);
                  }
                  if (iHarm == 0 && TMath::Abs(Rapidity) > FlowMidRapidityCutForPt)
                  {
                    fHistogramFlow.at(iCentrality)[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + "Pt" + ParticleName[iPID])]->Fill(Pt, TMath::Sign(TMath::Cos((iHarm + 1) * (phi - _event->PsiRP)), Rapidity), _weight);

                    fHistogramFlow.at(iCentrality)[TString("hv" + std::to_string(iHarm + 1) + FlowCentralityName[iCentrality] + "B" + ParticleName[iPID])]->Fill(_event->B, TMath::Sign(TMath::Cos((iHarm + 1) * (phi - _event->PsiRP)), Rapidity), _weight);

                  } //if midrapidity cut
                }   //end loop over harmonics
              }     //if track selection
            }       //if PID selection
          }         //end loop over particle species
        }           //end loop over particles in the event
      }             //if impact parameter selection
    }               //end loop over impact parameter regions
  }                 //end fill flow component
}

void DataReaderPlotter::ScaleAllHist(Double_t _scale)
{
  for (auto it = fHistogramYild.begin(); it != fHistogramYild.end(); it++)
  {
    it->second->Scale(_scale);
  }
}

void DataReaderPlotter::ScaleYildsForAllDataset(Double_t _NumberOfFiles)
{
  std::cout << "DataReaderPlotter::ScaleYildsForAllDataset: Processing." << std::endl;
  Double_t scaleModifier;
  Double_t NumberOfEvts;
  for (Int_t iVariables = 0; iVariables < NumberOfTrackVariables; iVariables++)
  {
    NumberOfEvts = fHistogramYild["hYildB"]->Integral("width");
    scaleModifier = _NumberOfFiles * NumberOfEvts * TMath::Abs(ValueRangeYild[VariablesName[iVariables]].second - ValueRangeYild[VariablesName[iVariables]].first) / (NumberOfBinsYild[VariablesName[iVariables]]);

    printf("\t(%10s) Number of files: %4.0f Number of entries in (b<3.5fm): %5.2f; AxisMin = %+3.2f; AxisMax = %+3.2f; Number of bins = %4d; Total scale 1./%3.2f.\n", VariablesName[iVariables].Data(), _NumberOfFiles, NumberOfEvts, ValueRangeYild[VariablesName[iVariables]].first, ValueRangeYild[VariablesName[iVariables]].second, NumberOfBinsYild[VariablesName[iVariables]]);
    for (Int_t iPID = 0; iPID < NumberOfParticles; iPID++)
    {
      fHistogramYild[TString("hYild" + VariablesName[iVariables] + ParticleName[iPID])]->Scale(1. / scaleModifier);
    }
  }
}

void DataReaderPlotter::Write(TFile *_file)
{
  TString directoryName;
  _file->cd();
  if (isYildInitialized)
  {
    _file->mkdir("Yild");
    _file->cd("Yild");
    for (auto it = fHistogramYild.begin(); it != fHistogramYild.end(); it++)
    {
      it->second->Write();
    }
  }
  if (isKinematicsInitialized)
  {
    _file->mkdir("Kinematics");
    for (Int_t iCentrality = 0; iCentrality < fHistogramKinematics.size(); iCentrality++)
    {
      _file->cd();
      _file->cd("Kinematics");
      directoryName = "Kinematics/" + FlowCentralityName[iCentrality];
      _file->mkdir(directoryName.Data());
      _file->cd(directoryName.Data());
      for (auto it = fHistogramKinematics.at(iCentrality).begin(); it != fHistogramKinematics.at(iCentrality).end(); it++)
      {
        it->second->Write();
      }
    }
  }
  if (isCutsInitialized)
  {
    _file->mkdir("Cuts");
    for (Int_t iCentrality = 0; iCentrality < fHistogramCuts.size(); iCentrality++)
    {
      _file->cd();
      _file->cd("Cuts");
      directoryName = "Cuts/" + FlowCentralityName[iCentrality];
      _file->mkdir(directoryName.Data());
      _file->cd(directoryName.Data());
      for (auto it = fHistogramCuts.at(iCentrality).begin(); it != fHistogramCuts.at(iCentrality).end(); it++)
      {
        it->second->Write();
      }
    }
  }
  if (isFlowInitialized)
  {
    _file->mkdir("Flow");
    for (Int_t iCentrality = 0; iCentrality < fHistogramFlow.size(); iCentrality++)
    {
      _file->cd();
      _file->cd("Flow");
      directoryName = "Flow/" + FlowCentralityName[iCentrality];
      _file->mkdir(directoryName.Data());
      _file->cd(directoryName.Data());
      // std::cout << iCentrality << ": " << fHistogramFlow.at(iCentrality).size() << std::endl;
      for (auto it = fHistogramFlow.at(iCentrality).begin(); it != fHistogramFlow.at(iCentrality).end(); it++)
      {
        // std::cout << it -> second -> GetName() << std::endl;
        it->second->Write();
      }
    }
  }
}

ClassImp(DataReaderPlotter);