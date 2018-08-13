#ifndef MpdCentralityTreeReader_cxx
#define MpdCentralityTreeReader_cxx
#include "MpdCentralityTreeReader.h"
#include "MpdCentralityProcesses.h"

#define _MAX_MULT 630
#define _MAX_EDEP 60

void MpdCentralityTreeReader::Loop()
{
  if (fChain == 0)
    return;

  Long64_t nentries = fChain->GetEntriesFast();

  std::cout << "N events: " << nentries << std::endl;

  gMultEdep = new TGraph(nentries);
  gMultEdep->GetXaxis()->SetTitle("M/M_{max}");
  gMultEdep->GetYaxis()->SetTitle("E_{dep}/E_{dep,max}");

  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry = 0; jentry < nentries; jentry++)
  {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0)
      break;
    nb = fChain->GetEntry(jentry);
    nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if (jentry % 1000 == 0)
      std::cout << "Event N: " << jentry << std::endl;

    hMultEdep->Fill(fMultTPC / _MAX_MULT, (fEf1 + fEf2 + fEf3 + fEb1 + fEb2 + fEb3) / _MAX_EDEP);
    gMultEdep->SetPoint(jentry, fMultTPC / _MAX_MULT, (fEf1 + fEf2 + fEf3 + fEb1 + fEb2 + fEb3) / _MAX_EDEP);
  }

  //std::vector<double> vCentrality = GetCentralityClasses(hMultEdep,100);
  MpdCentralityProcesses *centralityProc = new MpdCentralityProcesses();
  int vCentrality = centralityProc->GetCentralityClasses(gMultEdep, 100);
}
#endif
