#include <vector>
#include <iostream>
#include <TDirectoryFile.h>
#include <TDirectory.h>
#include <TFile.h>
#include <TString.h>
#include <TChain.h>
#include <TH1.h>
#include <TH2.h>
#include <TProfile.h>
#include <TSystem.h>
#include <TLorentzVector.h>

#include "/home/peter/ROOT/UniGen/unigen-trunk/base/include/UEvent.h"
#include "/home/peter/ROOT/UniGen/unigen-trunk/base/include/UParticle.h"

const Int_t dim = 1;
const Int_t part = 3;
const Int_t nFiles = 1;

// ityp = 101 - pion
// ityp = 1   - proton
// ityp = 106 - kaon

using namespace std;
using namespace TMath;

Int_t nt_min = 395; // 394 + 1
Int_t ev = 1000;

const Int_t nCentral = 3;
const Char_t *particles[part] = {"proton", "pion", "allParticles"};
const Char_t *centralities[nCentral] = {"central", "mid-central", "periph"};
// const Double_t energy[dim] = {5., 7., 9., 11.};
// const Char_t *energyVal[dim] = {"5GeV", "7GeV", "9GeV", "11GeV"};
const Double_t energy[dim] = {11.};
const Char_t *energyVal[dim] = {"11GeV"};
// const Int_t types[part] = {1, 101, 10000};
const Int_t types[part] = {2212, 211, 10000};

const UInt_t size = 1000000;

TProfile *v1Y[part][nCentral][dim];
TProfile *v1pt[part][nCentral][dim];
TProfile *v2Y[part][nCentral][dim];
TProfile *v2pt[part][nCentral][dim];

Float_t *flowsV1 = new Float_t[size];
Float_t *flowsV2 = new Float_t[size];
Float_t *rapidities = new Float_t[size];
Float_t *pt = new Float_t[size];

Int_t buff = 0;

TDirectory *dirNamesPart[part];
TDirectory *dirNamesCentral[nCentral];
TDirectory *dirNamesEnergy[dim];

Int_t nt;
Float_t imp;
Int_t ncoll;
Int_t ncoll_elast;
Int_t ncoll_inelast;
vector<Float_t> *px = NULL;
vector<Float_t> *py = NULL;
vector<Float_t> *pz = NULL;
vector<Float_t> *p0 = NULL;
vector<Float_t> *rx = NULL;
vector<Float_t> *ry = NULL;
vector<Float_t> *rz = NULL;
vector<Float_t> *m = NULL;
vector<Int_t> *particleID = NULL;
vector<Int_t> *charge = NULL;
vector<Float_t> *t_fr = NULL;
vector<Float_t> *rx_fr = NULL;
vector<Float_t> *ry_fr = NULL;
vector<Float_t> *rz_fr = NULL;
vector<Float_t> *e_fr = NULL;
vector<Float_t> *px_fr = NULL;
vector<Float_t> *py_fr = NULL;
vector<Float_t> *pz_fr = NULL;
vector<Float_t> *isSpect = NULL;

UEvent *event = new UEvent();
UParticle *particle;

void makeAnalisys(Char_t *, Int_t, Int_t, Int_t);
void copyEbEPoints(TProfile *, TProfile *);
void createDirStructure(TFile *);
void createHistos(TFile *);
void readFiles();
Bool_t CheckEvent();
TChain *readTreeInput(Char_t *);

//------------------------------------------------------------------------------

void makeAnalisys(Char_t *fileName, Int_t iEnergy, Int_t iPart)
{
  TChain *mcTree = readTreeInput(fileName);
  if (!mcTree)
    return;
  Int_t EvTot = 0;
  Int_t idx;

  TProfile *v1YEvent = new TProfile("tmp-v1YEvent", "", 10, -1.0, 1.0);
  TProfile *v2YEvent = new TProfile("tmp-v2YEvent", "", 10, -1.0, 1.0);
  TProfile *v1PtEvent = new TProfile("tmp-v1PtEvent", "", 10, 0.0, 2.0);
  TProfile *v2PtEvent = new TProfile("tmp-v2PtEvent", "", 10, 0.0, 2.0);

  for (Int_t iEvent = 0; iEvent < ev; iEvent++)
  {
    v1YEvent->Reset();
    v2YEvent->Reset();
    v1PtEvent->Reset();
    v2PtEvent->Reset();

    mcTree->GetEntry(iEvent);
    // if (CheckEvent() == kFALSE)
    //   continue;

    EvTot++;

    nt = event->GetNpa();
    imp = event->GetB();

    if (EvTot % 1000 == 0)
    std::cout << fileName << " NoE processed: " << EvTot << endl;

    if (nt < nt_min) // Eliminate events without collision
      continue;

    // Events selection depending on centrality
    if (imp < 5.)
      idx = 0;
    else if (imp > 5. && imp < 9.)
      idx = 1;
    else if (imp > 9.)
      idx = 2;

    Int_t effTrack = 0;

    for (Int_t j = 0; j < nt; j++)
    { // loop over tracks
      // std::cout << "\tone " << j << std::endl;

      particle = event->GetParticle(j);

      // Float_t ityp = ((particleID->at(j) == types[0] || particleID->at(j) == types[1]) && (iPart != 2)) ? particleID->at(j) : types[2];
      Int_t pdg = particle->GetPdg();
      Float_t ityp = ((pdg == types[0] || pdg == types[1]) && (iPart != 2)) ? pdg : types[2];
      // if (charge->at(j) == 0) // Take into account charged particles only
      //   continue;
      // if (isSpect->at(j) == 0)
      //   continue;

      effTrack++;

      // Float_t Px = px->at(j);
      // Float_t Py = py->at(j);
      // Float_t Pz = pz->at(j);
      // Float_t E = p0->at(j);
      // Float_t Pt = Sqrt(Px * Px + Py * Py);
      // Float_t v1 = Px / Pt;
      // Float_t v2 = ((Px * Px - Py * Py) / (Pt * Pt));
      // Float_t y = 0.5 * Log((E + Pz) / (E - Pz));

      Float_t Px = particle->Px();
      Float_t Py = particle->Py();
      Float_t Pz = particle->Pz();
      Float_t E = particle->E();
      Float_t Pt = Sqrt(Px * Px + Py * Py);
      Float_t v1 = Px / Pt;
      Float_t v2 = ((Px * Px - Py * Py) / (Pt * Pt));
      Float_t y = 0.5 * Log((E + Pz) / (E - Pz));

      if (ityp == types[iPart])
      {
        flowsV1[buff] = v1;
        flowsV2[buff] = v2;
        rapidities[buff] = y;
        pt[buff] = Pt;
        buff++;
      }

    } // tracks loop

    for (Int_t i = 0; i < buff; i++)
    {
      v1YEvent->Fill(rapidities[i], flowsV1[i]);
      v2YEvent->Fill(rapidities[i], flowsV2[i]);
      v1PtEvent->Fill(pt[i], flowsV1[i]);
      v2PtEvent->Fill(pt[i], flowsV2[i]);
      rapidities[i] = 0.;
      flowsV1[i] = 0.;
      flowsV2[i] = 0.;
    }

    copyEbEPoints(v1YEvent, v1Y[iPart][idx][iEnergy]);
    copyEbEPoints(v2YEvent, v2Y[iPart][idx][iEnergy]);
    copyEbEPoints(v1PtEvent, v1pt[iPart][idx][iEnergy]);
    copyEbEPoints(v2PtEvent, v2pt[iPart][idx][iEnergy]);

    buff = 0;
  } // event loop

  delete v1YEvent;
  delete v2YEvent;
  delete mcTree;
  delete v1PtEvent;
  delete v2PtEvent;
}

void copyEbEPoints(TProfile *pr1, TProfile *pr2)
{
  for (Int_t k = 1; k <= pr1->GetNbinsX(); ++k)
  {
    if (pr1->GetBinEntries(k) == 0)
      continue;
    Double_t x = pr1->GetBinCenter(k);
    Double_t y = pr1->GetBinContent(k);
    pr2->Fill(x, y);
  }
}

void createDirStructure(TFile *f)
{
  for (Int_t i = 0; i < part; i++)
  {
    dirNamesPart[i] = f->mkdir(particles[i]);
    for (Int_t j = 0; j < nCentral; j++)
    {
      dirNamesCentral[j] = f->GetDirectory(particles[i])->mkdir(centralities[j]);
      for (Int_t k = 0; k < dim; k++)
      {
        dirNamesEnergy[k] = f->GetDirectory(particles[i])->GetDirectory(centralities[j])->mkdir(energyVal[k]);
      }
    }
  }
}

void createHistos(TFile *f)
{
  Float_t momVal = 2.0;
  Float_t flowVal = 1.0;
  Int_t binNum = 100;
  for (Int_t i = 0; i < part; i++)
  {
    for (Int_t j = 0; j < nCentral; j++)
    {
      for (Int_t k = 0; k < dim; k++)
      {
        f->GetDirectory(particles[i])->GetDirectory(centralities[j])->GetDirectory(energyVal[k])->cd();
        v1Y[i][j][k] = new TProfile(Form("v1_vs_y_%s_%s_%G", particles[i], centralities[j], energy[k]), Form("v1_vs_y_%s_%s_%G", particles[i], centralities[j], energy[k]), binNum, -flowVal, flowVal);
        v1pt[i][j][k] = new TProfile(Form("v1_vs_pt_%s_%s_%G", particles[i], centralities[j], energy[k]), Form("v1_vs_pt_%s_%s_%G", particles[i], centralities[j], energy[k]), binNum, 0., momVal);
        v2Y[i][j][k] = new TProfile(Form("v2_vs_y_%s_%s_%G", particles[i], centralities[j], energy[k]), Form("v2_vs_y_%s_%s_%G", particles[i], centralities[j], energy[k]), binNum, -flowVal, flowVal);
        v2pt[i][j][k] = new TProfile(Form("v2_vs_pt_%s_%s_%G", particles[i], centralities[j], energy[k]), Form("v2_vs_pt_%s_%s_%G", particles[i], centralities[j], energy[k]), binNum, 0., momVal);
      }
    }
  }
}

void readFiles()
{
  for (Int_t iEnergy = 0; iEnergy < dim; iEnergy++)
  {
    for (Int_t iFile = 0; iFile < nFiles; iFile++)
    {
      // Char_t* fileName = Form("AuAu_ecm%Ggev.mbias_10000ev_%d_modif.f13.root", energy[iEnergy], energy[iEnergy], iFile);
      std::cout << "readFiles: open input" << std::endl;
      Char_t *fileName = Form("~/Documents/Dataset/phqmd_unigen.root");
      // Char_t *fileName = Form("/lustre/nyx/cbm/users/vkireyeu/PHQMD_AuAu67500MST/bin%d/fort.79.root", iFile);
      std::cout << "readFiles: open loop" << std::endl;
      for (Int_t iPart = 0; iPart < part; iPart++)
      {
        std::cout << "readFiles: loop part " << iPart << std::endl;
        makeAnalisys(fileName, iEnergy, iPart);
      }
    }
  }
}

TChain *readTreeInput(Char_t *fileName)
{
  TFile *fileMC = new TFile(fileName, "READ");
  if (!fileMC->IsOpen())
    return 0;

  TChain *mcTree = new TChain("events");
  mcTree->Add(fileName);

  // mcTree->SetBranchAddress("nt", &nt);
  // mcTree->SetBranchAddress("impactparam", &imp);
  // mcTree->SetBranchAddress("ncoll", &ncoll);
  // mcTree->SetBranchAddress("ncoll_elast", &ncoll_elast);
  // mcTree->SetBranchAddress("ncoll_inelast", &ncoll_inelast);
  // mcTree->SetBranchAddress("p0", &p0);
  // mcTree->SetBranchAddress("px", &px);
  // mcTree->SetBranchAddress("py", &py);
  // mcTree->SetBranchAddress("pz", &pz);
  // mcTree->SetBranchAddress("rx", &rx);
  // mcTree->SetBranchAddress("ry", &ry);
  // mcTree->SetBranchAddress("rz", &rz);
  // mcTree->SetBranchAddress("ityp", &particleID);
  // mcTree->SetBranchAddress("m", &m);
  // mcTree->SetBranchAddress("chg", &charge);
  // mcTree->SetBranchAddress("t_fr", &t_fr);
  // mcTree->SetBranchAddress("rx_fr", &rx_fr);
  // mcTree->SetBranchAddress("ry_fr", &ry_fr);
  // mcTree->SetBranchAddress("rz_fr", &rz_fr);
  // mcTree->SetBranchAddress("e_fr", &e_fr);
  // mcTree->SetBranchAddress("px_fr", &px_fr);
  // mcTree->SetBranchAddress("py_fr", &py_fr);
  // mcTree->SetBranchAddress("pz_fr", &pz_fr);
  // mcTree->SetBranchAddress("isSpect", &isSpect);
  mcTree->SetBranchAddress("event", &event);

  return mcTree;
}

void flow_example()
{
  std::cout << "Open output" << std::endl;
  TFile *f = new TFile("t_tree.root", "recreate");
  std::cout << "createDirStructure" << std::endl;
  createDirStructure(f);
  std::cout << "createHistos" << std::endl;
  createHistos(f);
  std::cout << "readFiles" << std::endl;
  readFiles();
  std::cout << "Write" << std::endl;
  f->Write();
  std::cout << "Close" << std::endl;
  f->Close();
}

Bool_t CheckEvent()
{
  Bool_t flag = kFALSE;
  if (p0->size() && px->size() && py->size() && pz->size() &&
      rx->size() && ry->size() && rz->size() &&
      particleID->size() && m->size() && charge->size() &&
      t_fr->size() && rx_fr->size() && ry_fr->size() && rz_fr->size() &&
      e_fr->size() && px_fr->size() && py_fr->size() && pz_fr->size())
    flag = kTRUE;
  return flag;
}

int main()
{
  std::cout << "Start" << std::endl;

  flow_example();

  return 0;
}