#ifndef MpdCentralityTreeReader_cxx
#define MpdCentralityTreeReader_cxx
#include "MpdCentralityTreeReader.h"
#include "MpdCentralityProcesses.h"

#define _MAX_MULT             630
#define _MAX_EDEP             60

void MpdCentralityTreeReader::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MpdCentralityTreeReader.C
//      root> MpdCentralityTreeReader t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();

  std::cout << "N events: " << nentries << std::endl;
  
  gMultEdep = new TGraph(nentries);
  gMultEdep -> GetXaxis() -> SetTitle("M/M_{max}");
  gMultEdep -> GetYaxis() -> SetTitle("E_{dep}/E_{dep,max}");

  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if (jentry%1000 == 0) std::cout << "Event N: " << jentry << std::endl;
    
    hMultEdep -> Fill(fMultTPC/_MAX_MULT,(fEf1+fEf2+fEf3+fEb1+fEb2+fEb3)/_MAX_EDEP);
    gMultEdep -> SetPoint(jentry,fMultTPC/_MAX_MULT,(fEf1+fEf2+fEf3+fEb1+fEb2+fEb3)/_MAX_EDEP);
  }
  
  //std::vector<double> vCentrality = GetCentralityClasses(hMultEdep,100);
  MpdCentralityProcesses *centralityProc = new MpdCentralityProcesses();
  int vCentrality = centralityProc -> GetCentralityClasses(gMultEdep,100);
}
#endif
