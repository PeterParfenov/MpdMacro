#include "TROOT.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "TMultiGraph.h"

// STAR published results
//--------------------------------------------------------------------------------------------------------------
// Proton v1 data:
std::vector<TGraphAsymmErrors *> GetSTARv1CentralProton11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N = 8;
  double Rapidity[N] = {-0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7};
  double Rapidity_Error[N] = {
      0.0,
  };
  //11.5 GeV Proton
  //0-10%
  double y1[N] = {-0.0129386, -0.00227438, 0.00295323, -0.00056542, 0.00234785, 0.000163196, 0.00632508, 0.0132673};
  double ey1[N] = {0.00296635, 0.00183477, 0.00159732, 0.00166788, 0.00165045, 0.00158545, 0.00183829, 0.00304869};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1MidcentralProton11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N = 8;
  double Rapidity[N] = {-0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7};
  double Rapidity_Error[N] = {
      0.0,
  };
  //10-40%
  double y1[N] = {-0.00341595, 0.0009747036, 0.001212443, 0.0007160479, -0.0006701253, -0.00119874, -0.001219269, 0.003111589};
  double ey1[N] = {0.000953644, 0.000578296, 0.000499372, 0.00052311, 0.000518108, 0.000494702, 0.000575027, 0.00096231};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1PeripheralProton11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N = 8;
  double Rapidity[N] = {-0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7};
  double Rapidity_Error[N] = {
      0.0,
  };
  //40-80%
  double y1[N] = {0.0305119, 0.0239105, 0.0162317, 0.00540334, -0.00330357, -0.0149603, -0.0209334, -0.0318336};
  double ey1[N] = {0.00206919, 0.00121088, 0.00102956, 0.00108504, 0.00107436, 0.00101757, 0.00119847, 0.00207222};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1CentralProton7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N = 8;
  double Rapidity[N] = {-0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7};
  double Rapidity_Error[N] = {
      0.0,
  };
  //7.7 GeV Proton
  //0-10%
  double y1[N] = {-0.0203452, -0.00738625, -0.00433286, -0.00195176, 0.000685336, 0.00694344, 0.00878699, 0.0283179};
  double ey1[N] = {0.00543306, 0.00321989, 0.00273916, 0.00281952, 0.0027888, 0.00270132, 0.00320329, 0.00545943};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1MidcentralProton7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N = 8;
  double Rapidity[N] = {-0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7};
  double Rapidity_Error[N] = {
      0.0,
  };
  //10-40%
  double y1[N] = {-0.0218351, -0.00944496, -0.00447499, -0.00132103, 0.001304121, 0.004387375, 0.0093865102, 0.02143059};
  double ey1[N] = {0.0006705, 0.0006228, 0.0005701, 0.0005629, 0.0005672, 0.000569, 0.0005728, 0.0006806};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1PeripheralProton7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N = 8;
  double Rapidity[N] = {-0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7};
  double Rapidity_Error[N] = {
      0.0,
  };
  //40-80%
  double y1[N] = {0.0246792, 0.0240645, 0.0134543, 0.00284927, -0.00644522, -0.0140354, -0.0192329, -0.0228843};
  double ey1[N] = {0.00328052, 0.00187255, 0.00156262, 0.0016295, 0.00161519, 0.00152971, 0.00182294, 0.00319493};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1CentralPion11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  // Pion v1 data:
  const int N2 = 10;
  double Rapidity[N2] = {-0.9, -0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7, 0.9};
  double Rapidity_Error[N2] = {
      0.0,
  };
  //0-10%
  double y1[N2] = {0.00916816, 0.00508237, 0.00269664, 0.00194594, 0.000126252, -0.00273391, -0.0004427, -0.00433598, -0.00213611, -0.00493046};
  double ey1[N2] = {0.00194924, 0.00112243, 0.00101313, 0.000995277, 0.00102804, 0.00102633, 0.000999545, 0.00101835, 0.00114069, 0.0020668};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N2, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1MidcentralPion11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N2 = 10;
  double Rapidity[N2] = {-0.9, -0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7, 0.9};
  double Rapidity_Error[N2] = {
      0.0,
  };
  //10-40%
  double y1[N2] = {0.0181201, 0.013824, 0.00859977, 0.00512448, 0.00230668, -0.00191981, -0.00558514, -0.00975232, -0.0137853, -0.0176957};
  double ey1[N2] = {0.000599337, 0.000344096, 0.000310679, 0.000306777, 0.000316692, 0.000316232, 0.00030756, 0.000311395, 0.000346585, 0.000616744};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N2, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1PeripheralPion11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N2 = 10;
  double Rapidity[N2] = {-0.9, -0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7, 0.9};
  double Rapidity_Error[N2] = {
      0.0,
  };
  //40-80%
  double y1[N2] = {0.0403169, 0.0282246, 0.0196425, 0.0111353, 0.00281105, -0.00397749, -0.011127, -0.0202217, -0.0284867, -0.0389162};
  double ey1[N2] = {0.00116482, 0.000669188, 0.000606475, 0.000601291, 0.000620558, 0.000619358, 0.000601131, 0.000605408, 0.000670804, 0.00118378};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N2, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}
//7.7 GeV
std::vector<TGraphAsymmErrors *> GetSTARv1CentralPion7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N2 = 10;
  double Rapidity[N2] = {-0.9, -0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7, 0.9};
  double Rapidity_Error[N2] = {
      0.0,
  };
  //0-10%
  double y1[N2] = {0.000441316, 0.00182928, -0.000142038, -0.00089236, 0.000221004, -0.00526669, -0.00246784, -0.00131499, 0.000838314, -0.00750076};
  double
      ey1[N2] = {0.00435667, 0.00256068, 0.00221022, 0.00216492, 0.00218349, 0.00217873, 0.00215614, 0.00220043, 0.00258115, 0.00451173};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N2, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1MidcentralPion7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N2 = 10;
  double Rapidity[N2] = {-0.9, -0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7, 0.9};
  double Rapidity_Error[N2] = {
      0.0,
  };
  //10-40%
  double y1[N2] = {0.0180309, 0.0146537, 0.00902703, 0.00496062, 0.00290686, -0.00131913, -0.00603065, -0.00875126, -0.0123064, -0.0198444};
  double
      ey1[N2] = {0.00121468, 0.000716108, 0.000617812, 0.000609072, 0.000614311, 0.000612473, 0.000605817, 0.000612917, 0.000710979, 0.00121395};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N2, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}

std::vector<TGraphAsymmErrors *> GetSTARv1PeripheralPion7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const int N2 = 10;
  double Rapidity[N2] = {-0.9, -0.7, -0.5, -0.3, -0.1, 0.1, 0.3, 0.5, 0.7, 0.9};
  double Rapidity_Error[N2] = {
      0.0,
  };
  //40-80%
  double y1[N2] = {0.051107, 0.0363774, 0.0267159, 0.0184652, 0.00620654, -0.0041068, -0.0167095, -0.0267019, -0.0376915, -0.0526559};
  double ey1[N2] = {0.00227639, 0.00134638, 0.0011662, 0.00115529, 0.0011687, 0.00116132, 0.00114483, 0.00115022, 0.00132452, 0.0022337};

  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N2, Rapidity, y1, Rapidity_Error, Rapidity_Error, ey1, ey1);

  gr1->SetMarkerStyle(29);
  gr1->SetMarkerSize(2.2);
  gr1->SetFillColor(1);
  gr1->SetFillStyle(3001);

  vect.push_back(gr1);

  return vect;
}
//-----------------------------------------------------------------------------------------
// centrality: 0-10%
// beam energy: 7.7 GeV
// Event plane method: eta-sub
// ---------------- Particle species: Proton ----------------
std::vector<TGraphAsymmErrors *> GetSTARv2CentralProton7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const Int_t N = 11;
  const Double_t pt_bin = 0.02;
  Double_t pt_bin_center[N] = {0.315, 0.495, 0.705, 0.885, 1.095, 1.275, 1.485, 1.695, 1.875, 2.145, 2.625};
  Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
  Double_t v2_values[N] = {-0.000269201, 0.00292256, 0.0126519, 0.0210576, 0.0261742, 0.0307903, 0.0367998, 0.0400284, 0.0387608, 0.0421431, 0.0208087};
  Double_t v2_stat_error[N] = {0.00686715, 0.00260173, 0.00219494, 0.00224465, 0.00258058, 0.00317244, 0.0040983, 0.00551364, 0.00762922, 0.0085211, 0.017097};
  Double_t v2_syst_low_error[N] = {0.00583895, 0.00052618, 0.000210269, 0.000191756, 0.000115667, 0.00059384, 0.00111632, 0.000975622, 0.000495427, 0.00170409, 0.00815863};
  Double_t v2_syst_high_error[N] = {0.00207739, 0.000790032, 0.000111652, 0.000260565, 0.00021992, 0.000542486, 0.00203055, 0.000537239, 0.000971274, 0.00250967, 0.00413821};
  Double_t v2_syst_global_error[N] = {0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223, 0.00116223};
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_stat_error, v2_stat_error);
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_low_error, v2_syst_high_error);
  TGraphAsymmErrors *gr3 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_global_error, v2_syst_global_error);

  gr3->SetMarkerStyle(29);
  gr3->SetMarkerSize(2.2);
  gr2->SetFillColor(1);
  gr2->SetFillStyle(3001);
  gr3->SetFillColor(4);
  gr3->SetFillStyle(3002);

  vect.push_back(gr1);
  vect.push_back(gr2);
  vect.push_back(gr3);

  return vect;
}

// beam energy: 11.5 GeV
// Event plane method: eta-sub
// ---------------- Particle species: Proton ----------------
std::vector<TGraphAsymmErrors *> GetSTARv2CentralProton11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const Int_t N = 12;
  const Double_t pt_bin = 0.02;
  Double_t pt_bin_center[N] = {0.315, 0.495, 0.705, 0.885, 1.095, 1.275, 1.485, 1.695, 1.875, 2.085, 2.355, 2.805};
  Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
  Double_t v2_values[N] = {-0.000427349, 0.0028464, 0.0147849, 0.0237616, 0.0342703, 0.0427704, 0.0535675, 0.0600192, 0.0590241, 0.0636355, 0.0752996, 0.0746523};
  Double_t v2_stat_error[N] = {0.00352098, 0.00131852, 0.00110456, 0.00111843, 0.00126779, 0.00153667, 0.00195472, 0.00258985, 0.00351736, 0.00471402, 0.0053951, 0.0107001};
  Double_t v2_syst_low_error[N] = {0.00102177, 0.000316422, 0.000591555, 0.000377762, 0.000407647, 0.000312728, 0.0004822, 0.000577082, 0.000413772, 0.00195227, 0.0012802, 0.0012538};
  Double_t v2_syst_high_error[N] = {0.00288907, 0.000213613, 0.00119536, 0.000313941, 0.000796177, 0.00043402, 0.000260929, 0.00110637, 0.000755729, 0.00103925, 0.000693547, 0.00124311};
  Double_t v2_syst_global_error[N] = {0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635, 0.000955635};
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_stat_error, v2_stat_error);
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_low_error, v2_syst_high_error);
  TGraphAsymmErrors *gr3 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_global_error, v2_syst_global_error);

  gr3->SetMarkerStyle(29);
  gr3->SetMarkerSize(2.2);
  gr2->SetFillColor(1);
  gr2->SetFillStyle(3001);
  gr3->SetFillColor(4);
  gr3->SetFillStyle(3002);

  vect.push_back(gr1);
  vect.push_back(gr2);
  vect.push_back(gr3);

  return vect;
}

//-----------------------------------------------------------------------------------------
// centrality: 10-40%

// beam energy: 7.7 GeV
// Event plane method: eta-sub
// ---------------- Particle species: Proton ----------------
std::vector<TGraphAsymmErrors *> GetSTARv2MidcentralProton7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const Int_t N = 12;
  const Double_t pt_bin = 0.02;
  Double_t pt_bin_center[N] = {0.315, 0.495, 0.705, 0.885, 1.095, 1.275, 1.485, 1.695, 1.875, 2.085, 2.265, 2.625};
  Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
  Double_t v2_values[N] = {0.00643856, 0.0196543, 0.0362226, 0.0541206, 0.0781074, 0.090889, 0.10682, 0.121606, 0.131171, 0.13338, 0.14221, 0.152974};
  Double_t v2_stat_error[N] = {0.0028076, 0.00108471, 0.00093993, 0.000987168, 0.00115896, 0.00144923, 0.00189495, 0.00257513, 0.00358486, 0.00494914, 0.0070575, 0.00820795};
  Double_t v2_syst_low_error[N] = {0.00276658, 0.000576754, 0.00109959, 0.000118159, 0.000515559, 0.000388675, 0.000212473, 0.000415654, 0.000904369, 0.000963559, 0.00125468, 0.00391717};
  Double_t v2_syst_high_error[N] = {0.000944912, 0.000311883, 0.000503305, 0.000107656, 0.000468809, 0.000749411, 0.00011288, 0.000274677, 0.000484163, 0.000938662, 0.000643771, 0.00192167};
  Double_t v2_syst_global_error[N] = {0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189, 0.000889189};
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_stat_error, v2_stat_error);
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_low_error, v2_syst_high_error);
  TGraphAsymmErrors *gr3 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_global_error, v2_syst_global_error);

  gr3->SetMarkerStyle(29);
  gr3->SetMarkerSize(2.2);
  gr2->SetFillColor(1);
  gr2->SetFillStyle(3001);
  gr3->SetFillColor(4);
  gr3->SetFillStyle(3002);

  vect.push_back(gr1);
  vect.push_back(gr2);
  vect.push_back(gr3);

  return vect;
}

// beam energy: 11.5 GeV
// Event plane method: eta-sub
// ---------------- Particle species: Proton ----------------
std::vector<TGraphAsymmErrors *> GetSTARv2MidcentralProton11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const Int_t N = 14;
  const Double_t pt_bin = 0.02;
  Double_t pt_bin_center[N] = {0.315, 0.495, 0.705, 0.885, 1.095, 1.275, 1.485, 1.695, 1.875, 2.085, 2.265, 2.475, 2.685, 3.045};
  Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
  Double_t v2_values[N] = {0.0120472, 0.02022, 0.0387996, 0.0595139, 0.0827635, 0.102705, 0.12077, 0.135948, 0.149776, 0.157411, 0.166608, 0.174031, 0.180611, 0.199118};
  Double_t v2_stat_error[N] = {0.00170825, 0.000652142, 0.00056097, 0.000582846, 0.000674855, 0.000830744, 0.00106771, 0.00142295, 0.00194179, 0.00259974, 0.00362094, 0.005181, 0.00762002, 0.00926275};
  Double_t v2_syst_low_error[N] = {0.000277053, 0.000100436, 0.000576341, 0.000550148, 0.000266684, 0.000233713, 0.00012465, 0.000734831, 0.00043031, 0.000235896, 0.000832163, 0.0005678, 0.00128688, 0.00285366};
  Double_t v2_syst_high_error[N] = {0.000196377, 6.61454e-05, 0.000269464, 0.000262287, 0.000141673, 0.000116366, 0.00015917, 0.000395063, 0.000229589, 0.000280736, 0.000508944, 0.000327624, 0.00216592, 0.00275877};
  Double_t v2_syst_global_error[N] = {0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502, 0.000939502};
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_stat_error, v2_stat_error);
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_low_error, v2_syst_high_error);
  TGraphAsymmErrors *gr3 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_global_error, v2_syst_global_error);

  gr3->SetMarkerStyle(29);
  gr3->SetMarkerSize(2.2);
  gr2->SetFillColor(1);
  gr2->SetFillStyle(3001);
  gr3->SetFillColor(4);
  gr3->SetFillStyle(3002);

  vect.push_back(gr1);
  vect.push_back(gr2);
  vect.push_back(gr3);

  return vect;
}

//-----------------------------------------------------------------------------------------
// centrality: 40-80%

// beam energy: 7.7 GeV
// Event plane method: eta-sub
// ---------------- Particle species: Proton ----------------
std::vector<TGraphAsymmErrors *> GetSTARv2PeripheralProton7GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const Int_t N = 9;
  const Double_t pt_bin = 0.02;
  Double_t pt_bin_center[N] = {0.315, 0.495, 0.705, 0.885, 1.095, 1.275, 1.485, 1.755, 2.175};
  Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
  Double_t v2_values[N] = {0.0193443, 0.0292042, 0.0538348, 0.0808153, 0.0949687, 0.107889, 0.129731, 0.156801, 0.181197};
  Double_t v2_stat_error[N] = {0.0100635, 0.00405841, 0.00373599, 0.00414954, 0.00513363, 0.00670999, 0.00912322, 0.0105659, 0.0203899};
  Double_t v2_syst_low_error[N] = {0.00263558, 0.00341316, 0.000169805, 0.000530466, 0.000194844, 0.00143701, 0.000571208, 0.00137547, 0.00355183};
  Double_t v2_syst_high_error[N] = {0.000911431, 0.00143416, 0.000304894, 0.00083213, 0.000140493, 0.00271086, 0.00109541, 0.00253741, 0.0035047};
  Double_t v2_syst_global_error[N] = {0.00111216, 0.00111216, 0.00111216, 0.00111216, 0.00111216, 0.00111216, 0.00111216, 0.00111216, 0.00111216};
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_stat_error, v2_stat_error);
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_low_error, v2_syst_high_error);
  TGraphAsymmErrors *gr3 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_global_error, v2_syst_global_error);

  gr3->SetMarkerStyle(29);
  gr3->SetMarkerSize(2.2);
  gr2->SetFillColor(1);
  gr2->SetFillStyle(3001);
  gr3->SetFillColor(4);
  gr3->SetFillStyle(3002);

  vect.push_back(gr1);
  vect.push_back(gr2);
  vect.push_back(gr3);

  return vect;
}

// beam energy: 11.5 GeV
// Event plane method: eta-sub
// ---------------- Particle species: Proton ----------------
std::vector<TGraphAsymmErrors *> GetSTARv2PeripheralProton11GeV()
{
  std::vector<TGraphAsymmErrors *> vect;
  const Int_t N = 12;
  const Double_t pt_bin = 0.02;
  Double_t pt_bin_center[N] = {0.315, 0.495, 0.705, 0.885, 1.095, 1.275, 1.485, 1.695, 1.875, 2.085, 2.265, 2.535};
  Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
  Double_t v2_values[N] = {0.0328812, 0.0253787, 0.056364, 0.0806939, 0.114027, 0.131065, 0.151693, 0.182512, 0.202355, 0.218501, 0.236059, 0.230715};
  Double_t v2_stat_error[N] = {0.00578687, 0.00230746, 0.00210492, 0.00231838, 0.00282459, 0.00363044, 0.00481897, 0.00662249, 0.00933959, 0.0125801, 0.017797, 0.0219193};
  Double_t v2_syst_low_error[N] = {0.000762082, 0.00068486, 0.000365329, 0.000634961, 0.000164804, 0.00148524, 0.00258468, 0.000767835, 0.00129096, 0.00192597, 0.00630743, 0.00224027};
  Double_t v2_syst_high_error[N] = {0.000651224, 0.000376137, 0.000356328, 0.00030269, 0.000276107, 0.000745533, 0.00131316, 0.0013338, 0.00243509, 0.000986827, 0.00375222, 0.00403218};
  Double_t v2_syst_global_error[N] = {0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031, 0.000806031};
  TGraphAsymmErrors *gr1 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_stat_error, v2_stat_error);
  TGraphAsymmErrors *gr2 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_low_error, v2_syst_high_error);
  TGraphAsymmErrors *gr3 = new TGraphAsymmErrors(N, pt_bin_center, v2_values, pt_bin_error, pt_bin_error, v2_syst_global_error, v2_syst_global_error);

  gr3->SetMarkerStyle(29);
  gr3->SetMarkerSize(2.2);
  gr2->SetFillColor(1);
  gr2->SetFillStyle(3001);
  gr3->SetFillColor(4);
  gr3->SetFillStyle(3002);

  vect.push_back(gr1);
  vect.push_back(gr2);
  vect.push_back(gr3);

  return vect;
}
//--------------------------------------------------------------------------------------------------------------

void DrawModel()
{
  TLatex ltitle;
  TLegendEntry *header;
  TLine line;
  line.SetLineStyle(2);
  line.SetLineWidth(2);
  TFile *styleFile = new TFile("~/Documents/WorkLocal/MPD/RootFiles/TDR/my_style.root", "read");
  TFile *modelFileUrQMD7GeV = new TFile("~/modelQA_UrQMD_7.7GeV_1M_hist.root", "read");
  TFile *modelFileLAQGSM11GeV = new TFile("~/laqgsm_hist.root", "read");
  TFile *modelFilePHSD11GeV = new TFile("~/modelQA_PHSD_11GeV_5M_hist.root","read");

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

  TProfile *v1CentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1MidcentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1PeripheralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1CentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1MidcentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1PeripheralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1CentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1MidcentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1PeripheralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1CentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1MidcentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1PeripheralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1CentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1MidcentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1PeripheralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1CentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1MidcentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1PeripheralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2CentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2MidcentralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2PeripheralPtProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2CentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2MidcentralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2PeripheralPtPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2CentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2MidcentralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2PeripheralPtKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2CentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2MidcentralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2PeripheralRapidityProton = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2CentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2MidcentralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2PeripheralRapidityPion = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2CentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2MidcentralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2PeripheralRapidityKaon = (TProfile *)modelFilePHSD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  v1CentralPtProton->SetTitle("PHSD");
  v1MidcentralPtProton->SetTitle("PHSD");
  v1PeripheralPtProton->SetTitle("PHSD");
  v1CentralPtPion->SetTitle("PHSD");
  v1MidcentralPtPion->SetTitle("PHSD");
  v1PeripheralPtPion->SetTitle("PHSD");
  v1CentralPtKaon->SetTitle("PHSD");
  v1MidcentralPtKaon->SetTitle("PHSD");
  v1PeripheralPtKaon->SetTitle("PHSD");

  v1CentralRapidityProton->SetTitle("PHSD");
  v1MidcentralRapidityProton->SetTitle("PHSD");
  v1PeripheralRapidityProton->SetTitle("PHSD");
  v1CentralRapidityPion->SetTitle("PHSD");
  v1MidcentralRapidityPion->SetTitle("PHSD");
  v1PeripheralRapidityPion->SetTitle("PHSD");
  v1CentralRapidityKaon->SetTitle("PHSD");
  v1MidcentralRapidityKaon->SetTitle("PHSD");
  v1PeripheralRapidityKaon->SetTitle("PHSD");

  v2CentralPtProton->SetTitle("PHSD");
  v2MidcentralPtProton->SetTitle("PHSD");
  v2PeripheralPtProton->SetTitle("PHSD");
  v2CentralPtPion->SetTitle("PHSD");
  v2MidcentralPtPion->SetTitle("PHSD");
  v2PeripheralPtPion->SetTitle("PHSD");
  v2CentralPtKaon->SetTitle("PHSD");
  v2MidcentralPtKaon->SetTitle("PHSD");
  v2PeripheralPtKaon->SetTitle("PHSD");

  std::vector<TGraphAsymmErrors *> grv1CentralProton7GeV = GetSTARv1CentralProton7GeV();
  std::vector<TGraphAsymmErrors *> grv1MidcentralProton7GeV = GetSTARv1MidcentralProton7GeV();
  std::vector<TGraphAsymmErrors *> grv1PeripheralProton7GeV = GetSTARv1PeripheralProton7GeV();
  std::vector<TGraphAsymmErrors *> grv1CentralProton11GeV = GetSTARv1CentralProton11GeV();
  std::vector<TGraphAsymmErrors *> grv1MidcentralProton11GeV = GetSTARv1MidcentralProton11GeV();
  std::vector<TGraphAsymmErrors *> grv1PeripheralProton11GeV = GetSTARv1PeripheralProton11GeV();

  std::vector<TGraphAsymmErrors *> grv1CentralPion7GeV = GetSTARv1CentralPion7GeV();
  std::vector<TGraphAsymmErrors *> grv1MidcentralPion7GeV = GetSTARv1MidcentralPion7GeV();
  std::vector<TGraphAsymmErrors *> grv1PeripheralPion7GeV = GetSTARv1PeripheralPion7GeV();
  std::vector<TGraphAsymmErrors *> grv1CentralPion11GeV = GetSTARv1CentralPion11GeV();
  std::vector<TGraphAsymmErrors *> grv1MidcentralPion11GeV = GetSTARv1MidcentralPion11GeV();
  std::vector<TGraphAsymmErrors *> grv1PeripheralPion11GeV = GetSTARv1PeripheralPion11GeV();

  std::vector<TGraphAsymmErrors *> grv2CentralProton7GeV = GetSTARv2CentralProton7GeV();
  std::vector<TGraphAsymmErrors *> grv2MidcentralProton7GeV = GetSTARv2MidcentralProton7GeV();
  std::vector<TGraphAsymmErrors *> grv2PeripheralProton7GeV = GetSTARv2PeripheralProton7GeV();
  std::vector<TGraphAsymmErrors *> grv2CentralProton11GeV = GetSTARv2CentralProton11GeV();
  std::vector<TGraphAsymmErrors *> grv2MidcentralProton11GeV = GetSTARv2MidcentralProton11GeV();
  std::vector<TGraphAsymmErrors *> grv2PeripheralProton11GeV = GetSTARv2PeripheralProton11GeV();

  grv1CentralProton7GeV.at(0)->SetTitle("STAR BES-I");
  grv1MidcentralProton7GeV.at(0)->SetTitle("STAR BES-I");
  grv1PeripheralProton7GeV.at(0)->SetTitle("STAR BES-I");
  grv1CentralProton11GeV.at(0)->SetTitle("STAR BES-I");
  grv1MidcentralProton11GeV.at(0)->SetTitle("STAR BES-I");
  grv1PeripheralProton11GeV.at(0)->SetTitle("STAR BES-I");
  grv1CentralPion7GeV.at(0)->SetTitle("STAR BES-I");
  grv1MidcentralPion7GeV.at(0)->SetTitle("STAR BES-I");
  grv1PeripheralPion7GeV.at(0)->SetTitle("STAR BES-I");
  grv1CentralPion11GeV.at(0)->SetTitle("STAR BES-I");
  grv1MidcentralPion11GeV.at(0)->SetTitle("STAR BES-I");
  grv1PeripheralPion11GeV.at(0)->SetTitle("STAR BES-I");

  grv2CentralProton7GeV.at(2)->SetTitle("STAR BES-I");
  grv2MidcentralProton7GeV.at(2)->SetTitle("STAR BES-I");
  grv2PeripheralProton7GeV.at(2)->SetTitle("STAR BES-I");
  grv2CentralProton11GeV.at(2)->SetTitle("STAR BES-I");
  grv2MidcentralProton11GeV.at(2)->SetTitle("STAR BES-I");
  grv2PeripheralProton11GeV.at(2)->SetTitle("STAR BES-I");


  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1CentralRapidityProton11GeV = new TCanvas("canv_v1CentralRapidityProton11GeV", "canv_v1CentralRapidityProton11GeV", 700, 500);
  canv_v1CentralRapidityProton11GeV->cd();

  v1CentralRapidityProton->GetYaxis()->SetRangeUser(-0.05, 0.05);
  v1CentralRapidityProton->SetLineColor(2);
  v1CentralRapidityProton->SetMarkerColor(2);
  v1CentralRapidityProton->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons");
  legend.at(0)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(0)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(0)->AddEntry(v1CentralRapidityProton, v1CentralRapidityProton->GetTitle(), "p");
  legend.at(0)->AddEntry(grv1CentralProton11GeV.at(0), grv1CentralProton11GeV.at(0)->GetTitle(), "p");
  v1CentralRapidityProton->Draw();
  legend.at(0)->Draw();
  v1CentralRapidityProton->Draw("same");
  grv1CentralProton11GeV.at(0)->Draw("P");
  line.DrawLine(v1CentralRapidityProton->GetXaxis()->GetXmin(),0.,v1CentralRapidityProton->GetXaxis()->GetXmax(),0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1MidcentralRapidityProton11GeV = new TCanvas("canv_v1MidcentralRapidityProton11GeV", "canv_v1MidcentralRapidityProton11GeV", 700, 500);
  canv_v1MidcentralRapidityProton11GeV->cd();

  v1MidcentralRapidityProton->GetYaxis()->SetRangeUser(-0.05, 0.05);
  v1MidcentralRapidityProton->SetLineColor(2);
  v1MidcentralRapidityProton->SetMarkerColor(2);
  v1MidcentralRapidityProton->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons");
  legend.at(1)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Protons", "C");
  header = (TLegendEntry *)legend.at(1)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(1)->AddEntry(v1MidcentralRapidityProton, v1MidcentralRapidityProton->GetTitle(), "p");
  legend.at(1)->AddEntry(grv1MidcentralProton11GeV.at(0), grv1MidcentralProton11GeV.at(0)->GetTitle(), "p");
  v1MidcentralRapidityProton->Draw();
  legend.at(1)->Draw();
  v1MidcentralRapidityProton->Draw("same");
  grv1MidcentralProton11GeV.at(0)->Draw("P");
  line.DrawLine(v1MidcentralRapidityProton->GetXaxis()->GetXmin(),0.,v1MidcentralRapidityProton->GetXaxis()->GetXmax(),0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1PeripheralRapidityProton11GeV = new TCanvas("canv_v1PeripheralRapidityProton11GeV", "canv_v1PeripheralRapidityProton11GeV", 700, 500);
  canv_v1PeripheralRapidityProton11GeV->cd();

  v1PeripheralRapidityProton->GetYaxis()->SetRangeUser(-0.09, 0.09);
  v1PeripheralRapidityProton->SetLineColor(2);
  v1PeripheralRapidityProton->SetMarkerColor(2);
  v1PeripheralRapidityProton->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons");
  legend.at(2)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Protons", "C");
  header = (TLegendEntry *)legend.at(2)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(2)->AddEntry(v1PeripheralRapidityProton, v1PeripheralRapidityProton->GetTitle(), "p");
  legend.at(2)->AddEntry(grv1PeripheralProton11GeV.at(0), grv1PeripheralProton11GeV.at(0)->GetTitle(), "p");
  v1PeripheralRapidityProton->Draw();
  legend.at(2)->Draw();
  v1PeripheralRapidityProton->Draw("same");
  grv1PeripheralProton11GeV.at(0)->Draw("P");
  line.DrawLine(v1PeripheralRapidityProton->GetXaxis()->GetXmin(),0.,v1PeripheralRapidityProton->GetXaxis()->GetXmax(),0.);


//--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1CentralRapidityPion11GeV = new TCanvas("canv_v1CentralRapidityPion11GeV", "canv_v1CentralRapidityPion11GeV", 700, 500);
  canv_v1CentralRapidityPion11GeV->cd();

  v1CentralRapidityPion->GetYaxis()->SetRangeUser(-0.045, 0.045);
  v1CentralRapidityPion->SetLineColor(2);
  v1CentralRapidityPion->SetMarkerColor(2);
  v1CentralRapidityPion->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Pions");
  legend.at(3)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(3)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(3)->AddEntry(v1CentralRapidityPion, v1CentralRapidityPion->GetTitle(), "p");
  legend.at(3)->AddEntry(grv1CentralPion11GeV.at(0), grv1CentralPion11GeV.at(0)->GetTitle(), "p");
  v1CentralRapidityPion->Draw();
  legend.at(3)->Draw();
  v1CentralRapidityPion->Draw("same");
  grv1CentralPion11GeV.at(0)->Draw("P");
  line.DrawLine(v1CentralRapidityPion->GetXaxis()->GetXmin(),0.,v1CentralRapidityPion->GetXaxis()->GetXmax(),0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1MidcentralRapidityPion11GeV = new TCanvas("canv_v1MidcentralRapidityPion11GeV", "canv_v1MidcentralRapidityPion11GeV", 700, 500);
  canv_v1MidcentralRapidityPion11GeV->cd();

  v1MidcentralRapidityPion->GetYaxis()->SetRangeUser(-0.08, 0.08);
  v1MidcentralRapidityPion->SetLineColor(2);
  v1MidcentralRapidityPion->SetMarkerColor(2);
  v1MidcentralRapidityPion->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Pions");
  legend.at(4)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Pions", "C");
  header = (TLegendEntry *)legend.at(4)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(4)->AddEntry(v1MidcentralRapidityPion, v1MidcentralRapidityPion->GetTitle(), "p");
  legend.at(4)->AddEntry(grv1MidcentralPion11GeV.at(0), grv1MidcentralPion11GeV.at(0)->GetTitle(), "p");
  v1MidcentralRapidityPion->Draw();
  legend.at(4)->Draw();
  v1MidcentralRapidityPion->Draw("same");
  grv1MidcentralPion11GeV.at(0)->Draw("P");
  line.DrawLine(v1MidcentralRapidityPion->GetXaxis()->GetXmin(),0.,v1MidcentralRapidityPion->GetXaxis()->GetXmax(),0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1PeripheralRapidityPion11GeV = new TCanvas("canv_v1PeripheralRapidityPion11GeV", "canv_v1PeripheralRapidityPion11GeV", 700, 500);
  canv_v1PeripheralRapidityPion11GeV->cd();

  v1PeripheralRapidityPion->GetYaxis()->SetRangeUser(-0.12, 0.12);
  v1PeripheralRapidityPion->SetLineColor(2);
  v1PeripheralRapidityPion->SetMarkerColor(2);
  v1PeripheralRapidityPion->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Pions");
  legend.at(5)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Pions", "C");
  header = (TLegendEntry *)legend.at(5)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(5)->AddEntry(v1PeripheralRapidityPion, v1PeripheralRapidityPion->GetTitle(), "p");
  legend.at(5)->AddEntry(grv1PeripheralPion11GeV.at(0), grv1PeripheralPion11GeV.at(0)->GetTitle(), "p");
  v1PeripheralRapidityPion->Draw();
  legend.at(5)->Draw();
  v1PeripheralRapidityPion->Draw("same");
  grv1PeripheralPion11GeV.at(0)->Draw("P");
  line.DrawLine(v1PeripheralRapidityPion->GetXaxis()->GetXmin(),0.,v1PeripheralRapidityProton->GetXaxis()->GetXmax(),0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v2CentralPtProton11GeV = new TCanvas("canv_v2CentralPtProton11GeV", "canv_v2CentralPtProton11GeV", 700, 500);
  canv_v2CentralPtProton11GeV->cd();

  v2CentralPtProton->GetYaxis()->SetRangeUser(-0.049, 0.08);
  v2CentralPtProton->SetLineColor(2);
  v2CentralPtProton->SetMarkerColor(2);
  v2CentralPtProton->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons");
  legend.at(6)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(6)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(6)->AddEntry(v2CentralPtProton, v2CentralPtProton->GetTitle(), "p");
  legend.at(6)->AddEntry(grv2CentralProton11GeV.at(2), grv2CentralProton11GeV.at(2)->GetTitle(), "p");
  v2CentralPtProton->Draw();
  legend.at(6)->Draw();
  v2CentralPtProton->Draw("same");
  grv2CentralProton11GeV.at(0)->Draw("P");
  grv2CentralProton11GeV.at(1)->Draw("P2");
  grv2CentralProton11GeV.at(2)->Draw("P3");


  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v2MidcentralPtProton11GeV = new TCanvas("canv_v2MidcentralPtProton11GeV", "canv_v2MidcentralPtProton11GeV", 700, 500);
  canv_v2MidcentralPtProton11GeV->cd();

  v2MidcentralPtProton->GetYaxis()->SetRangeUser(-0.025, 0.169);
  v2MidcentralPtProton->SetLineColor(2);
  v2MidcentralPtProton->SetMarkerColor(2);
  v2MidcentralPtProton->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons");
  legend.at(7)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Protons", "C");
  header = (TLegendEntry *)legend.at(7)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(7)->AddEntry(v2MidcentralPtProton, v2MidcentralPtProton->GetTitle(), "p");
  legend.at(7)->AddEntry(grv2MidcentralProton11GeV.at(2), grv2MidcentralProton11GeV.at(2)->GetTitle(), "p");
  v2MidcentralPtProton->Draw();
  legend.at(7)->Draw();
  v2MidcentralPtProton->Draw("same");
  grv2MidcentralProton11GeV.at(0)->Draw("P");
  grv2MidcentralProton11GeV.at(1)->Draw("P2");
  grv2MidcentralProton11GeV.at(2)->Draw("P3");


  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v2PeripheralPtProton11GeV = new TCanvas("canv_v2PeripheralPtProton11GeV", "canv_v2PeripheralPtProton11GeV", 700, 500);
  canv_v2PeripheralPtProton11GeV->cd();

  v2PeripheralPtProton->GetYaxis()->SetRangeUser(-0.017, 0.25);
  v2PeripheralPtProton->SetLineColor(2);
  v2PeripheralPtProton->SetMarkerColor(2);
  v2PeripheralPtProton->SetMarkerStyle(20);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<3.4 fm (0-10%) Protons");
  legend.at(8)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Protons", "C");
  header = (TLegendEntry *)legend.at(8)->GetListOfPrimitives()->First();
  header->SetTextSize(.04);
  legend.at(8)->AddEntry(v2PeripheralPtProton, v2PeripheralPtProton->GetTitle(), "p");
  legend.at(8)->AddEntry(grv2PeripheralProton11GeV.at(2), grv2PeripheralProton11GeV.at(2)->GetTitle(), "p");
  v2PeripheralPtProton->Draw();
  legend.at(8)->Draw();
  v2PeripheralPtProton->Draw("same");
  grv2PeripheralProton11GeV.at(0)->Draw("P");
  grv2PeripheralProton11GeV.at(1)->Draw("P2");
  grv2PeripheralProton11GeV.at(2)->Draw("P3");




  canv_v1CentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityProton11GeV.pdf");
  canv_v1CentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityProton11GeV.png");
  canv_v1CentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityProton11GeV.C");
  canv_v1CentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityProton11GeV.eps");

  canv_v1MidcentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityProton11GeV.pdf");
  canv_v1MidcentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityProton11GeV.png");
  canv_v1MidcentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityProton11GeV.C");
  canv_v1MidcentralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityProton11GeV.eps");

  canv_v1PeripheralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityProton11GeV.pdf");
  canv_v1PeripheralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityProton11GeV.png");
  canv_v1PeripheralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityProton11GeV.C");
  canv_v1PeripheralRapidityProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityProton11GeV.eps");

  canv_v1CentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityPion11GeV.pdf");
  canv_v1CentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityPion11GeV.png");
  canv_v1CentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityPion11GeV.C");
  canv_v1CentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1CentralRapidityPion11GeV.eps");

  canv_v1MidcentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityPion11GeV.pdf");
  canv_v1MidcentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityPion11GeV.png");
  canv_v1MidcentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityPion11GeV.C");
  canv_v1MidcentralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1MidcentralRapidityPion11GeV.eps");

  canv_v1PeripheralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityPion11GeV.pdf");
  canv_v1PeripheralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityPion11GeV.png");
  canv_v1PeripheralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityPion11GeV.C");
  canv_v1PeripheralRapidityPion11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v1PeripheralRapidityPion11GeV.eps");

  canv_v2CentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2CentralPtProton11GeV.pdf");
  canv_v2CentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2CentralPtProton11GeV.png");
  canv_v2CentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2CentralPtProton11GeV.C");
  canv_v2CentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2CentralPtProton11GeV.eps");

  canv_v2MidcentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2MidcentralPtProton11GeV.pdf");
  canv_v2MidcentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2MidcentralPtProton11GeV.png");
  canv_v2MidcentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2MidcentralPtProton11GeV.C");
  canv_v2MidcentralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2MidcentralPtProton11GeV.eps");

  canv_v2PeripheralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2PeripheralPtProton11GeV.pdf");
  canv_v2PeripheralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2PeripheralPtProton11GeV.png");
  canv_v2PeripheralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2PeripheralPtProton11GeV.C");
  canv_v2PeripheralPtProton11GeV -> SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlow/v2PeripheralPtProton11GeV.eps");
}