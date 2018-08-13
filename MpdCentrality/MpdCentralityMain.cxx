#include <iostream>
#include "MpdCentralityTreeReader.h"
#include "MpdCentralityProcesses.h"

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

int main()
{
  MpdCentralityTreeReader *cent = new MpdCentralityTreeReader();
  cent->Loop();

  delete cent;

  return 0;
}
