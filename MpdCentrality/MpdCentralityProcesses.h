#ifndef MpdCentralityProcesses_h
#define MpdCentralityProcesses_h

#include <iostream>

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2.h>
#include <TH2F.h>
#include <TProfile.h>
#include <TF1.h>
#include <TGraph.h>
#include <TStyle.h>
#include <TCanvas.h>

class MpdCentralityProcesses
{
public:
  MpdCentralityProcesses();
  virtual ~MpdCentralityProcesses();
  virtual int GetCentralityClasses(TH2F *hInput, const int steps);
  virtual int GetCentralityClasses(TH2F *hInput);
  virtual int GetCentralityClasses(TGraph *hInput, const int steps);
  virtual int GetCentralityClasses(TGraph *hInput);
  virtual TH2F *GetHistogram(TGraph *gInput, TString name, TString title, int NbinX, float Xmin, float Xmax, int NbinY, float Ymin, float Ymax);

private:
  TF1 *fInput;
  TH2F *hInput;
  TProfile *pInput;
  Double_t x, x1, x2, xLow, xHigh, l, length, y, y1, y2, xprev;
  ClassDef(MpdCentralityProcesses, 1);
};

#endif
