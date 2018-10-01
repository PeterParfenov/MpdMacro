void DrawPHSD()
{
  TLatex ltitle;
  TLegendEntry *header;
  TLine line;
  line.SetLineStyle(2);
  line.SetLineWidth(2);
  TFile *styleFile = new TFile("~/Documents/WorkLocal/MPD/RootFiles/TDR/my_style.root", "read");
  TFile *modelFilePHSD11GeV = new TFile("~/Documents/Dataset/modelQA_PHSD_11GeV_5M_hist.root", "read");
  TFile *modelFilePHQMD11GeV = new TFile("~/Documents/Dataset/modelQA_PHQMD_11GeV_1M_hist.root", "read");
  TFile *modelFilePHQMD_PHSD11GeV = new TFile("~/Documents/Dataset/modelQA_PHQMD-PHSD.root", "read");

  std::vector<TLegend *> legend;
  std::pair<double, double> legCoordX = {0.2, 0.85};
  std::pair<double, double> legCoordY = {0.75, 0.89};

  TStyle *style = (TStyle *)styleFile->Get("style");
  style->SetLabelSize(0.05);
  style->SetTitleSize(0.05);
  style->SetOptTitle(0);
  style->SetTitleOffset(1.1, "X");
  style->SetMarkerSize(1.3);

  gROOT->ForceStyle();
  style->cd();
  gStyle->SetPalette(kDarkRainBow);

  TProfile *v1PHSDCentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1PHSDMidcentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1PHSDPeripheralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1PHSDCentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1PHSDMidcentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1PHSDPeripheralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1PHSDCentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1PHSDMidcentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1PHSDPeripheralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1PHSDCentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1PHSDMidcentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1PHSDPeripheralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1PHSDCentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1PHSDMidcentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1PHSDPeripheralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1PHSDCentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1PHSDMidcentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1PHSDPeripheralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2PHSDCentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2PHSDMidcentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2PHSDPeripheralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2PHSDCentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2PHSDMidcentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2PHSDPeripheralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2PHSDCentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2PHSDMidcentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2PHSDPeripheralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2PHSDCentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2PHSDMidcentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2PHSDPeripheralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2PHSDCentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2PHSDMidcentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2PHSDPeripheralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2PHSDCentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2PHSDMidcentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2PHSDPeripheralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3PHSDCentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3PHSDMidcentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3PHSDPeripheralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3PHSDCentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3PHSDMidcentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3PHSDPeripheralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3PHSDCentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3PHSDMidcentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3PHSDPeripheralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3PHSDCentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3PHSDMidcentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3PHSDPeripheralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3PHSDCentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3PHSDMidcentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3PHSDPeripheralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3PHSDCentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3PHSDMidcentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3PHSDPeripheralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  // ----------------------------------------------------------------------------------------------------------------------------

  TProfile *v1PHQMDCentralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1PHQMDMidcentralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1PHQMDPeripheralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1PHQMDCentralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1PHQMDMidcentralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1PHQMDPeripheralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1PHQMDCentralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1PHQMDMidcentralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1PHQMDPeripheralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1PHQMDCentralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1PHQMDMidcentralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1PHQMDPeripheralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1PHQMDCentralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1PHQMDMidcentralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1PHQMDPeripheralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1PHQMDCentralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1PHQMDMidcentralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1PHQMDPeripheralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2PHQMDCentralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2PHQMDMidcentralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2PHQMDPeripheralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2PHQMDCentralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2PHQMDMidcentralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2PHQMDPeripheralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2PHQMDCentralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2PHQMDMidcentralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2PHQMDPeripheralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2PHQMDCentralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2PHQMDMidcentralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2PHQMDPeripheralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2PHQMDCentralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2PHQMDMidcentralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2PHQMDPeripheralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2PHQMDCentralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2PHQMDMidcentralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2PHQMDPeripheralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3PHQMDCentralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3PHQMDMidcentralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3PHQMDPeripheralPtProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3PHQMDCentralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3PHQMDMidcentralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3PHQMDPeripheralPtPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3PHQMDCentralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3PHQMDMidcentralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3PHQMDPeripheralPtKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3PHQMDCentralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3PHQMDMidcentralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3PHQMDPeripheralRapidityProton = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3PHQMDCentralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3PHQMDMidcentralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3PHQMDPeripheralRapidityPion = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3PHQMDCentralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3PHQMDMidcentralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3PHQMDPeripheralRapidityKaon = (TProfile *)modelFilePHQMD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  // ----------------------------------------------------------------------------------------------------------------------------

  TProfile *v1PHQMD_PHSDCentralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1PHQMD_PHSDMidcentralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1PHQMD_PHSDPeripheralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1PHQMD_PHSDCentralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1PHQMD_PHSDMidcentralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1PHQMD_PHSDPeripheralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1PHQMD_PHSDCentralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1PHQMD_PHSDMidcentralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1PHQMD_PHSDPeripheralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1PHQMD_PHSDCentralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1PHQMD_PHSDMidcentralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1PHQMD_PHSDPeripheralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1PHQMD_PHSDCentralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1PHQMD_PHSDMidcentralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1PHQMD_PHSDPeripheralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1PHQMD_PHSDCentralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1PHQMD_PHSDMidcentralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1PHQMD_PHSDPeripheralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2PHQMD_PHSDCentralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2PHQMD_PHSDMidcentralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2PHQMD_PHSDPeripheralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2PHQMD_PHSDCentralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2PHQMD_PHSDMidcentralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2PHQMD_PHSDPeripheralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2PHQMD_PHSDCentralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2PHQMD_PHSDMidcentralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2PHQMD_PHSDPeripheralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2PHQMD_PHSDCentralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2PHQMD_PHSDMidcentralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2PHQMD_PHSDPeripheralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2PHQMD_PHSDCentralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2PHQMD_PHSDMidcentralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2PHQMD_PHSDPeripheralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2PHQMD_PHSDCentralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2PHQMD_PHSDMidcentralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2PHQMD_PHSDPeripheralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3PHQMD_PHSDCentralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3PHQMD_PHSDMidcentralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3PHQMD_PHSDPeripheralPtProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3PHQMD_PHSDCentralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3PHQMD_PHSDMidcentralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3PHQMD_PHSDPeripheralPtPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3PHQMD_PHSDCentralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3PHQMD_PHSDMidcentralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3PHQMD_PHSDPeripheralPtKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3PHQMD_PHSDCentralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3PHQMD_PHSDMidcentralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3PHQMD_PHSDPeripheralRapidityProton = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3PHQMD_PHSDCentralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3PHQMD_PHSDMidcentralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3PHQMD_PHSDPeripheralRapidityPion = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3PHQMD_PHSDCentralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3PHQMD_PHSDMidcentralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3PHQMD_PHSDPeripheralRapidityKaon = (TProfile *)modelFilePHQMD_PHSD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  // ----------------------------------------------------------------------------------------------------------------------------

  v1PHSDCentralPtProton->SetTitle("PHSD");
  v1PHSDMidcentralPtProton->SetTitle("PHSD");
  v1PHSDPeripheralPtProton->SetTitle("PHSD");
  v1PHSDCentralPtPion->SetTitle("PHSD");
  v1PHSDMidcentralPtPion->SetTitle("PHSD");
  v1PHSDPeripheralPtPion->SetTitle("PHSD");
  v1PHSDCentralPtKaon->SetTitle("PHSD");
  v1PHSDMidcentralPtKaon->SetTitle("PHSD");
  v1PHSDPeripheralPtKaon->SetTitle("PHSD");

  v1PHSDCentralRapidityProton->SetTitle("PHSD");
  v1PHSDMidcentralRapidityProton->SetTitle("PHSD");
  v1PHSDPeripheralRapidityProton->SetTitle("PHSD");
  v1PHSDCentralRapidityPion->SetTitle("PHSD");
  v1PHSDMidcentralRapidityPion->SetTitle("PHSD");
  v1PHSDPeripheralRapidityPion->SetTitle("PHSD");
  v1PHSDCentralRapidityKaon->SetTitle("PHSD");
  v1PHSDMidcentralRapidityKaon->SetTitle("PHSD");
  v1PHSDPeripheralRapidityKaon->SetTitle("PHSD");

  v2PHSDCentralPtProton->SetTitle("PHSD");
  v2PHSDMidcentralPtProton->SetTitle("PHSD");
  v2PHSDPeripheralPtProton->SetTitle("PHSD");
  v2PHSDCentralPtPion->SetTitle("PHSD");
  v2PHSDMidcentralPtPion->SetTitle("PHSD");
  v2PHSDPeripheralPtPion->SetTitle("PHSD");
  v2PHSDCentralPtKaon->SetTitle("PHSD");
  v2PHSDMidcentralPtKaon->SetTitle("PHSD");
  v2PHSDPeripheralPtKaon->SetTitle("PHSD");

  v2PHSDCentralRapidityProton->SetTitle("PHSD");
  v2PHSDMidcentralRapidityProton->SetTitle("PHSD");
  v2PHSDPeripheralRapidityProton->SetTitle("PHSD");
  v2PHSDCentralRapidityPion->SetTitle("PHSD");
  v2PHSDMidcentralRapidityPion->SetTitle("PHSD");
  v2PHSDPeripheralRapidityPion->SetTitle("PHSD");
  v2PHSDCentralRapidityKaon->SetTitle("PHSD");
  v2PHSDMidcentralRapidityKaon->SetTitle("PHSD");
  v2PHSDPeripheralRapidityKaon->SetTitle("PHSD");

  v3PHSDCentralPtProton->SetTitle("PHSD");
  v3PHSDMidcentralPtProton->SetTitle("PHSD");
  v3PHSDPeripheralPtProton->SetTitle("PHSD");
  v3PHSDCentralPtPion->SetTitle("PHSD");
  v3PHSDMidcentralPtPion->SetTitle("PHSD");
  v3PHSDPeripheralPtPion->SetTitle("PHSD");
  v3PHSDCentralPtKaon->SetTitle("PHSD");
  v3PHSDMidcentralPtKaon->SetTitle("PHSD");
  v3PHSDPeripheralPtKaon->SetTitle("PHSD");

  v3PHSDCentralRapidityProton->SetTitle("PHSD");
  v3PHSDMidcentralRapidityProton->SetTitle("PHSD");
  v3PHSDPeripheralRapidityProton->SetTitle("PHSD");
  v3PHSDCentralRapidityPion->SetTitle("PHSD");
  v3PHSDMidcentralRapidityPion->SetTitle("PHSD");
  v3PHSDPeripheralRapidityPion->SetTitle("PHSD");
  v3PHSDCentralRapidityKaon->SetTitle("PHSD");
  v3PHSDMidcentralRapidityKaon->SetTitle("PHSD");
  v3PHSDPeripheralRapidityKaon->SetTitle("PHSD");

  v1PHQMDCentralPtProton->SetTitle("PHQMD_UNIGEN");
  v1PHQMDMidcentralPtProton->SetTitle("PHQMD_UNIGEN");
  v1PHQMDPeripheralPtProton->SetTitle("PHQMD_UNIGEN");
  v1PHQMDCentralPtPion->SetTitle("PHQMD_UNIGEN");
  v1PHQMDMidcentralPtPion->SetTitle("PHQMD_UNIGEN");
  v1PHQMDPeripheralPtPion->SetTitle("PHQMD_UNIGEN");
  v1PHQMDCentralPtKaon->SetTitle("PHQMD_UNIGEN");
  v1PHQMDMidcentralPtKaon->SetTitle("PHQMD_UNIGEN");
  v1PHQMDPeripheralPtKaon->SetTitle("PHQMD_UNIGEN");

  v1PHQMDCentralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v1PHQMDMidcentralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v1PHQMDPeripheralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v1PHQMDCentralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v1PHQMDMidcentralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v1PHQMDPeripheralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v1PHQMDCentralRapidityKaon->SetTitle("PHQMD_UNIGEN");
  v1PHQMDMidcentralRapidityKaon->SetTitle("PHQMD_UNIGEN");
  v1PHQMDPeripheralRapidityKaon->SetTitle("PHQMD_UNIGEN");

  v2PHQMDCentralPtProton->SetTitle("PHQMD_UNIGEN");
  v2PHQMDMidcentralPtProton->SetTitle("PHQMD_UNIGEN");
  v2PHQMDPeripheralPtProton->SetTitle("PHQMD_UNIGEN");
  v2PHQMDCentralPtPion->SetTitle("PHQMD_UNIGEN");
  v2PHQMDMidcentralPtPion->SetTitle("PHQMD_UNIGEN");
  v2PHQMDPeripheralPtPion->SetTitle("PHQMD_UNIGEN");
  v2PHQMDCentralPtKaon->SetTitle("PHQMD_UNIGEN");
  v2PHQMDMidcentralPtKaon->SetTitle("PHQMD_UNIGEN");
  v2PHQMDPeripheralPtKaon->SetTitle("PHQMD_UNIGEN");

  v2PHQMDCentralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v2PHQMDMidcentralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v2PHQMDPeripheralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v2PHQMDCentralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v2PHQMDMidcentralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v2PHQMDPeripheralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v2PHQMDCentralRapidityKaon->SetTitle("PHQMD_UNIGEN");
  v2PHQMDMidcentralRapidityKaon->SetTitle("PHQMD_UNIGEN");
  v2PHQMDPeripheralRapidityKaon->SetTitle("PHQMD_UNIGEN");

  v3PHQMDCentralPtProton->SetTitle("PHQMD_UNIGEN");
  v3PHQMDMidcentralPtProton->SetTitle("PHQMD_UNIGEN");
  v3PHQMDPeripheralPtProton->SetTitle("PHQMD_UNIGEN");
  v3PHQMDCentralPtPion->SetTitle("PHQMD_UNIGEN");
  v3PHQMDMidcentralPtPion->SetTitle("PHQMD_UNIGEN");
  v3PHQMDPeripheralPtPion->SetTitle("PHQMD_UNIGEN");
  v3PHQMDCentralPtKaon->SetTitle("PHQMD_UNIGEN");
  v3PHQMDMidcentralPtKaon->SetTitle("PHQMD_UNIGEN");
  v3PHQMDPeripheralPtKaon->SetTitle("PHQMD_UNIGEN");

  v3PHQMDCentralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v3PHQMDMidcentralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v3PHQMDPeripheralRapidityProton->SetTitle("PHQMD_UNIGEN");
  v3PHQMDCentralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v3PHQMDMidcentralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v3PHQMDPeripheralRapidityPion->SetTitle("PHQMD_UNIGEN");
  v3PHQMDCentralRapidityKaon->SetTitle("PHQMD_UNIGEN");
  v3PHQMDMidcentralRapidityKaon->SetTitle("PHQMD_UNIGEN");
  v3PHQMDPeripheralRapidityKaon->SetTitle("PHQMD_UNIGEN");

  v1PHQMD_PHSDCentralPtProton->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDMidcentralPtProton->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDPeripheralPtProton->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDCentralPtPion->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDMidcentralPtPion->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDPeripheralPtPion->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDCentralPtKaon->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDMidcentralPtKaon->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDPeripheralPtKaon->SetTitle("PHQMD_PHSD");

  v1PHQMD_PHSDCentralRapidityProton->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDMidcentralRapidityProton->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDPeripheralRapidityProton->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDCentralRapidityPion->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDMidcentralRapidityPion->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDPeripheralRapidityPion->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDCentralRapidityKaon->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDMidcentralRapidityKaon->SetTitle("PHQMD_PHSD");
  v1PHQMD_PHSDPeripheralRapidityKaon->SetTitle("PHQMD_PHSD");

  v2PHQMD_PHSDCentralPtProton->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDMidcentralPtProton->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDPeripheralPtProton->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDCentralPtPion->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDMidcentralPtPion->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDPeripheralPtPion->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDCentralPtKaon->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDMidcentralPtKaon->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDPeripheralPtKaon->SetTitle("PHQMD_PHSD");

  v2PHQMD_PHSDCentralRapidityProton->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDMidcentralRapidityProton->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDPeripheralRapidityProton->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDCentralRapidityPion->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDMidcentralRapidityPion->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDPeripheralRapidityPion->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDCentralRapidityKaon->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDMidcentralRapidityKaon->SetTitle("PHQMD_PHSD");
  v2PHQMD_PHSDPeripheralRapidityKaon->SetTitle("PHQMD_PHSD");

  v3PHQMD_PHSDCentralPtProton->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDMidcentralPtProton->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDPeripheralPtProton->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDCentralPtPion->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDMidcentralPtPion->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDPeripheralPtPion->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDCentralPtKaon->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDMidcentralPtKaon->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDPeripheralPtKaon->SetTitle("PHQMD_PHSD");

  v3PHQMD_PHSDCentralRapidityProton->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDMidcentralRapidityProton->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDPeripheralRapidityProton->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDCentralRapidityPion->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDMidcentralRapidityPion->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDPeripheralRapidityPion->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDCentralRapidityKaon->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDMidcentralRapidityKaon->SetTitle("PHQMD_PHSD");
  v3PHQMD_PHSDPeripheralRapidityKaon->SetTitle("PHQMD_PHSD");

  Int_t iC = -1;
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1CentralRapidityProton11GeV = new TCanvas("canv_v1CentralRapidityProton11GeV", "canv_v1CentralRapidityProton11GeV", 700, 500);
  canv_v1CentralRapidityProton11GeV->cd();

  v1PHSDCentralRapidityProton->GetYaxis()->SetRangeUser(-0.05, 0.076);
  v1PHSDCentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDCentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDCentralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDCentralRapidityProton, v1PHSDCentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDCentralRapidityProton, v1PHQMDCentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDCentralRapidityProton, v1PHQMD_PHSDCentralRapidityProton->GetTitle(), "p");
  v1PHSDCentralRapidityProton->Draw("");
  legend.at(iC)->Draw();
  v1PHSDCentralRapidityProton->Draw("same PLC PMC");
  v1PHQMDCentralRapidityProton->Draw("same PLC PMC");
  v1PHQMD_PHSDCentralRapidityProton->Draw("same PLC PMC");
  line.DrawLine(v1PHSDCentralRapidityProton->GetXaxis()->GetXmin(), 0., v1PHSDCentralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1MidcentralRapidityProton11GeV = new TCanvas("canv_v1MidcentralRapidityProton11GeV", "canv_v1MidcentralRapidityProton11GeV", 700, 500);
  canv_v1MidcentralRapidityProton11GeV->cd();

  v1PHSDMidcentralRapidityProton->GetYaxis()->SetRangeUser(-0.05, 0.076);
  v1PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDMidcentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDMidcentralRapidityProton, v1PHSDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDMidcentralRapidityProton, v1PHQMDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDMidcentralRapidityProton, v1PHQMD_PHSDMidcentralRapidityProton->GetTitle(), "p");
  v1PHSDMidcentralRapidityProton->Draw("");
  legend.at(iC)->Draw();
  v1PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  v1PHQMDMidcentralRapidityProton->Draw("same PLC PMC");
  v1PHQMD_PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  line.DrawLine(v1PHSDMidcentralRapidityProton->GetXaxis()->GetXmin(), 0., v1PHSDMidcentralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1PeripheralRapidityProton11GeV = new TCanvas("canv_v1PeripheralRapidityProton11GeV", "canv_v1PeripheralRapidityProton11GeV", 700, 500);
  canv_v1PeripheralRapidityProton11GeV->cd();

  v1PHSDPeripheralRapidityProton->GetYaxis()->SetRangeUser(-0.05, 0.076);
  v1PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDPeripheralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDPeripheralRapidityProton, v1PHSDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDPeripheralRapidityProton, v1PHQMDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDPeripheralRapidityProton, v1PHQMD_PHSDPeripheralRapidityProton->GetTitle(), "p");
  v1PHSDPeripheralRapidityProton->Draw("");
  legend.at(iC)->Draw();
  v1PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  v1PHQMDPeripheralRapidityProton->Draw("same PLC PMC");
  v1PHQMD_PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  line.DrawLine(v1PHSDPeripheralRapidityProton->GetXaxis()->GetXmin(), 0., v1PHSDPeripheralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1CentralPtProton11GeV = new TCanvas("canv_v1CentralPtProton11GeV", "canv_v1CentralPtProton11GeV", 700, 500);
  canv_v1CentralPtProton11GeV->cd();

  v1PHSDCentralPtProton->GetYaxis()->SetRangeUser(-0.032, 0.035);
  v1PHSDCentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDCentralPtProton->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDCentralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDCentralPtProton, v1PHSDCentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDCentralPtProton, v1PHQMDCentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDCentralPtProton, v1PHQMD_PHSDCentralPtProton->GetTitle(), "p");
  v1PHSDCentralPtProton->Draw("");
  legend.at(iC)->Draw();
  v1PHSDCentralPtProton->Draw("same PLC PMC");
  v1PHQMDCentralPtProton->Draw("same PLC PMC");
  v1PHQMD_PHSDCentralPtProton->Draw("same PLC PMC");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1MidcentralPtProton11GeV = new TCanvas("canv_v1MidcentralPtProton11GeV", "canv_v1MidcentralPtProton11GeV", 700, 500);
  canv_v1MidcentralPtProton11GeV->cd();

  v1PHSDMidcentralPtProton->GetYaxis()->SetRangeUser(-0.05, 0.039);
  v1PHSDMidcentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDMidcentralPtProton->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDMidcentralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDMidcentralPtProton, v1PHSDMidcentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDMidcentralPtProton, v1PHQMDMidcentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDMidcentralPtProton, v1PHQMD_PHSDMidcentralPtProton->GetTitle(), "p");
  v1PHSDMidcentralPtProton->Draw("");
  legend.at(iC)->Draw();
  v1PHSDMidcentralPtProton->Draw("same PLC PMC");
  v1PHQMDMidcentralPtProton->Draw("same PLC PMC");
  v1PHQMD_PHSDMidcentralPtProton->Draw("same PLC PMC");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1PeripheralPtProton11GeV = new TCanvas("canv_v1PeripheralPtProton11GeV", "canv_v1PeripheralPtProton11GeV", 700, 500);
  canv_v1PeripheralPtProton11GeV->cd();

  v1PHSDPeripheralPtProton->GetYaxis()->SetRangeUser(-0.09, 0.076);
  v1PHSDPeripheralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDPeripheralPtProton->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDPeripheralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDPeripheralPtProton, v1PHSDPeripheralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDPeripheralPtProton, v1PHQMDPeripheralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDPeripheralPtProton, v1PHQMD_PHSDPeripheralPtProton->GetTitle(), "p");
  v1PHSDPeripheralPtProton->Draw("");
  legend.at(iC)->Draw();
  v1PHSDPeripheralPtProton->Draw("same PLC PMC");
  v1PHQMDPeripheralPtProton->Draw("same PLC PMC");
  v1PHQMD_PHSDPeripheralPtProton->Draw("same PLC PMC");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1CentralRapidityPion11GeV = new TCanvas("canv_v1CentralRapidityPion11GeV", "canv_v1CentralRapidityPion11GeV", 700, 500);
  canv_v1CentralRapidityPion11GeV->cd();

  v1PHSDCentralRapidityPion->GetYaxis()->SetRangeUser(-0.05, 0.076);
  v1PHSDCentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDCentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDCentralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDCentralRapidityPion, v1PHSDCentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDCentralRapidityPion, v1PHQMDCentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDCentralRapidityPion, v1PHQMD_PHSDCentralRapidityPion->GetTitle(), "p");
  v1PHSDCentralRapidityPion->Draw("");
  legend.at(iC)->Draw();
  v1PHSDCentralRapidityPion->Draw("same PLC PMC");
  v1PHQMDCentralRapidityPion->Draw("same PLC PMC");
  v1PHQMD_PHSDCentralRapidityPion->Draw("same PLC PMC");
  line.DrawLine(v1PHSDCentralRapidityPion->GetXaxis()->GetXmin(), 0., v1PHSDCentralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1MidcentralRapidityPion11GeV = new TCanvas("canv_v1MidcentralRapidityPion11GeV", "canv_v1MidcentralRapidityPion11GeV", 700, 500);
  canv_v1MidcentralRapidityPion11GeV->cd();

  v1PHSDMidcentralRapidityPion->GetYaxis()->SetRangeUser(-0.05, 0.076);
  v1PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDMidcentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDMidcentralRapidityPion, v1PHSDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDMidcentralRapidityPion, v1PHQMDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDMidcentralRapidityPion, v1PHQMD_PHSDMidcentralRapidityPion->GetTitle(), "p");
  v1PHSDMidcentralRapidityPion->Draw("");
  legend.at(iC)->Draw();
  v1PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  v1PHQMDMidcentralRapidityPion->Draw("same PLC PMC");
  v1PHQMD_PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  line.DrawLine(v1PHSDMidcentralRapidityPion->GetXaxis()->GetXmin(), 0., v1PHSDMidcentralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1PeripheralRapidityPion11GeV = new TCanvas("canv_v1PeripheralRapidityPion11GeV", "canv_v1PeripheralRapidityPion11GeV", 700, 500);
  canv_v1PeripheralRapidityPion11GeV->cd();

  v1PHSDPeripheralRapidityPion->GetYaxis()->SetRangeUser(-0.08, 0.08);
  v1PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDPeripheralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDPeripheralRapidityPion, v1PHSDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDPeripheralRapidityPion, v1PHQMDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDPeripheralRapidityPion, v1PHQMD_PHSDPeripheralRapidityPion->GetTitle(), "p");
  v1PHSDPeripheralRapidityPion->Draw("");
  legend.at(iC)->Draw();
  v1PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  v1PHQMDPeripheralRapidityPion->Draw("same PLC PMC");
  v1PHQMD_PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  line.DrawLine(v1PHSDPeripheralRapidityPion->GetXaxis()->GetXmin(), 0., v1PHSDPeripheralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1CentralPtPion11GeV = new TCanvas("canv_v1CentralPtPion11GeV", "canv_v1CentralPtPion11GeV", 700, 500);
  canv_v1CentralPtPion11GeV->cd();

  v1PHSDCentralPtPion->GetYaxis()->SetRangeUser(-0.015, 0.021);
  v1PHSDCentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDCentralPtPion->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDCentralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDCentralPtPion, v1PHSDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDCentralPtPion, v1PHQMDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDCentralPtPion, v1PHQMD_PHSDCentralPtPion->GetTitle(), "p");
  v1PHSDCentralPtPion->Draw("");
  legend.at(iC)->Draw();
  v1PHSDCentralPtPion->Draw("same PLC PMC");
  v1PHQMDCentralPtPion->Draw("same PLC PMC");
  v1PHQMD_PHSDCentralPtPion->Draw("same PLC PMC");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1MidcentralPtPion11GeV = new TCanvas("canv_v1MidcentralPtPion11GeV", "canv_v1MidcentralPtPion11GeV", 700, 500);
  canv_v1MidcentralPtPion11GeV->cd();

  v1PHSDMidcentralPtPion->GetYaxis()->SetRangeUser(-0.035, 0.042);
  v1PHSDMidcentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDMidcentralPtPion->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDMidcentralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDMidcentralPtPion, v1PHSDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDMidcentralPtPion, v1PHQMDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDMidcentralPtPion, v1PHQMD_PHSDMidcentralPtPion->GetTitle(), "p");
  v1PHSDMidcentralPtPion->Draw("");
  legend.at(iC)->Draw();
  v1PHSDMidcentralPtPion->Draw("same PLC PMC");
  v1PHQMDMidcentralPtPion->Draw("same PLC PMC");
  v1PHQMD_PHSDMidcentralPtPion->Draw("same PLC PMC");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1PeripheralPtPion11GeV = new TCanvas("canv_v1PeripheralPtPion11GeV", "canv_v1PeripheralPtPion11GeV", 700, 500);
  canv_v1PeripheralPtPion11GeV->cd();

  v1PHSDPeripheralPtPion->GetYaxis()->SetRangeUser(-0.05, 0.04);
  v1PHSDPeripheralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v1PHQMDPeripheralPtPion->SetMarkerStyle(kOpenDiamond);
  v1PHQMD_PHSDPeripheralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v1PHSDPeripheralPtPion, v1PHSDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMDPeripheralPtPion, v1PHQMDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1PHQMD_PHSDPeripheralPtPion, v1PHQMD_PHSDPeripheralPtPion->GetTitle(), "p");
  v1PHSDPeripheralPtPion->Draw("");
  legend.at(iC)->Draw();
  v1PHSDPeripheralPtPion->Draw("same PLC PMC");
  v1PHQMDPeripheralPtPion->Draw("same PLC PMC");
  v1PHQMD_PHSDPeripheralPtPion->Draw("same PLC PMC");




  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralRapidityProton11GeV = new TCanvas("canv_v2CentralRapidityProton11GeV", "canv_v2CentralRapidityProton11GeV", 700, 500);
  canv_v2CentralRapidityProton11GeV->cd();

  v2PHSDCentralRapidityProton->GetYaxis()->SetRangeUser(-0.03, 0.04);
  v2PHSDCentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDCentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDCentralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDCentralRapidityProton, v2PHSDCentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDCentralRapidityProton, v2PHQMDCentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDCentralRapidityProton, v2PHQMD_PHSDCentralRapidityProton->GetTitle(), "p");
  v2PHSDCentralRapidityProton->Draw("");
  v2PHSDCentralRapidityProton->Draw("same PLC PMC");
  v2PHQMDCentralRapidityProton->Draw("same PLC PMC");
  v2PHQMD_PHSDCentralRapidityProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralRapidityProton11GeV = new TCanvas("canv_v2MidcentralRapidityProton11GeV", "canv_v2MidcentralRapidityProton11GeV", 700, 500);
  canv_v2MidcentralRapidityProton11GeV->cd();

  v2PHSDMidcentralRapidityProton->GetYaxis()->SetRangeUser(-0.005, 0.085);
  v2PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDMidcentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDMidcentralRapidityProton, v2PHSDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDMidcentralRapidityProton, v2PHQMDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDMidcentralRapidityProton, v2PHQMD_PHSDMidcentralRapidityProton->GetTitle(), "p");
  v2PHSDMidcentralRapidityProton->Draw("");
  v2PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  v2PHQMDMidcentralRapidityProton->Draw("same PLC PMC");
  v2PHQMD_PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralRapidityProton11GeV = new TCanvas("canv_v2PeripheralRapidityProton11GeV", "canv_v2PeripheralRapidityProton11GeV", 700, 500);
  canv_v2PeripheralRapidityProton11GeV->cd();

  v2PHSDPeripheralRapidityProton->GetYaxis()->SetRangeUser(0.005, 0.096);
  v2PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDPeripheralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDPeripheralRapidityProton, v2PHSDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDPeripheralRapidityProton, v2PHQMDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDPeripheralRapidityProton, v2PHQMD_PHSDPeripheralRapidityProton->GetTitle(), "p");
  v2PHSDPeripheralRapidityProton->Draw("");
  v2PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  v2PHQMDPeripheralRapidityProton->Draw("same PLC PMC");
  v2PHQMD_PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralPtProton11GeV = new TCanvas("canv_v2CentralPtProton11GeV", "canv_v2CentralPtProton11GeV", 700, 500);
  canv_v2CentralPtProton11GeV->cd();

  v2PHSDCentralPtProton->GetYaxis()->SetRangeUser(-0.045, 0.045);
  v2PHSDCentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDCentralPtProton->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDCentralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDCentralPtProton, v2PHSDCentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDCentralPtProton, v2PHQMDCentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDCentralPtProton, v2PHQMD_PHSDCentralPtProton->GetTitle(), "p");
  v2PHSDCentralPtProton->Draw("");
  v2PHSDCentralPtProton->Draw("same PLC PMC");
  v2PHQMDCentralPtProton->Draw("same PLC PMC");
  v2PHQMD_PHSDCentralPtProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralPtProton11GeV = new TCanvas("canv_v2MidcentralPtProton11GeV", "canv_v2MidcentralPtProton11GeV", 700, 500);
  canv_v2MidcentralPtProton11GeV->cd();

  v2PHSDMidcentralPtProton->GetYaxis()->SetRangeUser(-0.025, 0.12);
  v2PHSDMidcentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDMidcentralPtProton->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDMidcentralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDMidcentralPtProton, v2PHSDMidcentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDMidcentralPtProton, v2PHQMDMidcentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDMidcentralPtProton, v2PHQMD_PHSDMidcentralPtProton->GetTitle(), "p");
  v2PHSDMidcentralPtProton->Draw("");
  v2PHSDMidcentralPtProton->Draw("same PLC PMC");
  v2PHQMDMidcentralPtProton->Draw("same PLC PMC");
  v2PHQMD_PHSDMidcentralPtProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralPtProton11GeV = new TCanvas("canv_v2PeripheralPtProton11GeV", "canv_v2PeripheralPtProton11GeV", 700, 500);
  canv_v2PeripheralPtProton11GeV->cd();

  v2PHSDPeripheralPtProton->GetYaxis()->SetRangeUser(-0.005, 0.125);
  v2PHSDPeripheralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDPeripheralPtProton->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDPeripheralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDPeripheralPtProton, v2PHSDPeripheralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDPeripheralPtProton, v2PHQMDPeripheralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDPeripheralPtProton, v2PHQMD_PHSDPeripheralPtProton->GetTitle(), "p");
  v2PHSDPeripheralPtProton->Draw("");
  v2PHSDPeripheralPtProton->Draw("same PLC PMC");
  v2PHQMDPeripheralPtProton->Draw("same PLC PMC");
  v2PHQMD_PHSDPeripheralPtProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralRapidityPion11GeV = new TCanvas("canv_v2CentralRapidityPion11GeV", "canv_v2CentralRapidityPion11GeV", 700, 500);
  canv_v2CentralRapidityPion11GeV->cd();

  v2PHSDCentralRapidityPion->GetYaxis()->SetRangeUser(0.01, 0.035);
  v2PHSDCentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDCentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDCentralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDCentralRapidityPion, v2PHSDCentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDCentralRapidityPion, v2PHQMDCentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDCentralRapidityPion, v2PHQMD_PHSDCentralRapidityPion->GetTitle(), "p");
  v2PHSDCentralRapidityPion->Draw("");
  v2PHSDCentralRapidityPion->Draw("same PLC PMC");
  v2PHQMDCentralRapidityPion->Draw("same PLC PMC");
  v2PHQMD_PHSDCentralRapidityPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralRapidityPion11GeV = new TCanvas("canv_v2MidcentralRapidityPion11GeV", "canv_v2MidcentralRapidityPion11GeV", 700, 500);
  canv_v2MidcentralRapidityPion11GeV->cd();

  v2PHSDMidcentralRapidityPion->GetYaxis()->SetRangeUser(0.039, 0.069);
  v2PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDMidcentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDMidcentralRapidityPion, v2PHSDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDMidcentralRapidityPion, v2PHQMDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDMidcentralRapidityPion, v2PHQMD_PHSDMidcentralRapidityPion->GetTitle(), "p");
  v2PHSDMidcentralRapidityPion->Draw("");
  v2PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  v2PHQMDMidcentralRapidityPion->Draw("same PLC PMC");
  v2PHQMD_PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralRapidityPion11GeV = new TCanvas("canv_v2PeripheralRapidityPion11GeV", "canv_v2PeripheralRapidityPion11GeV", 700, 500);
  canv_v2PeripheralRapidityPion11GeV->cd();

  v2PHSDPeripheralRapidityPion->GetYaxis()->SetRangeUser(0.028, 0.055);
  v2PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDPeripheralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDPeripheralRapidityPion, v2PHSDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDPeripheralRapidityPion, v2PHQMDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDPeripheralRapidityPion, v2PHQMD_PHSDPeripheralRapidityPion->GetTitle(), "p");
  v2PHSDPeripheralRapidityPion->Draw("");
  v2PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  v2PHQMDPeripheralRapidityPion->Draw("same PLC PMC");
  v2PHQMD_PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralPtPion11GeV = new TCanvas("canv_v2CentralPtPion11GeV", "canv_v2CentralPtPion11GeV", 700, 500);
  canv_v2CentralPtPion11GeV->cd();

  v2PHSDCentralPtPion->GetYaxis()->SetRangeUser(-0.005, 0.051);
  v2PHSDCentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDCentralPtPion->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDCentralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDCentralPtPion, v2PHSDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDCentralPtPion, v2PHQMDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDCentralPtPion, v2PHQMD_PHSDCentralPtPion->GetTitle(), "p");
  v2PHSDCentralPtPion->Draw("");
  v2PHSDCentralPtPion->Draw("same PLC PMC");
  v2PHQMDCentralPtPion->Draw("same PLC PMC");
  v2PHQMD_PHSDCentralPtPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralPtPion11GeV = new TCanvas("canv_v2MidcentralPtPion11GeV", "canv_v2MidcentralPtPion11GeV", 700, 500);
  canv_v2MidcentralPtPion11GeV->cd();

  v2PHSDMidcentralPtPion->GetYaxis()->SetRangeUser(0.02, 0.1);
  v2PHSDMidcentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDMidcentralPtPion->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDMidcentralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDMidcentralPtPion, v2PHSDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDMidcentralPtPion, v2PHQMDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDMidcentralPtPion, v2PHQMD_PHSDMidcentralPtPion->GetTitle(), "p");
  v2PHSDMidcentralPtPion->Draw("");
  v2PHSDMidcentralPtPion->Draw("same PLC PMC");
  v2PHQMDMidcentralPtPion->Draw("same PLC PMC");
  v2PHQMD_PHSDMidcentralPtPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralPtPion11GeV = new TCanvas("canv_v2PeripheralPtPion11GeV", "canv_v2PeripheralPtPion11GeV", 700, 500);
  canv_v2PeripheralPtPion11GeV->cd();

  v2PHSDPeripheralPtPion->GetYaxis()->SetRangeUser(0.02, 0.09);
  v2PHSDPeripheralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v2PHQMDPeripheralPtPion->SetMarkerStyle(kOpenDiamond);
  v2PHQMD_PHSDPeripheralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v2PHSDPeripheralPtPion, v2PHSDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMDPeripheralPtPion, v2PHQMDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2PHQMD_PHSDPeripheralPtPion, v2PHQMD_PHSDPeripheralPtPion->GetTitle(), "p");
  v2PHSDPeripheralPtPion->Draw("");
  v2PHSDPeripheralPtPion->Draw("same PLC PMC");
  v2PHQMDPeripheralPtPion->Draw("same PLC PMC");
  v2PHQMD_PHSDPeripheralPtPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();


  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3CentralRapidityProton11GeV = new TCanvas("canv_v3CentralRapidityProton11GeV", "canv_v3CentralRapidityProton11GeV", 700, 500);
  canv_v3CentralRapidityProton11GeV->cd();

  v3PHSDCentralRapidityProton->GetYaxis()->SetRangeUser(-0.018, 0.012);
  v3PHSDCentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDCentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDCentralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDCentralRapidityProton, v3PHSDCentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDCentralRapidityProton, v3PHQMDCentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDCentralRapidityProton, v3PHQMD_PHSDCentralRapidityProton->GetTitle(), "p");
  v3PHSDCentralRapidityProton->Draw("");
  legend.at(iC)->Draw();
  v3PHSDCentralRapidityProton->Draw("same PLC PMC");
  v3PHQMDCentralRapidityProton->Draw("same PLC PMC");
  v3PHQMD_PHSDCentralRapidityProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();
  line.DrawLine(v3PHSDCentralRapidityProton->GetXaxis()->GetXmin(), 0., v3PHSDCentralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3MidcentralRapidityProton11GeV = new TCanvas("canv_v3MidcentralRapidityProton11GeV", "canv_v3MidcentralRapidityProton11GeV", 700, 500);
  canv_v3MidcentralRapidityProton11GeV->cd();

  v3PHSDMidcentralRapidityProton->GetYaxis()->SetRangeUser(-0.014, 0.012);
  v3PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDMidcentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDMidcentralRapidityProton, v3PHSDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDMidcentralRapidityProton, v3PHQMDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDMidcentralRapidityProton, v3PHQMD_PHSDMidcentralRapidityProton->GetTitle(), "p");
  v3PHSDMidcentralRapidityProton->Draw("");
  legend.at(iC)->Draw();
  v3PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  v3PHQMDMidcentralRapidityProton->Draw("same PLC PMC");
  v3PHQMD_PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();
  line.DrawLine(v3PHSDMidcentralRapidityProton->GetXaxis()->GetXmin(), 0., v3PHSDMidcentralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3PeripheralRapidityProton11GeV = new TCanvas("canv_v3PeripheralRapidityProton11GeV", "canv_v3PeripheralRapidityProton11GeV", 700, 500);
  canv_v3PeripheralRapidityProton11GeV->cd();

  v3PHSDPeripheralRapidityProton->GetYaxis()->SetRangeUser(-0.031, 0.022);
  v3PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDPeripheralRapidityProton->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDPeripheralRapidityProton, v3PHSDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDPeripheralRapidityProton, v3PHQMDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDPeripheralRapidityProton, v3PHQMD_PHSDPeripheralRapidityProton->GetTitle(), "p");
  v3PHSDPeripheralRapidityProton->Draw("");
  legend.at(iC)->Draw();
  v3PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  v3PHQMDPeripheralRapidityProton->Draw("same PLC PMC");
  v3PHQMD_PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();
  line.DrawLine(v3PHSDPeripheralRapidityProton->GetXaxis()->GetXmin(), 0., v3PHSDPeripheralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3CentralPtProton11GeV = new TCanvas("canv_v3CentralPtProton11GeV", "canv_v3CentralPtProton11GeV", 700, 500);
  canv_v3CentralPtProton11GeV->cd();

  v3PHSDCentralPtProton->GetYaxis()->SetRangeUser(-0.0035, 0.018);
  v3PHSDCentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDCentralPtProton->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDCentralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDCentralPtProton, v3PHSDCentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDCentralPtProton, v3PHQMDCentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDCentralPtProton, v3PHQMD_PHSDCentralPtProton->GetTitle(), "p");
  v3PHSDCentralPtProton->Draw("");
  legend.at(iC)->Draw();
  v3PHSDCentralPtProton->Draw("same PLC PMC");
  v3PHQMDCentralPtProton->Draw("same PLC PMC");
  v3PHQMD_PHSDCentralPtProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3MidcentralPtProton11GeV = new TCanvas("canv_v3MidcentralPtProton11GeV", "canv_v3MidcentralPtProton11GeV", 700, 500);
  canv_v3MidcentralPtProton11GeV->cd();

  v3PHSDMidcentralPtProton->GetYaxis()->SetRangeUser(-0.005, 0.055);
  v3PHSDMidcentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDMidcentralPtProton->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDMidcentralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDMidcentralPtProton, v3PHSDMidcentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDMidcentralPtProton, v3PHQMDMidcentralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDMidcentralPtProton, v3PHQMD_PHSDMidcentralPtProton->GetTitle(), "p");
  v3PHSDMidcentralPtProton->Draw("");
  legend.at(iC)->Draw();
  v3PHSDMidcentralPtProton->Draw("same PLC PMC");
  v3PHQMDMidcentralPtProton->Draw("same PLC PMC");
  v3PHQMD_PHSDMidcentralPtProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3PeripheralPtProton11GeV = new TCanvas("canv_v3PeripheralPtProton11GeV", "canv_v3PeripheralPtProton11GeV", 700, 500);
  canv_v3PeripheralPtProton11GeV->cd();

  v3PHSDPeripheralPtProton->GetYaxis()->SetRangeUser(-0.021, 0.09);
  v3PHSDPeripheralPtProton->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDPeripheralPtProton->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDPeripheralPtProton->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDPeripheralPtProton, v3PHSDPeripheralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDPeripheralPtProton, v3PHQMDPeripheralPtProton->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDPeripheralPtProton, v3PHQMD_PHSDPeripheralPtProton->GetTitle(), "p");
  v3PHSDPeripheralPtProton->Draw("");
  legend.at(iC)->Draw();
  v3PHSDPeripheralPtProton->Draw("same PLC PMC");
  v3PHQMDPeripheralPtProton->Draw("same PLC PMC");
  v3PHQMD_PHSDPeripheralPtProton->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3CentralRapidityPion11GeV = new TCanvas("canv_v3CentralRapidityPion11GeV", "canv_v3CentralRapidityPion11GeV", 700, 500);
  canv_v3CentralRapidityPion11GeV->cd();

  v3PHSDCentralRapidityPion->GetYaxis()->SetRangeUser(-0.0025, 0.0036);
  v3PHSDCentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDCentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDCentralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDCentralRapidityPion, v3PHSDCentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDCentralRapidityPion, v3PHQMDCentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDCentralRapidityPion, v3PHQMD_PHSDCentralRapidityPion->GetTitle(), "p");
  v3PHSDCentralRapidityPion->Draw("");
  legend.at(iC)->Draw();
  v3PHSDCentralRapidityPion->Draw("same PLC PMC");
  v3PHQMDCentralRapidityPion->Draw("same PLC PMC");
  v3PHQMD_PHSDCentralRapidityPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();
  line.DrawLine(v3PHSDCentralRapidityPion->GetXaxis()->GetXmin(), 0., v3PHSDCentralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3MidcentralRapidityPion11GeV = new TCanvas("canv_v3MidcentralRapidityPion11GeV", "canv_v3MidcentralRapidityPion11GeV", 700, 500);
  canv_v3MidcentralRapidityPion11GeV->cd();

  v3PHSDMidcentralRapidityPion->GetYaxis()->SetRangeUser(-0.005, 0.005);
  v3PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDMidcentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDMidcentralRapidityPion, v3PHSDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDMidcentralRapidityPion, v3PHQMDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDMidcentralRapidityPion, v3PHQMD_PHSDMidcentralRapidityPion->GetTitle(), "p");
  v3PHSDMidcentralRapidityPion->Draw("");
  legend.at(iC)->Draw();
  v3PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  v3PHQMDMidcentralRapidityPion->Draw("same PLC PMC");
  v3PHQMD_PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();
  line.DrawLine(v3PHSDMidcentralRapidityPion->GetXaxis()->GetXmin(), 0., v3PHSDMidcentralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3PeripheralRapidityPion11GeV = new TCanvas("canv_v3PeripheralRapidityPion11GeV", "canv_v3PeripheralRapidityPion11GeV", 700, 500);
  canv_v3PeripheralRapidityPion11GeV->cd();

  v3PHSDPeripheralRapidityPion->GetYaxis()->SetRangeUser(-0.005, 0.008);
  v3PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDPeripheralRapidityPion->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDPeripheralRapidityPion, v3PHSDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDPeripheralRapidityPion, v3PHQMDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDPeripheralRapidityPion, v3PHQMD_PHSDPeripheralRapidityPion->GetTitle(), "p");
  v3PHSDPeripheralRapidityPion->Draw("");
  legend.at(iC)->Draw();
  v3PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  v3PHQMDPeripheralRapidityPion->Draw("same PLC PMC");
  v3PHQMD_PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();
  line.DrawLine(v3PHSDPeripheralRapidityPion->GetXaxis()->GetXmin(), 0., v3PHSDPeripheralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3CentralPtPion11GeV = new TCanvas("canv_v3CentralPtPion11GeV", "canv_v3CentralPtPion11GeV", 700, 500);
  canv_v3CentralPtPion11GeV->cd();

  v3PHSDCentralPtPion->GetYaxis()->SetRangeUser(-0.011, 0.013);
  v3PHSDCentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDCentralPtPion->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDCentralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDCentralPtPion, v3PHSDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDCentralPtPion, v3PHQMDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDCentralPtPion, v3PHQMD_PHSDCentralPtPion->GetTitle(), "p");
  v3PHSDCentralPtPion->Draw("");
  legend.at(iC)->Draw();
  v3PHSDCentralPtPion->Draw("same PLC PMC");
  v3PHQMDCentralPtPion->Draw("same PLC PMC");
  v3PHQMD_PHSDCentralPtPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3MidcentralPtPion11GeV = new TCanvas("canv_v3MidcentralPtPion11GeV", "canv_v3MidcentralPtPion11GeV", 700, 500);
  canv_v3MidcentralPtPion11GeV->cd();

  v3PHSDMidcentralPtPion->GetYaxis()->SetRangeUser(-0.005, 0.016);
  v3PHSDMidcentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDMidcentralPtPion->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDMidcentralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDMidcentralPtPion, v3PHSDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDMidcentralPtPion, v3PHQMDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDMidcentralPtPion, v3PHQMD_PHSDMidcentralPtPion->GetTitle(), "p");
  v3PHSDMidcentralPtPion->Draw("");
  legend.at(iC)->Draw();
  v3PHSDMidcentralPtPion->Draw("same PLC PMC");
  v3PHQMDMidcentralPtPion->Draw("same PLC PMC");
  v3PHQMD_PHSDMidcentralPtPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v3PeripheralPtPion11GeV = new TCanvas("canv_v3PeripheralPtPion11GeV", "canv_v3PeripheralPtPion11GeV", 700, 500);
  canv_v3PeripheralPtPion11GeV->cd();

  v3PHSDPeripheralPtPion->GetYaxis()->SetRangeUser(-0.024, 0.012);
  v3PHSDPeripheralPtPion->SetMarkerStyle(kOpenTriangleUp);
  v3PHQMDPeripheralPtPion->SetMarkerStyle(kOpenDiamond);
  v3PHQMD_PHSDPeripheralPtPion->SetMarkerStyle(kOpenSquare);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(2);
  legend.at(iC)->AddEntry(v3PHSDPeripheralPtPion, v3PHSDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMDPeripheralPtPion, v3PHQMDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v3PHQMD_PHSDPeripheralPtPion, v3PHQMD_PHSDPeripheralPtPion->GetTitle(), "p");
  v3PHSDPeripheralPtPion->Draw("");
  legend.at(iC)->Draw();
  v3PHSDPeripheralPtPion->Draw("same PLC PMC");
  v3PHQMDPeripheralPtPion->Draw("same PLC PMC");
  v3PHQMD_PHSDPeripheralPtPion->Draw("same PLC PMC");
  legend.at(iC)->Draw();


  canv_v1CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1CentralRapidityProton11GeV.png");
  canv_v1MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1MidcentralRapidityProton11GeV.png");
  canv_v1PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1PeripheralRapidityProton11GeV.png");
  canv_v1CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1CentralPtProton11GeV.png");
  canv_v1MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1MidcentralPtProton11GeV.png");
  canv_v1PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1PeripheralPtProton11GeV.png");
  canv_v1CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1CentralRapidityPion11GeV.png");
  canv_v1MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1MidcentralRapidityPion11GeV.png");
  canv_v1PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1PeripheralRapidityPion11GeV.png");
  canv_v1CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1CentralPtPion11GeV.png");
  canv_v1MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1MidcentralPtPion11GeV.png");
  canv_v1PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v1PeripheralPtPion11GeV.png");

  canv_v2CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2CentralRapidityProton11GeV.png");
  canv_v2MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2MidcentralRapidityProton11GeV.png");
  canv_v2PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2PeripheralRapidityProton11GeV.png");
  canv_v2CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2CentralPtProton11GeV.png");
  canv_v2MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2MidcentralPtProton11GeV.png");
  canv_v2PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2PeripheralPtProton11GeV.png");
  canv_v2CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2CentralRapidityPion11GeV.png");
  canv_v2MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2MidcentralRapidityPion11GeV.png");
  canv_v2PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2PeripheralRapidityPion11GeV.png");
  canv_v2CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2CentralPtPion11GeV.png");
  canv_v2MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2MidcentralPtPion11GeV.png");
  canv_v2PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v2PeripheralPtPion11GeV.png");

  canv_v3CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3CentralRapidityProton11GeV.png");
  canv_v3MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3MidcentralRapidityProton11GeV.png");
  canv_v3PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3PeripheralRapidityProton11GeV.png");
  canv_v3CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3CentralPtProton11GeV.png");
  canv_v3MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3MidcentralPtProton11GeV.png");
  canv_v3PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3PeripheralPtProton11GeV.png");
  canv_v3CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3CentralRapidityPion11GeV.png");
  canv_v3MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3MidcentralRapidityPion11GeV.png");
  canv_v3PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3PeripheralRapidityPion11GeV.png");
  canv_v3CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3CentralPtPion11GeV.png");
  canv_v3MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3MidcentralPtPion11GeV.png");
  canv_v3PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelPHQMD/v3PeripheralPtPion11GeV.png");
}