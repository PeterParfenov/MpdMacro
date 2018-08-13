#ifndef DATAREADER_H
#define DATAREADER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "TROOT.h"
#include "TFile.h"
#include "TH1.h"
#include "TString.h"
#include "TTree.h"

#include "DataReaderEvent.h"

#include "ListOfPDG.h"

struct FileType
{
  Bool_t isASCII;
  Bool_t isROOT;
  ClassDef(FileType, 0);
};

struct InputFile
{
  TFile ROOT;
  std::ifstream ASCII;
  ClassDef(InputFile, 0);
};

struct ModelType
{
  Bool_t isURQMD;
  Bool_t isLAQGSM;
  Bool_t isPHSD;
  Bool_t isPHQMD;
  ClassDef(ModelType, 0);
};

class DataReader
{
public:
  DataReader();
  ~DataReader();

  Bool_t InitInputFile(TString _name);
  void InitOutputFile(TString _name);
  Bool_t ReadFile(TString _name);
  void ReadUrQMD();
  void InitTree(TString _treeName, TString _treeTitle);
  void InitDRETree(TString _treeName, TString _treeTitle);
  void WriteTree();

private:
  void FillTree();
  std::map<Int_t, Int_t> InitPDGDictionary();
  TFile *oTreeFile = {nullptr};
  InputFile iFile;
  TString outputFileName = "";
  TTree *fTree = {nullptr};
  TTree *fDRETree = {nullptr};

protected:
  FileType fFileType;
  ModelType fModelType;
  DataReaderEvent *fEvent;
  Bool_t isTreeInitialized = false;
  Bool_t isDRETreeInitialized = false;
  Bool_t isOutputTreeFileInitialized = false;

  ClassDef(DataReader, 0);
};

#endif