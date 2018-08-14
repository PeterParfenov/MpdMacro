#include "DataReader.h"
#include "TStopwatch.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
  TStopwatch timer;
  timer.Start();

  std::cout << "DataReaderMain: Processing." << std::endl;

  TString inFileName, outFileName;
  Double_t Norm = 1.;

  if (argc < 5)
  {
    std::cerr << "./Main -i INPUTFILE -o OUTPUTFILE [OPTIONAL: -Nfiles NFILES]" << std::endl;
    return 10;
  }

  for (int i = 1; i < argc; i++)
  {
    if (std::string(argv[i]) != "-i" &&
        std::string(argv[i]) != "-o" &&
        std::string(argv[i]) != "-Nfiles")
    {
      std::cerr << "\nDataReaderMain: Unknown parameter: " << i << ": " << argv[i] << std::endl;
      return 10;
    }
    else
    {
      if (std::string(argv[i]) == "-i" && i != argc - 1)
      {
        inFileName = argv[++i];
      }
      if (std::string(argv[i]) == "-i" && i == argc - 1)
      {
        std::cerr << "\nDataReaderMain: Input file name was not specified!" << std::endl;
        return 20;
      }
      if (std::string(argv[i]) == "-o" && i != argc - 1)
      {
        outFileName = argv[++i];
      }
      if (std::string(argv[i]) == "-o" && i == argc - 1)
      {
        std::cerr << "\nDataReaderMain: Output file name was not specified!" << std::endl;
        return 21;
      }
      if (std::string(argv[i]) == "-Nfiles" && i != argc - 1)
      {
        Norm = atof(argv[++i]);
      }
      if (std::string(argv[i]) == "-Nfiles" && i == argc - 1)
      {
        std::cerr << "\nDataReaderMain: Number of files was not specified!" << std::endl;
        return 21;
      }
    }
  }

  DataReader *dR = new DataReader();
  dR->InitTree("tree", "Basic QA tree");
  // dR->InitDRETree("DRETree", "Basic QA tree w/ DataReaderEvent class");
  dR->InitOutputFile(outFileName);
  dR->ReadFile(inFileName);
  dR->ScaleYildHists(Norm);
  dR->WriteTree();
  dR->WriteHist();

  delete dR;
  timer.Stop();
  std::cout << std::endl;
  timer.Print();

  return 0;
}