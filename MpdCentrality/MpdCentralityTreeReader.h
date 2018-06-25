//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun 21 11:06:29 2018 by ROOT version 6.15/01
// from TTree MpdCentralityTreeReader/Branches for centrality determination
// found on file: Documents/WorkLocal/MPD/RootFiles/TDR/tree_Centrality_LAQGSM_GEANT4_11gev.root
//////////////////////////////////////////////////////////

#ifndef MpdCentralityTreeReader_h
#define MpdCentralityTreeReader_h

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

// Header file for the classes stored in the TTree if any.

class MpdCentralityTreeReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         fEf1;
   Float_t         fEf2;
   Float_t         fEf3;
   Float_t         fEb1;
   Float_t         fEb2;
   Float_t         fEb3;
   Float_t         fB;
   Float_t         fMultTPC;

   // List of branches
   TBranch        *b_fEf1;   //!
   TBranch        *b_fEf2;   //!
   TBranch        *b_fEf3;   //!
   TBranch        *b_fEb1;   //!
   TBranch        *b_fEb2;   //!
   TBranch        *b_fEb3;   //!
   TBranch        *b_fB;   //!
   TBranch        *b_fMultTPC;   //!
   
   TH2F           *hMultEdep = new TH2F("hMultEdep","N_{ch} TPC vs E_{dep} FHCal;M/M_{max};E_{dep}/E_{dep,max}",600,0.,1.,600,0.,1.);
   TGraph         *gMultEdep;

   MpdCentralityTreeReader(TTree *tree=0);
   virtual ~MpdCentralityTreeReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual TGraph*  GetTGraph();
   ClassDef(MpdCentralityTreeReader,2);
};

#endif

#ifdef MpdCentralityTreeReader_cxx
MpdCentralityTreeReader::MpdCentralityTreeReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/tree_Centrality_LAQGSM_GEANT4_11gev.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/home/peter/Documents/WorkLocal/MPD/RootFiles/TDR/tree_Centrality_LAQGSM_GEANT4_11gev.root");
      }
      f->GetObject("MpdCentrality",tree);

   }
   Init(tree);
}

MpdCentralityTreeReader::~MpdCentralityTreeReader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MpdCentralityTreeReader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MpdCentralityTreeReader::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MpdCentralityTreeReader::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("fEf1", &fEf1, &b_fEf1);
   fChain->SetBranchAddress("fEf2", &fEf2, &b_fEf2);
   fChain->SetBranchAddress("fEf3", &fEf3, &b_fEf3);
   fChain->SetBranchAddress("fEb1", &fEb1, &b_fEb1);
   fChain->SetBranchAddress("fEb2", &fEb2, &b_fEb2);
   fChain->SetBranchAddress("fEb3", &fEb3, &b_fEb3);
   fChain->SetBranchAddress("fB", &fB, &b_fB);
   fChain->SetBranchAddress("fMultTPC", &fMultTPC, &b_fMultTPC);
   Notify();
}

Bool_t MpdCentralityTreeReader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MpdCentralityTreeReader::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MpdCentralityTreeReader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
TGraph* MpdCentralityTreeReader::GetTGraph()
{
  Loop();
  return gMultEdep;
}
#endif // #ifdef MpdCentralityTreeReader_cxx
