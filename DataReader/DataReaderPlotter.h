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

const Int_t NumberOfParticles = 3;
const TString ParticleName[] = {TString("Pion"), TString("Kaon"), TString("Proton")};
const Int_t PDGcode[] = {211, 321, 2212};
const TString VariablesName[] = {TString("Pt"), TString("Eta"), TString("Rapidity"), TString("Phi"), TString("B"), TString("Npart"), TString("PsiRP")};
const std::pair<TString, TString> AxisName [] = {{TString("p_{T}, [GeV/c]"),TString("dN/dp_{T}")},
                                                 {TString("#eta"),TString("dN/d#eta")},
                                                 {TString("y"),TString("dN/dy")},
                                                 {TString("#phi, [rad]"),TString("dN/d#phi")},
                                                 {TString("B, [fm]"),TString("N_{counts}")},
                                                 {TString("N_{particles}"),TString("N_{counts}")},
                                                 {TString("#Psi_{RP}, [rad]"),TString("N_{counts}")}};
const Int_t NumberOfEventVariables = 3;
const Int_t NumberOfTrackVariables = 4;

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

private:
  std::map<TString, TH1D *> fHistogramYild;
  std::map<TString, std::pair<Double_t, Double_t>> ValueRange;
  std::map<TString, Int_t> NumberOfBins;
  ClassDef(DataReaderPlotter, 0);
  Bool_t isYildInitialized;
};

#endif