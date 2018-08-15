#ifndef DATAREADERPLOTTER_H
#define DATAREADERPLOTTER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <stdio.h>

#include "TROOT.h"
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TProfile.h"
#include "TString.h"
#include "TMath.h"

#include "DataReaderEvent.h"

namespace dataplotter{
  const Int_t NumberOfParticles = 3;
  const TString ParticleName[] = {TString("Pion"), TString("Kaon"), TString("Proton")};
  const Int_t PDGcode[] = {211, 321, 2212};
  const TString VariablesName[] = {TString("Pt"), TString("Eta"), TString("Rapidity"), TString("Phi"), TString("B"), TString("Npart"), TString("PsiRP")};
  const TString FlowVariablesName[] = {TString("Pt"), TString("Eta"), TString("Rapidity"), TString("B")};
  const std::pair<TString, TString> AxisName [] = {{TString("p_{T}, [GeV/c]"),TString("dN/dp_{T}")},
                                                  {TString("#eta"),TString("dN/d#eta")},
                                                  {TString("y"),TString("dN/dy")},
                                                  {TString("#phi, [rad]"),TString("dN/d#phi")},
                                                  {TString("B, [fm]"),TString("N_{counts}")},
                                                  {TString("N_{particles}"),TString("N_{counts}")},
                                                  {TString("#Psi_{RP}, [rad]"),TString("N_{counts}")}};
  const std::pair<TString, TString> AxisFlowName [] = {{TString("p_{T}, [GeV/c]"),TString("v_{n}")},
                                                  {TString("#eta"),TString("v_{n}")},
                                                  {TString("y"),TString("v_{n}")},
                                                  {TString("B, [fm]"),TString("v_{n}")}};
  const Int_t NumberOfEventVariables = 3;
  const Int_t NumberOfTrackVariables = 4;
  const Int_t NumberOfFlowEventVariables = 1;
  const Int_t NumberOfFlowTrackVariables = 3;
  const Int_t NumberOfBRegions = 3;

  const std::pair <Double_t, Double_t> BcutInYild = {0.,3.5};

  const TString FlowCentralityName[]= {TString("Central"), TString("Midcentral"), TString("Peripheral")};
  const std::pair<Double_t, Double_t> FlowBRegion[] ={{0.,3.5},{5.,7.},{10.,12.}};
  const std::pair <Double_t, Double_t> FlowYcut = {-1.5,1.5};
  const std::pair <Double_t, Double_t> FlowPtcut = {0.2,2.};
  const Double_t FlowMidRapidityCutForPt = 0.2;
  const Int_t FlowNumberOfHarmonic = 2;
}

using namespace dataplotter;

class DataReaderPlotter
{
public:
  DataReaderPlotter();
  ~DataReaderPlotter();

  void Fill(DataReaderEvent *_event, Double_t _weight);
  void Write(TFile* _file);
  void ScaleAllHist(Double_t _scale);
  void ScaleYildsForAllDataset(Double_t _scale);
  void InitYild();
  void InitKinematics();
  void InitFlow();

private:
  std::map<TString, TH1D *> fHistogramYild;
  std::map<TString, TH1D *> fHistogramKinematics;
  std::map<TString, TH1D *> fHistogramCuts;
  std::vector<std::map<TString, TProfile *>> fHistogramFlow;
  std::map<TString, std::pair<Double_t, Double_t>> ValueRangeYild;
  std::map<TString, std::pair<Double_t, Double_t>> ValueRangeKinematics;
  std::map<TString, std::pair<Double_t, Double_t>> ValueRangeFlow;
  std::map<TString, Int_t> NumberOfBinsYild;
  std::map<TString, Int_t> NumberOfBinsKinematics;
  std::map<TString, Int_t> NumberOfBinsFlow;
  ClassDef(DataReaderPlotter, 0);
  Bool_t isYildInitialized;
  Bool_t isKinematicsInitialized;
  Bool_t isCutsInitialized;
  Bool_t isFlowInitialized;
};

#endif