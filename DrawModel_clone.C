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

  // ---------------- Particle species: Pion ----------------
  std::vector<TGraphAsymmErrors *> GetSTARv2CentralPion7GeV()
  {
    std::vector<TGraphAsymmErrors *> vect;
    const Int_t N = 4;
    const Double_t pt_bin = 0.02;
    Double_t pt_bin_center[N] = {0.375,0.735,1.125,1.545};
    Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin};
    Double_t v2_values[N] = {0.0154442,0.0269776,0.0283281,0.037249};
    Double_t v2_stat_error[N] = {0.000900857,0.00169369,0.00371201,0.00835521};
    Double_t v2_syst_low_error[N] = {9.63062e-05,1.31224e-05,6.64417e-06,0.000158885};
    Double_t v2_syst_high_error[N] = {4.81092e-05,2.62369e-05,3.74047e-06,9.60868e-05};
    Double_t v2_syst_global_error[N] = {0.,0.,0.,0.};
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
  // ---------------- Particle species: Pion ----------------
  std::vector<TGraphAsymmErrors *> GetSTARv2CentralPion11GeV()
  {
    std::vector<TGraphAsymmErrors *> vect;
    const Int_t N = 8;
    const Double_t pt_bin = 0.02;
    Double_t pt_bin_center[N] = {0.285,0.495,0.675,0.885,1.155,1.545,1.935,2.355};
    Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
    Double_t v2_values[N] = {0.0123074,0.0221415,0.0293689,0.0332695,0.0383741,0.0452447,0.0500749,0.0426986};
    Double_t v2_stat_error[N] = {0.000444405,0.000549625,0.000766495,0.00110815,0.00134295,0.00288218,0.00638391,0.013107};
    Double_t v2_syst_low_error[N] = {9.03499e-11,1.29112e-05,0.00056083,3.39057e-07,4.21356e-06,0.000503515,0.000451271,0.00492305};
    Double_t v2_syst_high_error[N] = {1.52994e-10,6.62106e-06,0.000276685,3.76681e-07,8.3909e-06,0.000253548,0.000369251,0.00249095};
    Double_t v2_syst_global_error[N] = {0.,0.,0.,0.,0.,0.,0.,0.};
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
  // ---------------- Particle species: Pion ----------------
  std::vector<TGraphAsymmErrors *> GetSTARv2MidcentralPion7GeV()
  {
    std::vector<TGraphAsymmErrors *> vect;
    const Int_t N = 7;
    const Double_t pt_bin = 0.02;
    Double_t pt_bin_center[N] = {0.285,0.495,0.675,0.885,1.155,1.545,1.935};
    Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
    Double_t v2_values[N] = {0.0225062,0.0415791,0.0560643,0.0678896,0.0819491,0.100776,0.120508};
    Double_t v2_stat_error[N] = {0.000479722,0.000616763,0.000883004,0.00131197,0.00165343,0.00380281,0.00915605};
    Double_t v2_syst_low_error[N] = {3.61284e-10,1.42286e-05,0.000107432,2.12591e-06,1.33104e-05,0.000353813,0.00177874};
    Double_t v2_syst_high_error[N] = {4.7195e-11,2.84574e-05,0.000217747,4.25174e-06,6.65502e-06,0.000186354,0.00513822};
    Double_t v2_syst_global_error[N] = {0.,0.,0.,0.,0.,0.};
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
  // ---------------- Particle species: Pion ----------------
  std::vector<TGraphAsymmErrors *> GetSTARv2MidcentralPion11GeV()
  {
    std::vector<TGraphAsymmErrors *> vect;
    const Int_t N = 10;
    const Double_t pt_bin = 0.02;
    Double_t pt_bin_center[N] = {0.285,0.495,0.675,0.885,1.065,1.275,1.485,1.665,1.935,2.355};
    Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
    Double_t v2_values[N] = {0.0234571,0.0439218,0.0621634,0.0784782,0.0918088,0.103063,0.110708,0.120155,0.125528,0.127156};
    Double_t v2_stat_error[N] = {0.000223011,0.000280047,0.000393929,0.00057453,0.000847508,0.00124706,0.0018493,0.0027647,0.00341252,0.006978};
    Double_t v2_syst_low_error[N] = {5.46478e-11,1.72768e-05,9.27984e-05,7.15537e-07,0.00017347,3.2058e-06,1.16634e-05,0.000168384,0.000280535,0.000453225};
    Double_t v2_syst_high_error[N] = {2.07846e-11,55558e-05,0.000180783,1.43107e-06,8.81597e-05,6.39427e-06,6.31075e-06,7.76824e-05,0.000504474,0.000479085};
    Double_t v2_syst_global_error[N] = {0.,0.,0.,0.,0.,0.,0.,0.,0.,0.};
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
  // ---------------- Particle species: Pion ----------------
  std::vector<TGraphAsymmErrors *> GetSTARv2PeripheralPion7GeV()
  {
    std::vector<TGraphAsymmErrors *> vect;
    const Int_t N = 6;
    const Double_t pt_bin = 0.02;
    Double_t pt_bin_center[N] = {0.285,0.495,0.675,0.885,1.125,1.545};
    Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
    Double_t v2_values[N] = {0.0224911,0.0479004,0.0653419,0.0906055,0.104877,0.142921};
    Double_t v2_stat_error[N] = {0.00184114,0.00242319,0.00353726,0.00542294,0.00715068,0.0176374};
    Double_t v2_syst_low_error[N] = {5.70124e-10,8.73346e-05,0.00100347,0.000464861,2.00993e-06,0.000307695};
    Double_t v2_syst_high_error[N] = {5.57698e-10,0.000174646,0.000504737,0.000823932,1.34749e-06,0.000213692};
    Double_t v2_syst_global_error[N] = {0.,0.,0.,0.,0.,0.};
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
  // ---------------- Particle species: Pion ----------------
  std::vector<TGraphAsymmErrors *> GetSTARv2PeripheralPion11GeV()
  {
    std::vector<TGraphAsymmErrors *> vect;
    const Int_t N = 8;
    const Double_t pt_bin = 0.02;
    Double_t pt_bin_center[N] = {0.285,0.495,0.675,0.885,1.065,1.275,1.545,1.935};
    Double_t pt_bin_error[N] = {pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin, pt_bin};
    Double_t v2_values[N] = {0.0254122,0.0525961,0.0706521,0.0983145,0.10694,0.135477,0.139412,0.196748};
    Double_t v2_stat_error[N] = {0.000811388,0.00104739,0.00150464,0.00225616,0.00341003,0.00514678,0.00651868,0.0149829};
    Double_t v2_syst_low_error[N] = {1.70562e-09,4.04072e-05,0.000278691,6.28011e-06,0.000959699,0.000354623,0.00159947,0.000306716};
    Double_t v2_syst_high_error[N] = {3.64173e-10,8.08082e-05,0.000553968,1.23332e-05,0.00186381,0.000705247,0.000936076,0.000260424};
    Double_t v2_syst_global_error[N] = {0.,0.,0.,0.,0.,0.,0.,0.};
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

void DrawModel_clone()
{
  TLatex ltitle;
  TLegendEntry *header;
  TLine line;
  line.SetLineStyle(2);
  line.SetLineWidth(2);
  TFile *styleFile = new TFile("~/Documents/WorkLocal/MPD/RootFiles/TDR/my_style.root", "read");
  TFile *modelFileURQMD7GeV = new TFile("~/Documents/Dataset/modelQA_UrQMD_7.7GeV_1M_hist.root", "read");
  TFile *modelFileURQMD11GeV = new TFile("~/Documents/Dataset/modelQA_UrQMD_11GeV_1M_hist.root", "read");
  TFile *modelFileLAQGSM11GeV = new TFile("~/Documents/Dataset/modelQA_LAQGSM_11GeV_100k_hist.root", "read");
  TFile *modelFileLAQGSM7GeV = new TFile("~/Documents/Dataset/modelQA_LAQGSM_7GeV_100k_hist.root", "read");

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

  // ----------------------------------------------------------------------------------------------------------------------------

  TProfile *v1URQMDCentralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1URQMDMidcentralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1URQMDPeripheralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1URQMDCentralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1URQMDMidcentralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1URQMDPeripheralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1URQMDCentralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1URQMDMidcentralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1URQMDPeripheralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1URQMDCentralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1URQMDMidcentralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1URQMDPeripheralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1URQMDCentralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1URQMDMidcentralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1URQMDPeripheralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1URQMDCentralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1URQMDMidcentralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1URQMDPeripheralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2URQMDCentralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2URQMDMidcentralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2URQMDPeripheralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2URQMDCentralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2URQMDMidcentralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2URQMDPeripheralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2URQMDCentralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2URQMDMidcentralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2URQMDPeripheralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2URQMDCentralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2URQMDMidcentralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2URQMDPeripheralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2URQMDCentralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2URQMDMidcentralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2URQMDPeripheralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2URQMDCentralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2URQMDMidcentralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2URQMDPeripheralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3URQMDCentralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3URQMDMidcentralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3URQMDPeripheralPtProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3URQMDCentralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3URQMDMidcentralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3URQMDPeripheralPtPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3URQMDCentralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3URQMDMidcentralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3URQMDPeripheralPtKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3URQMDCentralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3URQMDMidcentralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3URQMDPeripheralRapidityProton = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3URQMDCentralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3URQMDMidcentralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3URQMDPeripheralRapidityPion = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3URQMDCentralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3URQMDMidcentralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3URQMDPeripheralRapidityKaon = (TProfile *)modelFileURQMD11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  TH1D *hURQMDKinematicsAllEtaProton = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllEtaProton");
  TH1D *hURQMDKinematicsAllEtaPion = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllEtaPion");
  TH1D *hURQMDKinematicsAllEtaKaon = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllEtaKaon");
  TH1D *hURQMDKinematicsAllRapidityProton = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllRapidityProton");
  TH1D *hURQMDKinematicsAllRapidityPion = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllRapidityPion");
  TH1D *hURQMDKinematicsAllRapidityKaon = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllRapidityKaon");
  TH1D *hURQMDKinematicsAllPtProton = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllPtProton");
  TH1D *hURQMDKinematicsAllPtPion = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllPtPion");
  TH1D *hURQMDKinematicsAllPtKaon = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicsAllPtKaon");

  TH1D *hURQMDCutsAllEtaProton = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllEtaProton");
  TH1D *hURQMDCutsAllEtaPion = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllEtaPion");
  TH1D *hURQMDCutsAllEtaKaon = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllEtaKaon");
  TH1D *hURQMDCutsAllRapidityProton = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllRapidityProton");
  TH1D *hURQMDCutsAllRapidityPion = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllRapidityPion");
  TH1D *hURQMDCutsAllRapidityKaon = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllRapidityKaon");
  TH1D *hURQMDCutsAllPtProton = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllPtProton");
  TH1D *hURQMDCutsAllPtPion = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllPtPion");
  TH1D *hURQMDCutsAllPtKaon = (TH1D *)modelFileURQMD11GeV->Get("Cuts/All/hCutsAllPtKaon");

  TH2D *hURQMDKinematicsAllBMULT = (TH2D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicAllBMULT");
  TH2D *hURQMDKinematicsAllEMULT = (TH2D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicAllEMULT");
  TH2D *hURQMDKinematicsAllBE = (TH2D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicAllBE");
  TH1D *hURQMDKinematicsAllB = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/All/hKinematicAllB");
  TH1D *hURQMDKinematicsCentralB = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/Central/hKinematicCentralB");
  TH1D *hURQMDKinematicsMidcentralB = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/Midcentral/hKinematicMidcentralB");
  TH1D *hURQMDKinematicsPeripheralB = (TH1D *)modelFileURQMD11GeV->Get("Kinematics/Peripheral/hKinematicPeripheralB");

  // ----------------------------------------------------------------------------------------------------------------------------

  TProfile *v1URQMDCentralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1URQMDMidcentralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1URQMDPeripheralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1URQMDCentralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1URQMDMidcentralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1URQMDPeripheralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1URQMDCentralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1URQMDMidcentralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1URQMDPeripheralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1URQMDCentralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1URQMDMidcentralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1URQMDPeripheralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1URQMDCentralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1URQMDMidcentralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1URQMDPeripheralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1URQMDCentralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1URQMDMidcentralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1URQMDPeripheralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2URQMDCentralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2URQMDMidcentralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2URQMDPeripheralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2URQMDCentralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2URQMDMidcentralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2URQMDPeripheralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2URQMDCentralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2URQMDMidcentralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2URQMDPeripheralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2URQMDCentralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2URQMDMidcentralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2URQMDPeripheralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2URQMDCentralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2URQMDMidcentralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2URQMDPeripheralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2URQMDCentralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2URQMDMidcentralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2URQMDPeripheralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3URQMDCentralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3URQMDMidcentralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3URQMDPeripheralPtProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3URQMDCentralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3URQMDMidcentralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3URQMDPeripheralPtPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3URQMDCentralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3URQMDMidcentralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3URQMDPeripheralPtKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3URQMDCentralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3URQMDMidcentralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3URQMDPeripheralRapidityProton7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3URQMDCentralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3URQMDMidcentralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3URQMDPeripheralRapidityPion7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3URQMDCentralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3URQMDMidcentralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3URQMDPeripheralRapidityKaon7GeV = (TProfile *)modelFileURQMD7GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  TH1D *hURQMDKinematicsAllEtaProton7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllEtaProton");
  TH1D *hURQMDKinematicsAllEtaPion7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllEtaPion");
  TH1D *hURQMDKinematicsAllEtaKaon7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllEtaKaon");
  TH1D *hURQMDKinematicsAllRapidityProton7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllRapidityProton");
  TH1D *hURQMDKinematicsAllRapidityPion7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllRapidityPion");
  TH1D *hURQMDKinematicsAllRapidityKaon7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllRapidityKaon");
  TH1D *hURQMDKinematicsAllPtProton7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllPtProton");
  TH1D *hURQMDKinematicsAllPtPion7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllPtPion");
  TH1D *hURQMDKinematicsAllPtKaon7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicsAllPtKaon");

  TH1D *hURQMDCutsAllEtaProton7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllEtaProton");
  TH1D *hURQMDCutsAllEtaPion7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllEtaPion");
  TH1D *hURQMDCutsAllEtaKaon7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllEtaKaon");
  TH1D *hURQMDCutsAllRapidityProton7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllRapidityProton");
  TH1D *hURQMDCutsAllRapidityPion7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllRapidityPion");
  TH1D *hURQMDCutsAllRapidityKaon7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllRapidityKaon");
  TH1D *hURQMDCutsAllPtProton7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllPtProton");
  TH1D *hURQMDCutsAllPtPion7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllPtPion");
  TH1D *hURQMDCutsAllPtKaon7GeV = (TH1D *)modelFileURQMD7GeV->Get("Cuts/All/hCutsAllPtKaon");

  TH2D *hURQMDKinematicsAllBMULT7GeV = (TH2D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicAllBMULT");
  TH2D *hURQMDKinematicsAllEMULT7GeV = (TH2D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicAllEMULT");
  TH2D *hURQMDKinematicsAllBE7GeV = (TH2D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicAllBE");
  TH1D *hURQMDKinematicsAllB7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/All/hKinematicAllB");
  TH1D *hURQMDKinematicsCentralB7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/Central/hKinematicCentralB");
  TH1D *hURQMDKinematicsMidcentralB7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/Midcentral/hKinematicMidcentralB");
  TH1D *hURQMDKinematicsPeripheralB7GeV = (TH1D *)modelFileURQMD7GeV->Get("Kinematics/Peripheral/hKinematicPeripheralB");

  // ----------------------------------------------------------------------------------------------------------------------------

  TProfile *v1LAQGSMCentralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1LAQGSMMidcentralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1LAQGSMPeripheralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1LAQGSMCentralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1LAQGSMMidcentralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1LAQGSMPeripheralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1LAQGSMCentralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1LAQGSMMidcentralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1LAQGSMPeripheralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1LAQGSMCentralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1LAQGSMMidcentralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1LAQGSMPeripheralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1LAQGSMCentralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1LAQGSMMidcentralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1LAQGSMPeripheralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1LAQGSMCentralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1LAQGSMMidcentralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1LAQGSMPeripheralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2LAQGSMCentralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2LAQGSMMidcentralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2LAQGSMPeripheralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2LAQGSMCentralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2LAQGSMMidcentralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2LAQGSMPeripheralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2LAQGSMCentralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2LAQGSMMidcentralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2LAQGSMPeripheralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2LAQGSMCentralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2LAQGSMMidcentralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2LAQGSMPeripheralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2LAQGSMCentralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2LAQGSMMidcentralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2LAQGSMPeripheralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2LAQGSMCentralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2LAQGSMMidcentralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2LAQGSMPeripheralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3LAQGSMCentralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3LAQGSMMidcentralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3LAQGSMPeripheralPtProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3LAQGSMCentralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3LAQGSMMidcentralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3LAQGSMPeripheralPtPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3LAQGSMCentralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3LAQGSMMidcentralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3LAQGSMPeripheralPtKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3LAQGSMCentralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3LAQGSMMidcentralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3LAQGSMPeripheralRapidityProton = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3LAQGSMCentralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3LAQGSMMidcentralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3LAQGSMPeripheralRapidityPion = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3LAQGSMCentralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3LAQGSMMidcentralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3LAQGSMPeripheralRapidityKaon = (TProfile *)modelFileLAQGSM11GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  TH1D *hLAQGSMKinematicsAllEtaProton = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllEtaProton");
  TH1D *hLAQGSMKinematicsAllEtaPion = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllEtaPion");
  TH1D *hLAQGSMKinematicsAllEtaKaon = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllEtaKaon");
  TH1D *hLAQGSMKinematicsAllRapidityProton = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllRapidityProton");
  TH1D *hLAQGSMKinematicsAllRapidityPion = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllRapidityPion");
  TH1D *hLAQGSMKinematicsAllRapidityKaon = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllRapidityKaon");
  TH1D *hLAQGSMKinematicsAllPtProton = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllPtProton");
  TH1D *hLAQGSMKinematicsAllPtPion = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllPtPion");
  TH1D *hLAQGSMKinematicsAllPtKaon = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicsAllPtKaon");

  TH1D *hLAQGSMCutsAllEtaProton = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllEtaProton");
  TH1D *hLAQGSMCutsAllEtaPion = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllEtaPion");
  TH1D *hLAQGSMCutsAllEtaKaon = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllEtaKaon");
  TH1D *hLAQGSMCutsAllRapidityProton = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllRapidityProton");
  TH1D *hLAQGSMCutsAllRapidityPion = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllRapidityPion");
  TH1D *hLAQGSMCutsAllRapidityKaon = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllRapidityKaon");
  TH1D *hLAQGSMCutsAllPtProton = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllPtProton");
  TH1D *hLAQGSMCutsAllPtPion = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllPtPion");
  TH1D *hLAQGSMCutsAllPtKaon = (TH1D *)modelFileLAQGSM11GeV->Get("Cuts/All/hCutsAllPtKaon");

  TH2D *hLAQGSMKinematicsAllBMULT = (TH2D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicAllBMULT");
  TH2D *hLAQGSMKinematicsAllEMULT = (TH2D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicAllEMULT");
  TH2D *hLAQGSMKinematicsAllBE = (TH2D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicAllBE");
  TH1D *hLAQGSMKinematicsAllB = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/All/hKinematicAllB");
  TH1D *hLAQGSMKinematicsCentralB = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/Central/hKinematicCentralB");
  TH1D *hLAQGSMKinematicsMidcentralB = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/Midcentral/hKinematicMidcentralB");
  TH1D *hLAQGSMKinematicsPeripheralB = (TH1D *)modelFileLAQGSM11GeV->Get("Kinematics/Peripheral/hKinematicPeripheralB");



  // ----------------------------------------------------------------------------------------------------------------------------

  TProfile *v1LAQGSMCentralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv1CentralPtProton");
  TProfile *v1LAQGSMMidcentralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv1MidcentralPtProton");
  TProfile *v1LAQGSMPeripheralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv1PeripheralPtProton");

  TProfile *v1LAQGSMCentralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv1CentralPtPion");
  TProfile *v1LAQGSMMidcentralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv1MidcentralPtPion");
  TProfile *v1LAQGSMPeripheralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv1PeripheralPtPion");

  TProfile *v1LAQGSMCentralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv1CentralPtKaon");
  TProfile *v1LAQGSMMidcentralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv1MidcentralPtKaon");
  TProfile *v1LAQGSMPeripheralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv1PeripheralPtKaon");

  TProfile *v1LAQGSMCentralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv1CentralRapidityProton");
  TProfile *v1LAQGSMMidcentralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv1MidcentralRapidityProton");
  TProfile *v1LAQGSMPeripheralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv1PeripheralRapidityProton");

  TProfile *v1LAQGSMCentralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv1CentralRapidityPion");
  TProfile *v1LAQGSMMidcentralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv1MidcentralRapidityPion");
  TProfile *v1LAQGSMPeripheralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv1PeripheralRapidityPion");

  TProfile *v1LAQGSMCentralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv1CentralRapidityKaon");
  TProfile *v1LAQGSMMidcentralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv1MidcentralRapidityKaon");
  TProfile *v1LAQGSMPeripheralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv1PeripheralRapidityKaon");

  TProfile *v2LAQGSMCentralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv2CentralPtProton");
  TProfile *v2LAQGSMMidcentralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv2MidcentralPtProton");
  TProfile *v2LAQGSMPeripheralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv2PeripheralPtProton");

  TProfile *v2LAQGSMCentralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv2CentralPtPion");
  TProfile *v2LAQGSMMidcentralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv2MidcentralPtPion");
  TProfile *v2LAQGSMPeripheralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv2PeripheralPtPion");

  TProfile *v2LAQGSMCentralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv2CentralPtKaon");
  TProfile *v2LAQGSMMidcentralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv2MidcentralPtKaon");
  TProfile *v2LAQGSMPeripheralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv2PeripheralPtKaon");

  TProfile *v2LAQGSMCentralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv2CentralRapidityProton");
  TProfile *v2LAQGSMMidcentralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv2MidcentralRapidityProton");
  TProfile *v2LAQGSMPeripheralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv2PeripheralRapidityProton");

  TProfile *v2LAQGSMCentralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv2CentralRapidityPion");
  TProfile *v2LAQGSMMidcentralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv2MidcentralRapidityPion");
  TProfile *v2LAQGSMPeripheralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv2PeripheralRapidityPion");

  TProfile *v2LAQGSMCentralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv2CentralRapidityKaon");
  TProfile *v2LAQGSMMidcentralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv2MidcentralRapidityKaon");
  TProfile *v2LAQGSMPeripheralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv2PeripheralRapidityKaon");

  TProfile *v3LAQGSMCentralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv3CentralPtProton");
  TProfile *v3LAQGSMMidcentralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv3MidcentralPtProton");
  TProfile *v3LAQGSMPeripheralPtProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv3PeripheralPtProton");

  TProfile *v3LAQGSMCentralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv3CentralPtPion");
  TProfile *v3LAQGSMMidcentralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv3MidcentralPtPion");
  TProfile *v3LAQGSMPeripheralPtPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv3PeripheralPtPion");

  TProfile *v3LAQGSMCentralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv3CentralPtKaon");
  TProfile *v3LAQGSMMidcentralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv3MidcentralPtKaon");
  TProfile *v3LAQGSMPeripheralPtKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv3PeripheralPtKaon");

  TProfile *v3LAQGSMCentralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv3CentralRapidityProton");
  TProfile *v3LAQGSMMidcentralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv3MidcentralRapidityProton");
  TProfile *v3LAQGSMPeripheralRapidityProton7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv3PeripheralRapidityProton");

  TProfile *v3LAQGSMCentralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv3CentralRapidityPion");
  TProfile *v3LAQGSMMidcentralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv3MidcentralRapidityPion");
  TProfile *v3LAQGSMPeripheralRapidityPion7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv3PeripheralRapidityPion");

  TProfile *v3LAQGSMCentralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Central/hv3CentralRapidityKaon");
  TProfile *v3LAQGSMMidcentralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Midcentral/hv3MidcentralRapidityKaon");
  TProfile *v3LAQGSMPeripheralRapidityKaon7GeV = (TProfile *)modelFileLAQGSM7GeV->Get("Flow/Peripheral/hv3PeripheralRapidityKaon");

  TH1D *hLAQGSMKinematicsAllEtaProton7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllEtaProton");
  TH1D *hLAQGSMKinematicsAllEtaPion7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllEtaPion");
  TH1D *hLAQGSMKinematicsAllEtaKaon7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllEtaKaon");
  TH1D *hLAQGSMKinematicsAllRapidityProton7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllRapidityProton");
  TH1D *hLAQGSMKinematicsAllRapidityPion7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllRapidityPion");
  TH1D *hLAQGSMKinematicsAllRapidityKaon7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllRapidityKaon");
  TH1D *hLAQGSMKinematicsAllPtProton7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllPtProton");
  TH1D *hLAQGSMKinematicsAllPtPion7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllPtPion");
  TH1D *hLAQGSMKinematicsAllPtKaon7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicsAllPtKaon");

  TH1D *hLAQGSMCutsAllEtaProton7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllEtaProton");
  TH1D *hLAQGSMCutsAllEtaPion7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllEtaPion");
  TH1D *hLAQGSMCutsAllEtaKaon7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllEtaKaon");
  TH1D *hLAQGSMCutsAllRapidityProton7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllRapidityProton");
  TH1D *hLAQGSMCutsAllRapidityPion7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllRapidityPion");
  TH1D *hLAQGSMCutsAllRapidityKaon7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllRapidityKaon");
  TH1D *hLAQGSMCutsAllPtProton7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllPtProton");
  TH1D *hLAQGSMCutsAllPtPion7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllPtPion");
  TH1D *hLAQGSMCutsAllPtKaon7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Cuts/All/hCutsAllPtKaon");

  TH2D *hLAQGSMKinematicsAllBMULT7GeV = (TH2D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicAllBMULT");
  TH2D *hLAQGSMKinematicsAllEMULT7GeV = (TH2D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicAllEMULT");
  TH2D *hLAQGSMKinematicsAllBE7GeV = (TH2D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicAllBE");
  TH1D *hLAQGSMKinematicsAllB7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/All/hKinematicAllB");
  TH1D *hLAQGSMKinematicsCentralB7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/Central/hKinematicCentralB");
  TH1D *hLAQGSMKinematicsMidcentralB7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/Midcentral/hKinematicMidcentralB");
  TH1D *hLAQGSMKinematicsPeripheralB7GeV = (TH1D *)modelFileLAQGSM7GeV->Get("Kinematics/Peripheral/hKinematicPeripheralB");

  // ----------------------------------------------------------------------------------------------------------------------------

  v1URQMDCentralPtProton->SetTitle("URQMD");
  v1URQMDMidcentralPtProton->SetTitle("URQMD");
  v1URQMDPeripheralPtProton->SetTitle("URQMD");
  v1URQMDCentralPtPion->SetTitle("URQMD");
  v1URQMDMidcentralPtPion->SetTitle("URQMD");
  v1URQMDPeripheralPtPion->SetTitle("URQMD");
  v1URQMDCentralPtKaon->SetTitle("URQMD");
  v1URQMDMidcentralPtKaon->SetTitle("URQMD");
  v1URQMDPeripheralPtKaon->SetTitle("URQMD");

  v1URQMDCentralRapidityProton->SetTitle("URQMD");
  v1URQMDMidcentralRapidityProton->SetTitle("URQMD");
  v1URQMDPeripheralRapidityProton->SetTitle("URQMD");
  v1URQMDCentralRapidityPion->SetTitle("URQMD");
  v1URQMDMidcentralRapidityPion->SetTitle("URQMD");
  v1URQMDPeripheralRapidityPion->SetTitle("URQMD");
  v1URQMDCentralRapidityKaon->SetTitle("URQMD");
  v1URQMDMidcentralRapidityKaon->SetTitle("URQMD");
  v1URQMDPeripheralRapidityKaon->SetTitle("URQMD");

  v2URQMDCentralPtProton->SetTitle("URQMD");
  v2URQMDMidcentralPtProton->SetTitle("URQMD");
  v2URQMDPeripheralPtProton->SetTitle("URQMD");
  v2URQMDCentralPtPion->SetTitle("URQMD");
  v2URQMDMidcentralPtPion->SetTitle("URQMD");
  v2URQMDPeripheralPtPion->SetTitle("URQMD");
  v2URQMDCentralPtKaon->SetTitle("URQMD");
  v2URQMDMidcentralPtKaon->SetTitle("URQMD");
  v2URQMDPeripheralPtKaon->SetTitle("URQMD");

  v3URQMDCentralPtProton->SetTitle("URQMD");
  v3URQMDMidcentralPtProton->SetTitle("URQMD");
  v3URQMDPeripheralPtProton->SetTitle("URQMD");
  v3URQMDCentralPtPion->SetTitle("URQMD");
  v3URQMDMidcentralPtPion->SetTitle("URQMD");
  v3URQMDPeripheralPtPion->SetTitle("URQMD");
  v3URQMDCentralPtKaon->SetTitle("URQMD");
  v3URQMDMidcentralPtKaon->SetTitle("URQMD");
  v3URQMDPeripheralPtKaon->SetTitle("URQMD");

  v3URQMDCentralRapidityProton->SetTitle("URQMD");
  v3URQMDMidcentralRapidityProton->SetTitle("URQMD");
  v3URQMDPeripheralRapidityProton->SetTitle("URQMD");
  v3URQMDCentralRapidityPion->SetTitle("URQMD");
  v3URQMDMidcentralRapidityPion->SetTitle("URQMD");
  v3URQMDPeripheralRapidityPion->SetTitle("URQMD");
  v3URQMDCentralRapidityKaon->SetTitle("URQMD");
  v3URQMDMidcentralRapidityKaon->SetTitle("URQMD");
  v3URQMDPeripheralRapidityKaon->SetTitle("URQMD");

  v1LAQGSMCentralPtProton->SetTitle("LAQGSM");
  v1LAQGSMMidcentralPtProton->SetTitle("LAQGSM");
  v1LAQGSMPeripheralPtProton->SetTitle("LAQGSM");
  v1LAQGSMCentralPtPion->SetTitle("LAQGSM");
  v1LAQGSMMidcentralPtPion->SetTitle("LAQGSM");
  v1LAQGSMPeripheralPtPion->SetTitle("LAQGSM");
  v1LAQGSMCentralPtKaon->SetTitle("LAQGSM");
  v1LAQGSMMidcentralPtKaon->SetTitle("LAQGSM");
  v1LAQGSMPeripheralPtKaon->SetTitle("LAQGSM");

  v1LAQGSMCentralRapidityProton->SetTitle("LAQGSM");
  v1LAQGSMMidcentralRapidityProton->SetTitle("LAQGSM");
  v1LAQGSMPeripheralRapidityProton->SetTitle("LAQGSM");
  v1LAQGSMCentralRapidityPion->SetTitle("LAQGSM");
  v1LAQGSMMidcentralRapidityPion->SetTitle("LAQGSM");
  v1LAQGSMPeripheralRapidityPion->SetTitle("LAQGSM");
  v1LAQGSMCentralRapidityKaon->SetTitle("LAQGSM");
  v1LAQGSMMidcentralRapidityKaon->SetTitle("LAQGSM");
  v1LAQGSMPeripheralRapidityKaon->SetTitle("LAQGSM");

  v2LAQGSMCentralPtProton->SetTitle("LAQGSM");
  v2LAQGSMMidcentralPtProton->SetTitle("LAQGSM");
  v2LAQGSMPeripheralPtProton->SetTitle("LAQGSM");
  v2LAQGSMCentralPtPion->SetTitle("LAQGSM");
  v2LAQGSMMidcentralPtPion->SetTitle("LAQGSM");
  v2LAQGSMPeripheralPtPion->SetTitle("LAQGSM");
  v2LAQGSMCentralPtKaon->SetTitle("LAQGSM");
  v2LAQGSMMidcentralPtKaon->SetTitle("LAQGSM");
  v2LAQGSMPeripheralPtKaon->SetTitle("LAQGSM");

  v3LAQGSMCentralPtProton->SetTitle("LAQGSM");
  v3LAQGSMMidcentralPtProton->SetTitle("LAQGSM");
  v3LAQGSMPeripheralPtProton->SetTitle("LAQGSM");
  v3LAQGSMCentralPtPion->SetTitle("LAQGSM");
  v3LAQGSMMidcentralPtPion->SetTitle("LAQGSM");
  v3LAQGSMPeripheralPtPion->SetTitle("LAQGSM");
  v3LAQGSMCentralPtKaon->SetTitle("LAQGSM");
  v3LAQGSMMidcentralPtKaon->SetTitle("LAQGSM");
  v3LAQGSMPeripheralPtKaon->SetTitle("LAQGSM");

  v3LAQGSMCentralRapidityProton->SetTitle("LAQGSM");
  v3LAQGSMMidcentralRapidityProton->SetTitle("LAQGSM");
  v3LAQGSMPeripheralRapidityProton->SetTitle("LAQGSM");
  v3LAQGSMCentralRapidityPion->SetTitle("LAQGSM");
  v3LAQGSMMidcentralRapidityPion->SetTitle("LAQGSM");
  v3LAQGSMPeripheralRapidityPion->SetTitle("LAQGSM");
  v3LAQGSMCentralRapidityKaon->SetTitle("LAQGSM");
  v3LAQGSMMidcentralRapidityKaon->SetTitle("LAQGSM");
  v3LAQGSMPeripheralRapidityKaon->SetTitle("LAQGSM");

  hURQMDKinematicsAllPtProton->SetTitle("Before selection");
  hURQMDKinematicsAllEtaProton->SetTitle("Before selection");
  hURQMDKinematicsAllRapidityProton->SetTitle("Before selection");
  hURQMDKinematicsAllPtPion->SetTitle("Before selection");
  hURQMDKinematicsAllEtaPion->SetTitle("Before selection");
  hURQMDKinematicsAllRapidityPion->SetTitle("Before selection");

  hURQMDCutsAllPtProton->SetTitle("After selection");
  hURQMDCutsAllEtaProton->SetTitle("After selection");
  hURQMDCutsAllRapidityProton->SetTitle("After selection");
  hURQMDCutsAllPtPion->SetTitle("After selection");
  hURQMDCutsAllEtaPion->SetTitle("After selection");
  hURQMDCutsAllRapidityPion->SetTitle("After selection");

  hLAQGSMKinematicsAllPtProton->SetTitle("Before selection");
  hLAQGSMKinematicsAllEtaProton->SetTitle("Before selection");
  hLAQGSMKinematicsAllRapidityProton->SetTitle("Before selection");
  hLAQGSMKinematicsAllPtPion->SetTitle("Before selection");
  hLAQGSMKinematicsAllEtaPion->SetTitle("Before selection");
  hLAQGSMKinematicsAllRapidityPion->SetTitle("Before selection");

  hLAQGSMCutsAllPtProton->SetTitle("After selection");
  hLAQGSMCutsAllEtaProton->SetTitle("After selection");
  hLAQGSMCutsAllRapidityProton->SetTitle("After selection");
  hLAQGSMCutsAllPtPion->SetTitle("After selection");
  hLAQGSMCutsAllEtaPion->SetTitle("After selection");
  hLAQGSMCutsAllRapidityPion->SetTitle("After selection");

  v1URQMDCentralPtProton->SetName("v1URQMDCentralPtProton");
  v1URQMDMidcentralPtProton->SetName("v1URQMDMidcentralPtProton");
  v1URQMDPeripheralPtProton->SetName("v1URQMDPeripheralPtProton");
  v1URQMDCentralPtPion->SetName("v1URQMDCentralPtPion");
  v1URQMDMidcentralPtPion->SetName("v1URQMDMidcentralPtPion");
  v1URQMDPeripheralPtPion->SetName("v1URQMDPeripheralPtPion");
  v1URQMDCentralPtKaon->SetName("v1URQMDCentralPtKaon");
  v1URQMDMidcentralPtKaon->SetName("v1URQMDMidcentralPtKaon");
  v1URQMDPeripheralPtKaon->SetName("v1URQMDPeripheralPtKaon");

  v1URQMDCentralRapidityProton->SetName("v1URQMDCentralRapidityProton");
  v1URQMDMidcentralRapidityProton->SetName("v1URQMDMidcentralRapidityProton");
  v1URQMDPeripheralRapidityProton->SetName("v1URQMDPeripheralRapidityProton");
  v1URQMDCentralRapidityPion->SetName("v1URQMDCentralRapidityPion");
  v1URQMDMidcentralRapidityPion->SetName("v1URQMDMidcentralRapidityPion");
  v1URQMDPeripheralRapidityPion->SetName("v1URQMDPeripheralRapidityPion");
  v1URQMDCentralRapidityKaon->SetName("v1URQMDCentralRapidityKaon");
  v1URQMDMidcentralRapidityKaon->SetName("v1URQMDMidcentralRapidityKaon");
  v1URQMDPeripheralRapidityKaon->SetName("v1URQMDPeripheralRapidityKaon");

  v2URQMDCentralPtProton->SetName("v2URQMDCentralPtProton");
  v2URQMDMidcentralPtProton->SetName("v2URQMDMidcentralPtProton");
  v2URQMDPeripheralPtProton->SetName("v2URQMDPeripheralPtProton");
  v2URQMDCentralPtPion->SetName("v2URQMDCentralPtPion");
  v2URQMDMidcentralPtPion->SetName("v2URQMDMidcentralPtPion");
  v2URQMDPeripheralPtPion->SetName("v2URQMDPeripheralPtPion");
  v2URQMDCentralPtKaon->SetName("v2URQMDCentralPtKaon");
  v2URQMDMidcentralPtKaon->SetName("v2URQMDMidcentralPtKaon");
  v2URQMDPeripheralPtKaon->SetName("v2URQMDPeripheralPtKaon");

  v3URQMDCentralPtProton->SetName("v3URQMDCentralPtProton");
  v3URQMDMidcentralPtProton->SetName("v3URQMDMidcentralPtProton");
  v3URQMDPeripheralPtProton->SetName("v3URQMDPeripheralPtProton");
  v3URQMDCentralPtPion->SetName("v3URQMDCentralPtPion");
  v3URQMDMidcentralPtPion->SetName("v3URQMDMidcentralPtPion");
  v3URQMDPeripheralPtPion->SetName("v3URQMDPeripheralPtPion");
  v3URQMDCentralPtKaon->SetName("v3URQMDCentralPtKaon");
  v3URQMDMidcentralPtKaon->SetName("v3URQMDMidcentralPtKaon");
  v3URQMDPeripheralPtKaon->SetName("v3URQMDPeripheralPtKaon");

  v3URQMDCentralRapidityProton->SetName("v3URQMDCentralRapidityProton");
  v3URQMDMidcentralRapidityProton->SetName("v3URQMDMidcentralRapidityProton");
  v3URQMDPeripheralRapidityProton->SetName("v3URQMDPeripheralRapidityProton");
  v3URQMDCentralRapidityPion->SetName("v3URQMDCentralRapidityPion");
  v3URQMDMidcentralRapidityPion->SetName("v3URQMDMidcentralRapidityPion");
  v3URQMDPeripheralRapidityPion->SetName("v3URQMDPeripheralRapidityPion");
  v3URQMDCentralRapidityKaon->SetName("v3URQMDCentralRapidityKaon");
  v3URQMDMidcentralRapidityKaon->SetName("v3URQMDMidcentralRapidityKaon");
  v3URQMDPeripheralRapidityKaon->SetName("v3URQMDPeripheralRapidityKaon");

  v1LAQGSMCentralPtProton->SetName("v1LAQGSMCentralPtProton");
  v1LAQGSMMidcentralPtProton->SetName("v1LAQGSMMidcentralPtProton");
  v1LAQGSMPeripheralPtProton->SetName("v1LAQGSMPeripheralPtProton");
  v1LAQGSMCentralPtPion->SetName("v1LAQGSMCentralPtPion");
  v1LAQGSMMidcentralPtPion->SetName("LAQv1LAQGSMMidcentralPtPionGSM");
  v1LAQGSMPeripheralPtPion->SetName("v1LAQGSMPeripheralPtPion");
  v1LAQGSMCentralPtKaon->SetName("v1LAQGSMCentralPtKaon");
  v1LAQGSMMidcentralPtKaon->SetName("v1LAQGSMMidcentralPtKaon");
  v1LAQGSMPeripheralPtKaon->SetName("v1LAQGSMPeripheralPtKaon");

  v1LAQGSMCentralRapidityProton->SetName("v1LAQGSMCentralRapidityProton");
  v1LAQGSMMidcentralRapidityProton->SetName("v1LAQGSMMidcentralRapidityProton");
  v1LAQGSMPeripheralRapidityProton->SetName("v1LAQGSMPeripheralRapidityProton");
  v1LAQGSMCentralRapidityPion->SetName("v1LAQGSMCentralRapidityPion");
  v1LAQGSMMidcentralRapidityPion->SetName("v1LAQGSMMidcentralRapidityPion");
  v1LAQGSMPeripheralRapidityPion->SetName("v1LAQGSMPeripheralRapidityPion");
  v1LAQGSMCentralRapidityKaon->SetName("v1LAQGSMCentralRapidityKaon");
  v1LAQGSMMidcentralRapidityKaon->SetName("v1LAQGSMMidcentralRapidityKaon");
  v1LAQGSMPeripheralRapidityKaon->SetName("v1LAQGSMPeripheralRapidityKaon");

  v2LAQGSMCentralPtProton->SetName("v2LAQGSMCentralPtProton");
  v2LAQGSMMidcentralPtProton->SetName("v2LAQGSMMidcentralPtProton");
  v2LAQGSMPeripheralPtProton->SetName("v2LAQGSMPeripheralPtProton");
  v2LAQGSMCentralPtPion->SetName("v2LAQGSMCentralPtPion");
  v2LAQGSMMidcentralPtPion->SetName("v2LAQGSMMidcentralPtPion");
  v2LAQGSMPeripheralPtPion->SetName("v2LAQGSMPeripheralPtPion");
  v2LAQGSMCentralPtKaon->SetName("v2LAQGSMCentralPtKaon");
  v2LAQGSMMidcentralPtKaon->SetName("v2LAQGSMMidcentralPtKaon");
  v2LAQGSMPeripheralPtKaon->SetName("v2LAQGSMPeripheralPtKaon");

  v3LAQGSMCentralPtProton->SetName("v3LAQGSMCentralPtProton");
  v3LAQGSMMidcentralPtProton->SetName("v3LAQGSMMidcentralPtProton");
  v3LAQGSMPeripheralPtProton->SetName("v3LAQGSMPeripheralPtProton");
  v3LAQGSMCentralPtPion->SetName("v3LAQGSMCentralPtPion");
  v3LAQGSMMidcentralPtPion->SetName("LAQv3LAQGSMMidcentralPtPionGSM");
  v3LAQGSMPeripheralPtPion->SetName("v3LAQGSMPeripheralPtPion");
  v3LAQGSMCentralPtKaon->SetName("v3LAQGSMCentralPtKaon");
  v3LAQGSMMidcentralPtKaon->SetName("v3LAQGSMMidcentralPtKaon");
  v3LAQGSMPeripheralPtKaon->SetName("v3LAQGSMPeripheralPtKaon");

  v3LAQGSMCentralRapidityProton->SetName("v3LAQGSMCentralRapidityProton");
  v3LAQGSMMidcentralRapidityProton->SetName("v3LAQGSMMidcentralRapidityProton");
  v3LAQGSMPeripheralRapidityProton->SetName("v3LAQGSMPeripheralRapidityProton");
  v3LAQGSMCentralRapidityPion->SetName("v3LAQGSMCentralRapidityPion");
  v3LAQGSMMidcentralRapidityPion->SetName("v3LAQGSMMidcentralRapidityPion");
  v3LAQGSMPeripheralRapidityPion->SetName("v3LAQGSMPeripheralRapidityPion");
  v3LAQGSMCentralRapidityKaon->SetName("v3LAQGSMCentralRapidityKaon");
  v3LAQGSMMidcentralRapidityKaon->SetName("v3LAQGSMMidcentralRapidityKaon");
  v3LAQGSMPeripheralRapidityKaon->SetName("v3LAQGSMPeripheralRapidityKaon");

  hURQMDKinematicsAllPtProton7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllEtaProton7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllRapidityProton7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllPtPion7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllEtaPion7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllRapidityPion7GeV->SetName("UrQMD Before selection");

  hURQMDCutsAllPtProton7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllEtaProton7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllRapidityProton7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllPtPion7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllEtaPion7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllRapidityPion7GeV->SetName("UrQMD After selection");

  hLAQGSMKinematicsAllPtProton7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllEtaProton7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllRapidityProton7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllPtPion7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllEtaPion7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllRapidityPion7GeV->SetName("LAQGSM Before selection");

  hLAQGSMCutsAllPtProton7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllEtaProton7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllRapidityProton7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllPtPion7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllEtaPion7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllRapidityPion7GeV->SetName("LAQGSM After selection");


  v1URQMDCentralPtProton7GeV->SetTitle("URQMD");
  v1URQMDMidcentralPtProton7GeV->SetTitle("URQMD");
  v1URQMDPeripheralPtProton7GeV->SetTitle("URQMD");
  v1URQMDCentralPtPion7GeV->SetTitle("URQMD");
  v1URQMDMidcentralPtPion7GeV->SetTitle("URQMD");
  v1URQMDPeripheralPtPion7GeV->SetTitle("URQMD");
  v1URQMDCentralPtKaon7GeV->SetTitle("URQMD");
  v1URQMDMidcentralPtKaon7GeV->SetTitle("URQMD");
  v1URQMDPeripheralPtKaon7GeV->SetTitle("URQMD");

  v1URQMDCentralRapidityProton7GeV->SetTitle("URQMD");
  v1URQMDMidcentralRapidityProton7GeV->SetTitle("URQMD");
  v1URQMDPeripheralRapidityProton7GeV->SetTitle("URQMD");
  v1URQMDCentralRapidityPion7GeV->SetTitle("URQMD");
  v1URQMDMidcentralRapidityPion7GeV->SetTitle("URQMD");
  v1URQMDPeripheralRapidityPion7GeV->SetTitle("URQMD");
  v1URQMDCentralRapidityKaon7GeV->SetTitle("URQMD");
  v1URQMDMidcentralRapidityKaon7GeV->SetTitle("URQMD");
  v1URQMDPeripheralRapidityKaon7GeV->SetTitle("URQMD");

  v2URQMDCentralPtProton7GeV->SetTitle("URQMD");
  v2URQMDMidcentralPtProton7GeV->SetTitle("URQMD");
  v2URQMDPeripheralPtProton7GeV->SetTitle("URQMD");
  v2URQMDCentralPtPion7GeV->SetTitle("URQMD");
  v2URQMDMidcentralPtPion7GeV->SetTitle("URQMD");
  v2URQMDPeripheralPtPion7GeV->SetTitle("URQMD");
  v2URQMDCentralPtKaon7GeV->SetTitle("URQMD");
  v2URQMDMidcentralPtKaon7GeV->SetTitle("URQMD");
  v2URQMDPeripheralPtKaon7GeV->SetTitle("URQMD");

  v3URQMDCentralPtProton7GeV->SetTitle("URQMD");
  v3URQMDMidcentralPtProton7GeV->SetTitle("URQMD");
  v3URQMDPeripheralPtProton7GeV->SetTitle("URQMD");
  v3URQMDCentralPtPion7GeV->SetTitle("URQMD");
  v3URQMDMidcentralPtPion7GeV->SetTitle("URQMD");
  v3URQMDPeripheralPtPion7GeV->SetTitle("URQMD");
  v3URQMDCentralPtKaon7GeV->SetTitle("URQMD");
  v3URQMDMidcentralPtKaon7GeV->SetTitle("URQMD");
  v3URQMDPeripheralPtKaon7GeV->SetTitle("URQMD");

  v3URQMDCentralRapidityProton7GeV->SetTitle("URQMD");
  v3URQMDMidcentralRapidityProton7GeV->SetTitle("URQMD");
  v3URQMDPeripheralRapidityProton7GeV->SetTitle("URQMD");
  v3URQMDCentralRapidityPion7GeV->SetTitle("URQMD");
  v3URQMDMidcentralRapidityPion7GeV->SetTitle("URQMD");
  v3URQMDPeripheralRapidityPion7GeV->SetTitle("URQMD");
  v3URQMDCentralRapidityKaon7GeV->SetTitle("URQMD");
  v3URQMDMidcentralRapidityKaon7GeV->SetTitle("URQMD");
  v3URQMDPeripheralRapidityKaon7GeV->SetTitle("URQMD");

  v1LAQGSMCentralPtProton7GeV->SetTitle("LAQGSM");
  v1LAQGSMMidcentralPtProton7GeV->SetTitle("LAQGSM");
  v1LAQGSMPeripheralPtProton7GeV->SetTitle("LAQGSM");
  v1LAQGSMCentralPtPion7GeV->SetTitle("LAQGSM");
  v1LAQGSMMidcentralPtPion7GeV->SetTitle("LAQGSM");
  v1LAQGSMPeripheralPtPion7GeV->SetTitle("LAQGSM");
  v1LAQGSMCentralPtKaon7GeV->SetTitle("LAQGSM");
  v1LAQGSMMidcentralPtKaon7GeV->SetTitle("LAQGSM");
  v1LAQGSMPeripheralPtKaon7GeV->SetTitle("LAQGSM");

  v1LAQGSMCentralRapidityProton7GeV->SetTitle("LAQGSM");
  v1LAQGSMMidcentralRapidityProton7GeV->SetTitle("LAQGSM");
  v1LAQGSMPeripheralRapidityProton7GeV->SetTitle("LAQGSM");
  v1LAQGSMCentralRapidityPion7GeV->SetTitle("LAQGSM");
  v1LAQGSMMidcentralRapidityPion7GeV->SetTitle("LAQGSM");
  v1LAQGSMPeripheralRapidityPion7GeV->SetTitle("LAQGSM");
  v1LAQGSMCentralRapidityKaon7GeV->SetTitle("LAQGSM");
  v1LAQGSMMidcentralRapidityKaon7GeV->SetTitle("LAQGSM");
  v1LAQGSMPeripheralRapidityKaon7GeV->SetTitle("LAQGSM");

  v2LAQGSMCentralPtProton7GeV->SetTitle("LAQGSM");
  v2LAQGSMMidcentralPtProton7GeV->SetTitle("LAQGSM");
  v2LAQGSMPeripheralPtProton7GeV->SetTitle("LAQGSM");
  v2LAQGSMCentralPtPion7GeV->SetTitle("LAQGSM");
  v2LAQGSMMidcentralPtPion7GeV->SetTitle("LAQGSM");
  v2LAQGSMPeripheralPtPion7GeV->SetTitle("LAQGSM");
  v2LAQGSMCentralPtKaon7GeV->SetTitle("LAQGSM");
  v2LAQGSMMidcentralPtKaon7GeV->SetTitle("LAQGSM");
  v2LAQGSMPeripheralPtKaon7GeV->SetTitle("LAQGSM");

  v3LAQGSMCentralPtProton7GeV->SetTitle("LAQGSM");
  v3LAQGSMMidcentralPtProton7GeV->SetTitle("LAQGSM");
  v3LAQGSMPeripheralPtProton7GeV->SetTitle("LAQGSM");
  v3LAQGSMCentralPtPion7GeV->SetTitle("LAQGSM");
  v3LAQGSMMidcentralPtPion7GeV->SetTitle("LAQGSM");
  v3LAQGSMPeripheralPtPion7GeV->SetTitle("LAQGSM");
  v3LAQGSMCentralPtKaon7GeV->SetTitle("LAQGSM");
  v3LAQGSMMidcentralPtKaon7GeV->SetTitle("LAQGSM");
  v3LAQGSMPeripheralPtKaon7GeV->SetTitle("LAQGSM");

  v3LAQGSMCentralRapidityProton7GeV->SetTitle("LAQGSM");
  v3LAQGSMMidcentralRapidityProton7GeV->SetTitle("LAQGSM");
  v3LAQGSMPeripheralRapidityProton7GeV->SetTitle("LAQGSM");
  v3LAQGSMCentralRapidityPion7GeV->SetTitle("LAQGSM");
  v3LAQGSMMidcentralRapidityPion7GeV->SetTitle("LAQGSM");
  v3LAQGSMPeripheralRapidityPion7GeV->SetTitle("LAQGSM");
  v3LAQGSMCentralRapidityKaon7GeV->SetTitle("LAQGSM");
  v3LAQGSMMidcentralRapidityKaon7GeV->SetTitle("LAQGSM");
  v3LAQGSMPeripheralRapidityKaon7GeV->SetTitle("LAQGSM");

  hURQMDKinematicsAllPtProton7GeV->SetTitle("Before selection");
  hURQMDKinematicsAllEtaProton7GeV->SetTitle("Before selection");
  hURQMDKinematicsAllRapidityProton7GeV->SetTitle("Before selection");
  hURQMDKinematicsAllPtPion7GeV->SetTitle("Before selection");
  hURQMDKinematicsAllEtaPion7GeV->SetTitle("Before selection");
  hURQMDKinematicsAllRapidityPion7GeV->SetTitle("Before selection");

  hURQMDCutsAllPtProton7GeV->SetTitle("After selection");
  hURQMDCutsAllEtaProton7GeV->SetTitle("After selection");
  hURQMDCutsAllRapidityProton7GeV->SetTitle("After selection");
  hURQMDCutsAllPtPion7GeV->SetTitle("After selection");
  hURQMDCutsAllEtaPion7GeV->SetTitle("After selection");
  hURQMDCutsAllRapidityPion7GeV->SetTitle("After selection");

  hLAQGSMKinematicsAllPtProton7GeV->SetTitle("Before selection");
  hLAQGSMKinematicsAllEtaProton7GeV->SetTitle("Before selection");
  hLAQGSMKinematicsAllRapidityProton7GeV->SetTitle("Before selection");
  hLAQGSMKinematicsAllPtPion7GeV->SetTitle("Before selection");
  hLAQGSMKinematicsAllEtaPion7GeV->SetTitle("Before selection");
  hLAQGSMKinematicsAllRapidityPion7GeV->SetTitle("Before selection");

  hLAQGSMCutsAllPtProton7GeV->SetTitle("After selection");
  hLAQGSMCutsAllEtaProton7GeV->SetTitle("After selection");
  hLAQGSMCutsAllRapidityProton7GeV->SetTitle("After selection");
  hLAQGSMCutsAllPtPion7GeV->SetTitle("After selection");
  hLAQGSMCutsAllEtaPion7GeV->SetTitle("After selection");
  hLAQGSMCutsAllRapidityPion7GeV->SetTitle("After selection");

  v1URQMDCentralPtProton7GeV->SetName("v1URQMDCentralPtProton");
  v1URQMDMidcentralPtProton7GeV->SetName("v1URQMDMidcentralPtProton");
  v1URQMDPeripheralPtProton7GeV->SetName("v1URQMDPeripheralPtProton");
  v1URQMDCentralPtPion7GeV->SetName("v1URQMDCentralPtPion");
  v1URQMDMidcentralPtPion7GeV->SetName("v1URQMDMidcentralPtPion");
  v1URQMDPeripheralPtPion7GeV->SetName("v1URQMDPeripheralPtPion");
  v1URQMDCentralPtKaon7GeV->SetName("v1URQMDCentralPtKaon");
  v1URQMDMidcentralPtKaon7GeV->SetName("v1URQMDMidcentralPtKaon");
  v1URQMDPeripheralPtKaon7GeV->SetName("v1URQMDPeripheralPtKaon");

  v1URQMDCentralRapidityProton7GeV->SetName("v1URQMDCentralRapidityProton");
  v1URQMDMidcentralRapidityProton7GeV->SetName("v1URQMDMidcentralRapidityProton");
  v1URQMDPeripheralRapidityProton7GeV->SetName("v1URQMDPeripheralRapidityProton");
  v1URQMDCentralRapidityPion7GeV->SetName("v1URQMDCentralRapidityPion");
  v1URQMDMidcentralRapidityPion7GeV->SetName("v1URQMDMidcentralRapidityPion");
  v1URQMDPeripheralRapidityPion7GeV->SetName("v1URQMDPeripheralRapidityPion");
  v1URQMDCentralRapidityKaon7GeV->SetName("v1URQMDCentralRapidityKaon");
  v1URQMDMidcentralRapidityKaon7GeV->SetName("v1URQMDMidcentralRapidityKaon");
  v1URQMDPeripheralRapidityKaon7GeV->SetName("v1URQMDPeripheralRapidityKaon");

  v2URQMDCentralPtProton7GeV->SetName("v2URQMDCentralPtProton");
  v2URQMDMidcentralPtProton7GeV->SetName("v2URQMDMidcentralPtProton");
  v2URQMDPeripheralPtProton7GeV->SetName("v2URQMDPeripheralPtProton");
  v2URQMDCentralPtPion7GeV->SetName("v2URQMDCentralPtPion");
  v2URQMDMidcentralPtPion7GeV->SetName("v2URQMDMidcentralPtPion");
  v2URQMDPeripheralPtPion7GeV->SetName("v2URQMDPeripheralPtPion");
  v2URQMDCentralPtKaon7GeV->SetName("v2URQMDCentralPtKaon");
  v2URQMDMidcentralPtKaon7GeV->SetName("v2URQMDMidcentralPtKaon");
  v2URQMDPeripheralPtKaon7GeV->SetName("v2URQMDPeripheralPtKaon");

  v3URQMDCentralPtProton7GeV->SetName("v3URQMDCentralPtProton");
  v3URQMDMidcentralPtProton7GeV->SetName("v3URQMDMidcentralPtProton");
  v3URQMDPeripheralPtProton7GeV->SetName("v3URQMDPeripheralPtProton");
  v3URQMDCentralPtPion7GeV->SetName("v3URQMDCentralPtPion");
  v3URQMDMidcentralPtPion7GeV->SetName("v3URQMDMidcentralPtPion");
  v3URQMDPeripheralPtPion7GeV->SetName("v3URQMDPeripheralPtPion");
  v3URQMDCentralPtKaon7GeV->SetName("v3URQMDCentralPtKaon");
  v3URQMDMidcentralPtKaon7GeV->SetName("v3URQMDMidcentralPtKaon");
  v3URQMDPeripheralPtKaon7GeV->SetName("v3URQMDPeripheralPtKaon");

  v3URQMDCentralRapidityProton7GeV->SetName("v3URQMDCentralRapidityProton");
  v3URQMDMidcentralRapidityProton7GeV->SetName("v3URQMDMidcentralRapidityProton");
  v3URQMDPeripheralRapidityProton7GeV->SetName("v3URQMDPeripheralRapidityProton");
  v3URQMDCentralRapidityPion7GeV->SetName("v3URQMDCentralRapidityPion");
  v3URQMDMidcentralRapidityPion7GeV->SetName("v3URQMDMidcentralRapidityPion");
  v3URQMDPeripheralRapidityPion7GeV->SetName("v3URQMDPeripheralRapidityPion");
  v3URQMDCentralRapidityKaon7GeV->SetName("v3URQMDCentralRapidityKaon");
  v3URQMDMidcentralRapidityKaon7GeV->SetName("v3URQMDMidcentralRapidityKaon");
  v3URQMDPeripheralRapidityKaon7GeV->SetName("v3URQMDPeripheralRapidityKaon");

  v1LAQGSMCentralPtProton7GeV->SetName("v1LAQGSMCentralPtProton");
  v1LAQGSMMidcentralPtProton7GeV->SetName("v1LAQGSMMidcentralPtProton");
  v1LAQGSMPeripheralPtProton7GeV->SetName("v1LAQGSMPeripheralPtProton");
  v1LAQGSMCentralPtPion7GeV->SetName("v1LAQGSMCentralPtPion");
  v1LAQGSMMidcentralPtPion7GeV->SetName("LAQv1LAQGSMMidcentralPtPionGSM");
  v1LAQGSMPeripheralPtPion7GeV->SetName("v1LAQGSMPeripheralPtPion");
  v1LAQGSMCentralPtKaon7GeV->SetName("v1LAQGSMCentralPtKaon");
  v1LAQGSMMidcentralPtKaon7GeV->SetName("v1LAQGSMMidcentralPtKaon");
  v1LAQGSMPeripheralPtKaon7GeV->SetName("v1LAQGSMPeripheralPtKaon");

  v1LAQGSMCentralRapidityProton7GeV->SetName("v1LAQGSMCentralRapidityProton");
  v1LAQGSMMidcentralRapidityProton7GeV->SetName("v1LAQGSMMidcentralRapidityProton");
  v1LAQGSMPeripheralRapidityProton7GeV->SetName("v1LAQGSMPeripheralRapidityProton");
  v1LAQGSMCentralRapidityPion7GeV->SetName("v1LAQGSMCentralRapidityPion");
  v1LAQGSMMidcentralRapidityPion7GeV->SetName("v1LAQGSMMidcentralRapidityPion");
  v1LAQGSMPeripheralRapidityPion7GeV->SetName("v1LAQGSMPeripheralRapidityPion");
  v1LAQGSMCentralRapidityKaon7GeV->SetName("v1LAQGSMCentralRapidityKaon");
  v1LAQGSMMidcentralRapidityKaon7GeV->SetName("v1LAQGSMMidcentralRapidityKaon");
  v1LAQGSMPeripheralRapidityKaon7GeV->SetName("v1LAQGSMPeripheralRapidityKaon");

  v2LAQGSMCentralPtProton7GeV->SetName("v2LAQGSMCentralPtProton");
  v2LAQGSMMidcentralPtProton7GeV->SetName("v2LAQGSMMidcentralPtProton");
  v2LAQGSMPeripheralPtProton7GeV->SetName("v2LAQGSMPeripheralPtProton");
  v2LAQGSMCentralPtPion7GeV->SetName("v2LAQGSMCentralPtPion");
  v2LAQGSMMidcentralPtPion7GeV->SetName("v2LAQGSMMidcentralPtPion");
  v2LAQGSMPeripheralPtPion7GeV->SetName("v2LAQGSMPeripheralPtPion");
  v2LAQGSMCentralPtKaon7GeV->SetName("v2LAQGSMCentralPtKaon");
  v2LAQGSMMidcentralPtKaon7GeV->SetName("v2LAQGSMMidcentralPtKaon");
  v2LAQGSMPeripheralPtKaon7GeV->SetName("v2LAQGSMPeripheralPtKaon");

  v3LAQGSMCentralPtProton7GeV->SetName("v3LAQGSMCentralPtProton");
  v3LAQGSMMidcentralPtProton7GeV->SetName("v3LAQGSMMidcentralPtProton");
  v3LAQGSMPeripheralPtProton7GeV->SetName("v3LAQGSMPeripheralPtProton");
  v3LAQGSMCentralPtPion7GeV->SetName("v3LAQGSMCentralPtPion");
  v3LAQGSMMidcentralPtPion7GeV->SetName("LAQv3LAQGSMMidcentralPtPionGSM");
  v3LAQGSMPeripheralPtPion7GeV->SetName("v3LAQGSMPeripheralPtPion");
  v3LAQGSMCentralPtKaon7GeV->SetName("v3LAQGSMCentralPtKaon");
  v3LAQGSMMidcentralPtKaon7GeV->SetName("v3LAQGSMMidcentralPtKaon");
  v3LAQGSMPeripheralPtKaon7GeV->SetName("v3LAQGSMPeripheralPtKaon");

  v3LAQGSMCentralRapidityProton7GeV->SetName("v3LAQGSMCentralRapidityProton");
  v3LAQGSMMidcentralRapidityProton7GeV->SetName("v3LAQGSMMidcentralRapidityProton");
  v3LAQGSMPeripheralRapidityProton7GeV->SetName("v3LAQGSMPeripheralRapidityProton");
  v3LAQGSMCentralRapidityPion7GeV->SetName("v3LAQGSMCentralRapidityPion");
  v3LAQGSMMidcentralRapidityPion7GeV->SetName("v3LAQGSMMidcentralRapidityPion");
  v3LAQGSMPeripheralRapidityPion7GeV->SetName("v3LAQGSMPeripheralRapidityPion");
  v3LAQGSMCentralRapidityKaon7GeV->SetName("v3LAQGSMCentralRapidityKaon");
  v3LAQGSMMidcentralRapidityKaon7GeV->SetName("v3LAQGSMMidcentralRapidityKaon");
  v3LAQGSMPeripheralRapidityKaon7GeV->SetName("v3LAQGSMPeripheralRapidityKaon");

  hURQMDKinematicsAllPtProton7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllEtaProton7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllRapidityProton7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllPtPion7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllEtaPion7GeV->SetName("UrQMD Before selection");
  hURQMDKinematicsAllRapidityPion7GeV->SetName("UrQMD Before selection");

  hURQMDCutsAllPtProton7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllEtaProton7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllRapidityProton7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllPtPion7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllEtaPion7GeV->SetName("UrQMD After selection");
  hURQMDCutsAllRapidityPion7GeV->SetName("UrQMD After selection");

  hLAQGSMKinematicsAllPtProton7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllEtaProton7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllRapidityProton7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllPtPion7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllEtaPion7GeV->SetName("LAQGSM Before selection");
  hLAQGSMKinematicsAllRapidityPion7GeV->SetName("LAQGSM Before selection");

  hLAQGSMCutsAllPtProton7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllEtaProton7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllRapidityProton7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllPtPion7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllEtaPion7GeV->SetName("LAQGSM After selection");
  hLAQGSMCutsAllRapidityPion7GeV->SetName("LAQGSM After selection");

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

  std::vector<TGraphAsymmErrors *> grv2CentralPion7GeV = GetSTARv2CentralPion7GeV();
  std::vector<TGraphAsymmErrors *> grv2MidcentralPion7GeV = GetSTARv2MidcentralPion7GeV();
  std::vector<TGraphAsymmErrors *> grv2PeripheralPion7GeV = GetSTARv2PeripheralPion7GeV();
  std::vector<TGraphAsymmErrors *> grv2CentralPion11GeV = GetSTARv2CentralPion11GeV();
  std::vector<TGraphAsymmErrors *> grv2MidcentralPion11GeV = GetSTARv2MidcentralPion11GeV();
  std::vector<TGraphAsymmErrors *> grv2PeripheralPion11GeV = GetSTARv2PeripheralPion11GeV();

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
  grv2CentralPion7GeV.at(2)->SetTitle("STAR BES-I");
  grv2MidcentralPion7GeV.at(2)->SetTitle("STAR BES-I");
  grv2PeripheralPion7GeV.at(2)->SetTitle("STAR BES-I");
  grv2CentralPion11GeV.at(2)->SetTitle("STAR BES-I");
  grv2MidcentralPion11GeV.at(2)->SetTitle("STAR BES-I");
  grv2PeripheralPion11GeV.at(2)->SetTitle("STAR BES-I");

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1CentralRapidityProton11GeV = new TCanvas("canv_v1CentralRapidityProton11GeV", "canv_v1CentralRapidityProton11GeV", 700, 500);
  canv_v1CentralRapidityProton11GeV->cd();

  v1URQMDCentralRapidityProton->GetYaxis()->SetRangeUser(-0.05, 0.076);
  // v1PHSDCentralRapidityProton->SetLineColor(2);
  // v1PHSDCentralRapidityProton->SetMarkerColor(2);
  // v1PHSDCentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDCentralRapidityProton->SetLineColor(3);
  // v1URQMDCentralRapidityProton->SetMarkerColor(3);
  v1URQMDCentralRapidityProton->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMCentralRapidityProton->SetLineColor(4);
  // v1LAQGSMCentralRapidityProton->SetMarkerColor(4);
  v1LAQGSMCentralRapidityProton->SetMarkerStyle(kOpenSquare);
  // v1PHQMDCentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  // v1DCMQGSMCentralRapidityProton->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(0)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(0)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(0)->SetNColumns(3);
  // legend.at(0)->AddEntry(v1PHSDCentralRapidityProton, v1PHSDCentralRapidityProton->GetTitle(), "p");
  legend.at(0)->AddEntry(v1URQMDCentralRapidityProton, v1URQMDCentralRapidityProton->GetTitle(), "p");
  legend.at(0)->AddEntry(v1LAQGSMCentralRapidityProton, v1LAQGSMCentralRapidityProton->GetTitle(), "p");
  // legend.at(0)->AddEntry(v1PHQMDCentralRapidityProton, v1PHQMDCentralRapidityProton->GetTitle(), "p");
  // legend.at(0)->AddEntry(v1DCMQGSMCentralRapidityProton, v1DCMQGSMCentralRapidityProton->GetTitle(), "p");
  legend.at(0)->AddEntry(grv1CentralProton11GeV.at(0), grv1CentralProton11GeV.at(0)->GetTitle(), "p");
  v1URQMDCentralRapidityProton->Draw("");
  legend.at(0)->Draw();
  // v1PHSDCentralRapidityProton->Draw("same PLC PMC");
  v1URQMDCentralRapidityProton->Draw("same PLC PMC");
  v1LAQGSMCentralRapidityProton->Draw("same PLC PMC");
  // v1PHQMDCentralRapidityProton->Draw("same PLC PMC");
  // v1DCMQGSMCentralRapidityProton->Draw("same PLC PMC");
  grv1CentralProton11GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDCentralRapidityProton->GetXaxis()->GetXmin(), 0., v1URQMDCentralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1MidcentralRapidityProton11GeV = new TCanvas("canv_v1MidcentralRapidityProton11GeV", "canv_v1MidcentralRapidityProton11GeV", 700, 500);
  canv_v1MidcentralRapidityProton11GeV->cd();

  v1URQMDMidcentralRapidityProton->GetYaxis()->SetRangeUser(-0.09, 0.12);
  // v1PHSDMidcentralRapidityProton->SetLineColor(2);
  // v1PHSDMidcentralRapidityProton->SetMarkerColor(2);
  // v1PHSDMidcentralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDMidcentralRapidityProton->SetLineColor(3);
  // v1URQMDMidcentralRapidityProton->SetMarkerColor(3);
  v1URQMDMidcentralRapidityProton->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMMidcentralRapidityProton->SetLineColor(4);
  // v1LAQGSMMidcentralRapidityProton->SetMarkerColor(4);
  v1LAQGSMMidcentralRapidityProton->SetMarkerStyle(kOpenSquare);
  // v1PHQMDMidcentralRapidityProton->SetMarkerStyle(kOpenDiamond);
  // v1DCMQGSMMidcentralRapidityProton->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(1)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Protons", "C");
  header = (TLegendEntry *)legend.at(1)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(1)->SetNColumns(3);
  // legend.at(1)->AddEntry(v1PHSDMidcentralRapidityProton, v1PHSDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(1)->AddEntry(v1URQMDMidcentralRapidityProton, v1URQMDMidcentralRapidityProton->GetTitle(), "p");
  legend.at(1)->AddEntry(v1LAQGSMMidcentralRapidityProton, v1LAQGSMMidcentralRapidityProton->GetTitle(), "p");
  // legend.at(1)->AddEntry(v1PHQMDMidcentralRapidityProton, v1PHQMDMidcentralRapidityProton->GetTitle(), "p");
  // legend.at(1)->AddEntry(v1DCMQGSMMidcentralRapidityProton, v1DCMQGSMMidcentralRapidityProton->GetTitle(), "p");
  legend.at(1)->AddEntry(grv1MidcentralProton11GeV.at(0), grv1MidcentralProton11GeV.at(0)->GetTitle(), "p");
  v1URQMDMidcentralRapidityProton->Draw("");
  legend.at(1)->Draw();
  // v1PHSDMidcentralRapidityProton->Draw("same PLC PMC");
  v1URQMDMidcentralRapidityProton->Draw("same PLC PMC");
  v1LAQGSMMidcentralRapidityProton->Draw("same PLC PMC");
  // v1PHQMDMidcentralRapidityProton->Draw("same PLC PMC");
  // v1DCMQGSMMidcentralRapidityProton->Draw("same PLC PMC");
  grv1MidcentralProton11GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDMidcentralRapidityProton->GetXaxis()->GetXmin(), 0., v1URQMDMidcentralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1PeripheralRapidityProton11GeV = new TCanvas("canv_v1PeripheralRapidityProton11GeV", "canv_v1PeripheralRapidityProton11GeV", 700, 500);
  canv_v1PeripheralRapidityProton11GeV->cd();

  v1URQMDPeripheralRapidityProton->GetYaxis()->SetRangeUser(-0.12, 0.17);
  // v1PHSDPeripheralRapidityProton->SetLineColor(2);
  // v1PHSDPeripheralRapidityProton->SetMarkerColor(2);
  // v1PHSDPeripheralRapidityProton->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDPeripheralRapidityProton->SetLineColor(3);
  // v1URQMDPeripheralRapidityProton->SetMarkerColor(3);
  v1URQMDPeripheralRapidityProton->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMPeripheralRapidityProton->SetLineColor(4);
  // v1LAQGSMPeripheralRapidityProton->SetMarkerColor(4);
  v1LAQGSMPeripheralRapidityProton->SetMarkerStyle(kOpenSquare);
  // v1PHQMDPeripheralRapidityProton->SetMarkerStyle(kOpenDiamond);
  // v1DCMQGSMPeripheralRapidityProton->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(2)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Protons", "C");
  header = (TLegendEntry *)legend.at(2)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(2)->SetNColumns(3);
  // legend.at(2)->AddEntry(v1PHSDPeripheralRapidityProton, v1PHSDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(2)->AddEntry(v1URQMDPeripheralRapidityProton, v1URQMDPeripheralRapidityProton->GetTitle(), "p");
  legend.at(2)->AddEntry(v1LAQGSMPeripheralRapidityProton, v1LAQGSMPeripheralRapidityProton->GetTitle(), "p");
  // legend.at(2)->AddEntry(v1PHQMDPeripheralRapidityProton, v1PHQMDPeripheralRapidityProton->GetTitle(), "p");
  // legend.at(2)->AddEntry(v1DCMQGSMPeripheralRapidityProton, v1DCMQGSMPeripheralRapidityProton->GetTitle(), "p");
  legend.at(2)->AddEntry(grv1PeripheralProton11GeV.at(0), grv1PeripheralProton11GeV.at(0)->GetTitle(), "p");
  v1URQMDPeripheralRapidityProton->Draw("");
  legend.at(2)->Draw();
  // v1PHSDPeripheralRapidityProton->Draw("same PLC PMC");
  v1URQMDPeripheralRapidityProton->Draw("same PLC PMC");
  v1LAQGSMPeripheralRapidityProton->Draw("same PLC PMC");
  // v1PHQMDPeripheralRapidityProton->Draw("same PLC PMC");
  // v1DCMQGSMPeripheralRapidityProton->Draw("same PLC PMC");
  grv1PeripheralProton11GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDPeripheralRapidityProton->GetXaxis()->GetXmin(), 0., v1URQMDPeripheralRapidityProton->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1CentralRapidityPion11GeV = new TCanvas("canv_v1CentralRapidityPion11GeV", "canv_v1CentralRapidityPion11GeV", 700, 500);
  canv_v1CentralRapidityPion11GeV->cd();

  v1URQMDCentralRapidityPion->GetYaxis()->SetRangeUser(-0.05, 0.05);
  // v1PHSDCentralRapidityPion->SetLineColor(2);
  // v1PHSDCentralRapidityPion->SetMarkerColor(2);
  // v1PHSDCentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDCentralRapidityPion->SetLineColor(3);
  // v1URQMDCentralRapidityPion->SetMarkerColor(3);
  v1URQMDCentralRapidityPion->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMCentralRapidityPion->SetLineColor(4);
  // v1LAQGSMCentralRapidityPion->SetMarkerColor(4);
  v1LAQGSMCentralRapidityPion->SetMarkerStyle(kOpenSquare);
  // v1PHQMDCentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  // v1DCMQGSMCentralRapidityPion->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(3)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(3)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(3)->SetNColumns(3);
  // legend.at(3)->AddEntry(v1PHSDCentralRapidityPion, v1PHSDCentralRapidityPion->GetTitle(), "p");
  legend.at(3)->AddEntry(v1URQMDCentralRapidityPion, v1URQMDCentralRapidityPion->GetTitle(), "p");
  legend.at(3)->AddEntry(v1LAQGSMCentralRapidityPion, v1LAQGSMCentralRapidityPion->GetTitle(), "p");
  // legend.at(3)->AddEntry(v1PHQMDCentralRapidityPion, v1PHQMDCentralRapidityPion->GetTitle(), "p");
  // legend.at(3)->AddEntry(v1DCMQGSMCentralRapidityPion, v1DCMQGSMCentralRapidityPion->GetTitle(), "p");
  legend.at(3)->AddEntry(grv1CentralPion11GeV.at(0), grv1CentralPion11GeV.at(0)->GetTitle(), "p");
  v1URQMDCentralRapidityPion->Draw("");
  legend.at(3)->Draw();
  // v1PHSDCentralRapidityPion->Draw("same PLC PMC");
  v1URQMDCentralRapidityPion->Draw("same PLC PMC");
  v1LAQGSMCentralRapidityPion->Draw("same PLC PMC");
  // v1PHQMDCentralRapidityPion->Draw("same PLC PMC");
  // v1DCMQGSMCentralRapidityPion->Draw("same PLC PMC");
  grv1CentralPion11GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDCentralRapidityPion->GetXaxis()->GetXmin(), 0., v1URQMDCentralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1MidcentralRapidityPion11GeV = new TCanvas("canv_v1MidcentralRapidityPion11GeV", "canv_v1MidcentralRapidityPion11GeV", 700, 500);
  canv_v1MidcentralRapidityPion11GeV->cd();

  v1URQMDMidcentralRapidityPion->GetYaxis()->SetRangeUser(-0.09, 0.09);
  // v1PHSDMidcentralRapidityPion->SetLineColor(2);
  // v1PHSDMidcentralRapidityPion->SetMarkerColor(2);
  // v1PHSDMidcentralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDMidcentralRapidityPion->SetLineColor(3);
  // v1URQMDMidcentralRapidityPion->SetMarkerColor(3);
  v1URQMDMidcentralRapidityPion->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMMidcentralRapidityPion->SetLineColor(4);
  // v1LAQGSMMidcentralRapidityPion->SetMarkerColor(4);
  v1LAQGSMMidcentralRapidityPion->SetMarkerStyle(kOpenSquare);
  // v1PHQMDMidcentralRapidityPion->SetMarkerStyle(kOpenDiamond);
  // v1DCMQGSMMidcentralRapidityPion->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(4)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Pions", "C");
  header = (TLegendEntry *)legend.at(4)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(4)->SetNColumns(3);
  // legend.at(4)->AddEntry(v1PHSDMidcentralRapidityPion, v1PHSDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(4)->AddEntry(v1URQMDMidcentralRapidityPion, v1URQMDMidcentralRapidityPion->GetTitle(), "p");
  legend.at(4)->AddEntry(v1LAQGSMMidcentralRapidityPion, v1LAQGSMMidcentralRapidityPion->GetTitle(), "p");
  // legend.at(4)->AddEntry(v1PHQMDMidcentralRapidityPion, v1PHQMDMidcentralRapidityPion->GetTitle(), "p");
  // legend.at(4)->AddEntry(v1DCMQGSMMidcentralRapidityPion, v1DCMQGSMMidcentralRapidityPion->GetTitle(), "p");
  legend.at(4)->AddEntry(grv1MidcentralPion11GeV.at(0), grv1MidcentralPion11GeV.at(0)->GetTitle(), "p");
  v1URQMDMidcentralRapidityPion->Draw("");
  legend.at(4)->Draw();
  // v1PHSDMidcentralRapidityPion->Draw("same PLC PMC");
  v1URQMDMidcentralRapidityPion->Draw("same PLC PMC");
  v1LAQGSMMidcentralRapidityPion->Draw("same PLC PMC");
  // v1PHQMDMidcentralRapidityPion->Draw("same PLC PMC");
  // v1DCMQGSMMidcentralRapidityPion->Draw("same PLC PMC");
  grv1MidcentralPion11GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDMidcentralRapidityPion->GetXaxis()->GetXmin(), 0., v1URQMDMidcentralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v1PeripheralRapidityPion11GeV = new TCanvas("canv_v1PeripheralRapidityPion11GeV", "canv_v1PeripheralRapidityPion11GeV", 700, 500);
  canv_v1PeripheralRapidityPion11GeV->cd();

  v1URQMDPeripheralRapidityPion->GetYaxis()->SetRangeUser(-0.15, 0.15);
  // v1PHSDPeripheralRapidityPion->SetLineColor(2);
  // v1PHSDPeripheralRapidityPion->SetMarkerColor(2);
  // v1PHSDPeripheralRapidityPion->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDPeripheralRapidityPion->SetLineColor(3);
  // v1URQMDPeripheralRapidityPion->SetMarkerColor(3);
  v1URQMDPeripheralRapidityPion->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMPeripheralRapidityPion->SetLineColor(4);
  // v1LAQGSMPeripheralRapidityPion->SetMarkerColor(4);
  v1LAQGSMPeripheralRapidityPion->SetMarkerStyle(kOpenSquare);
  // v1PHQMDPeripheralRapidityPion->SetMarkerStyle(kOpenDiamond);
  // v1DCMQGSMPeripheralRapidityPion->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(5)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Pions", "C");
  header = (TLegendEntry *)legend.at(5)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(5)->SetNColumns(3);
  // legend.at(5)->AddEntry(v1PHSDPeripheralRapidityPion, v1PHSDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(5)->AddEntry(v1URQMDPeripheralRapidityPion, v1URQMDPeripheralRapidityPion->GetTitle(), "p");
  legend.at(5)->AddEntry(v1LAQGSMPeripheralRapidityPion, v1LAQGSMPeripheralRapidityPion->GetTitle(), "p");
  // legend.at(5)->AddEntry(v1PHQMDPeripheralRapidityPion, v1PHQMDPeripheralRapidityPion->GetTitle(), "p");
  // legend.at(5)->AddEntry(v1DCMQGSMPeripheralRapidityPion, v1DCMQGSMPeripheralRapidityPion->GetTitle(), "p");
  legend.at(5)->AddEntry(grv1PeripheralPion11GeV.at(0), grv1PeripheralPion11GeV.at(0)->GetTitle(), "p");
  v1URQMDPeripheralRapidityPion->Draw("");
  legend.at(5)->Draw();
  // v1PHSDPeripheralRapidityPion->Draw("same PLC PMC");
  v1URQMDPeripheralRapidityPion->Draw("same PLC PMC");
  v1LAQGSMPeripheralRapidityPion->Draw("same PLC PMC");
  // v1PHQMDPeripheralRapidityPion->Draw("same PLC PMC");
  // v1DCMQGSMPeripheralRapidityPion->Draw("same PLC PMC");
  grv1PeripheralPion11GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDPeripheralRapidityPion->GetXaxis()->GetXmin(), 0., v1URQMDPeripheralRapidityPion->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v2CentralPtProton11GeV = new TCanvas("canv_v2CentralPtProton11GeV", "canv_v2CentralPtProton11GeV", 700, 500);
  canv_v2CentralPtProton11GeV->cd();

  v2URQMDCentralPtProton->GetYaxis()->SetRangeUser(-0.019, 0.12);
  // v2PHSDCentralPtProton->SetLineColor(2);
  // v2PHSDCentralPtProton->SetMarkerColor(2);
  // v2PHSDCentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDCentralPtProton->SetLineColor(3);
  // v2URQMDCentralPtProton->SetMarkerColor(3);
  v2URQMDCentralPtProton->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMCentralPtProton->SetLineColor(4);
  // v2LAQGSMCentralPtProton->SetMarkerColor(4);
  v2LAQGSMCentralPtProton->SetMarkerStyle(kOpenSquare);
  // v2PHQMDCentralPtProton->SetMarkerStyle(kOpenDiamond);
  // v2DCMQGSMCentralPtProton->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(6)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(6)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(6)->SetNColumns(3);
  // legend.at(6)->AddEntry(v2PHSDCentralPtProton, v2PHSDCentralPtProton->GetTitle(), "p");
  legend.at(6)->AddEntry(v2URQMDCentralPtProton, v2URQMDCentralPtProton->GetTitle(), "p");
  legend.at(6)->AddEntry(v2LAQGSMCentralPtProton, v2LAQGSMCentralPtProton->GetTitle(), "p");
  // legend.at(6)->AddEntry(v2PHQMDCentralPtProton, v2PHQMDCentralPtProton->GetTitle(), "p");
  // legend.at(6)->AddEntry(v2DCMQGSMCentralPtProton, v2DCMQGSMCentralPtProton->GetTitle(), "p");
  legend.at(6)->AddEntry(grv2CentralProton11GeV.at(2), grv2CentralProton11GeV.at(2)->GetTitle(), "p");
  v2URQMDCentralPtProton->Draw("");
  legend.at(6)->Draw();
  // v2PHSDCentralPtProton->Draw("same PLC PMC");
  v2URQMDCentralPtProton->Draw("same PLC PMC");
  v2LAQGSMCentralPtProton->Draw("same PLC PMC");
  // v2PHQMDCentralPtProton->Draw("same PLC PMC");
  // v2DCMQGSMCentralPtProton->Draw("same PLC PMC");
  grv2CentralProton11GeV.at(0)->Draw("P");
  grv2CentralProton11GeV.at(1)->Draw("P2");
  grv2CentralProton11GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v2MidcentralPtProton11GeV = new TCanvas("canv_v2MidcentralPtProton11GeV", "canv_v2MidcentralPtProton11GeV", 700, 500);
  canv_v2MidcentralPtProton11GeV->cd();

  v2URQMDMidcentralPtProton->GetYaxis()->SetRangeUser(-0.022, 0.18);
  // v2PHSDMidcentralPtProton->SetLineColor(2);
  // v2PHSDMidcentralPtProton->SetMarkerColor(2);
  // v2PHSDMidcentralPtProton->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDMidcentralPtProton->SetLineColor(3);
  // v2URQMDMidcentralPtProton->SetMarkerColor(3);
  v2URQMDMidcentralPtProton->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMMidcentralPtProton->SetLineColor(4);
  // v2LAQGSMMidcentralPtProton->SetMarkerColor(4);
  v2LAQGSMMidcentralPtProton->SetMarkerStyle(kOpenSquare);
  // v2PHQMDMidcentralPtProton->SetMarkerStyle(kOpenDiamond);
  // v2DCMQGSMMidcentralPtProton->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(7)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Protons", "C");
  header = (TLegendEntry *)legend.at(7)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(7)->SetNColumns(3);
  // legend.at(7)->AddEntry(v2PHSDMidcentralPtProton, v2PHSDMidcentralPtProton->GetTitle(), "p");
  legend.at(7)->AddEntry(v2URQMDMidcentralPtProton, v2URQMDMidcentralPtProton->GetTitle(), "p");
  legend.at(7)->AddEntry(v2LAQGSMMidcentralPtProton, v2LAQGSMMidcentralPtProton->GetTitle(), "p");
  // legend.at(7)->AddEntry(v2PHQMDMidcentralPtProton, v2PHQMDMidcentralPtProton->GetTitle(), "p");
  // legend.at(7)->AddEntry(v2DCMQGSMMidcentralPtProton, v2DCMQGSMMidcentralPtProton->GetTitle(), "p");
  legend.at(7)->AddEntry(grv2MidcentralProton11GeV.at(2), grv2MidcentralProton11GeV.at(2)->GetTitle(), "p");
  v2URQMDMidcentralPtProton->Draw("");
  legend.at(7)->Draw();
  // v2PHSDMidcentralPtProton->Draw("same PLC PMC");
  v2URQMDMidcentralPtProton->Draw("same PLC PMC");
  v2LAQGSMMidcentralPtProton->Draw("same PLC PMC");
  // v2PHQMDMidcentralPtProton->Draw("same PLC PMC");
  // v2DCMQGSMMidcentralPtProton->Draw("same PLC PMC");
  grv2MidcentralProton11GeV.at(0)->Draw("P");
  grv2MidcentralProton11GeV.at(1)->Draw("P2");
  grv2MidcentralProton11GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  TCanvas *canv_v2PeripheralPtProton11GeV = new TCanvas("canv_v2PeripheralPtProton11GeV", "canv_v2PeripheralPtProton11GeV", 700, 500);
  canv_v2PeripheralPtProton11GeV->cd();

  v2URQMDPeripheralPtProton->GetYaxis()->SetRangeUser(-0.022, 0.25);
  // v2PHSDPeripheralPtProton->SetLineColor(2);
  // v2PHSDPeripheralPtProton->SetMarkerColor(2);
  // v2PHSDPeripheralPtProton->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDPeripheralPtProton->SetLineColor(3);
  // v2URQMDPeripheralPtProton->SetMarkerColor(3);
  v2URQMDPeripheralPtProton->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMPeripheralPtProton->SetLineColor(4);
  // v2LAQGSMPeripheralPtProton->SetMarkerColor(4);
  v2LAQGSMPeripheralPtProton->SetMarkerStyle(kOpenSquare);
  // v2PHQMDPeripheralPtProton->SetMarkerStyle(kOpenDiamond);
  // v2DCMQGSMPeripheralPtProton->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(8)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Protons", "C");
  header = (TLegendEntry *)legend.at(8)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(8)->SetNColumns(3);
  // legend.at(8)->AddEntry(v2PHSDPeripheralPtProton, v2PHSDPeripheralPtProton->GetTitle(), "p");
  legend.at(8)->AddEntry(v2URQMDPeripheralPtProton, v2URQMDPeripheralPtProton->GetTitle(), "p");
  legend.at(8)->AddEntry(v2LAQGSMPeripheralPtProton, v2LAQGSMPeripheralPtProton->GetTitle(), "p");
  // legend.at(8)->AddEntry(v2PHQMDPeripheralPtProton, v2PHQMDPeripheralPtProton->GetTitle(), "p");
  // legend.at(8)->AddEntry(v2DCMQGSMPeripheralPtProton, v2DCMQGSMPeripheralPtProton->GetTitle(), "p");
  legend.at(8)->AddEntry(grv2PeripheralProton11GeV.at(2), grv2PeripheralProton11GeV.at(2)->GetTitle(), "p");
  v2URQMDPeripheralPtProton->Draw("");
  legend.at(8)->Draw();
  // v2PHSDPeripheralPtProton->Draw("same PLC PMC");
  v2URQMDPeripheralPtProton->Draw("same PLC PMC");
  v2LAQGSMPeripheralPtProton->Draw("same PLC PMC");
  // v2PHQMDPeripheralPtProton->Draw("same PLC PMC");
  // v2DCMQGSMPeripheralPtProton->Draw("same PLC PMC");
  grv2PeripheralProton11GeV.at(0)->Draw("P");
  grv2PeripheralProton11GeV.at(1)->Draw("P2");
  grv2PeripheralProton11GeV.at(2)->Draw("P3");

  Int_t iC = 8;

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralPtPion11GeV = new TCanvas("canv_v2CentralPtPion11GeV", "canv_v2CentralPtPion11GeV", 700, 500);
  canv_v2CentralPtPion11GeV->cd();

  v2URQMDCentralPtPion->GetYaxis()->SetRangeUser(-0.019, 0.12);
  // v2PHSDCentralPtPion->SetLineColor(2);
  // v2PHSDCentralPtPion->SetMarkerColor(2);
  // v2PHSDCentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDCentralPtPion->SetLineColor(3);
  // v2URQMDCentralPtPion->SetMarkerColor(3);
  v2URQMDCentralPtPion->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMCentralPtPion->SetLineColor(4);
  // v2LAQGSMCentralPtPion->SetMarkerColor(4);
  v2LAQGSMCentralPtPion->SetMarkerStyle(kOpenSquare);
  // v2PHQMDCentralPtPion->SetMarkerStyle(kOpenDiamond);
  // v2DCMQGSMCentralPtPion->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2PHSDCentralPtPion, v2PHSDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDCentralPtPion, v2URQMDCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMCentralPtPion, v2LAQGSMCentralPtPion->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDCentralPtPion, v2PHQMDCentralPtPion->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2DCMQGSMCentralPtPion, v2DCMQGSMCentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2CentralPion11GeV.at(2), grv2CentralPion11GeV.at(2)->GetTitle(), "p");
  v2URQMDCentralPtPion->Draw("");
  legend.at(iC)->Draw();
  // v2PHSDCentralPtPion->Draw("same PLC PMC");
  v2URQMDCentralPtPion->Draw("same PLC PMC");
  v2LAQGSMCentralPtPion->Draw("same PLC PMC");
  // v2PHQMDCentralPtPion->Draw("same PLC PMC");
  // v2DCMQGSMCentralPtPion->Draw("same PLC PMC");
  grv2CentralPion11GeV.at(0)->Draw("P");
  grv2CentralPion11GeV.at(1)->Draw("P2");
  grv2CentralPion11GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralPtPion11GeV = new TCanvas("canv_v2MidcentralPtPion11GeV", "canv_v2MidcentralPtPion11GeV", 700, 500);
  canv_v2MidcentralPtPion11GeV->cd();

  v2URQMDMidcentralPtPion->GetYaxis()->SetRangeUser(-0.022, 0.18);
  // v2PHSDMidcentralPtPion->SetLineColor(2);
  // v2PHSDMidcentralPtPion->SetMarkerColor(2);
  // v2PHSDMidcentralPtPion->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDMidcentralPtPion->SetLineColor(3);
  // v2URQMDMidcentralPtPion->SetMarkerColor(3);
  v2URQMDMidcentralPtPion->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMMidcentralPtPion->SetLineColor(4);
  // v2LAQGSMMidcentralPtPion->SetMarkerColor(4);
  v2LAQGSMMidcentralPtPion->SetMarkerStyle(kOpenSquare);
  // v2PHQMDMidcentralPtPion->SetMarkerStyle(kOpenDiamond);
  // v2DCMQGSMMidcentralPtPion->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 5<b<9 fm (10-40%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2PHSDMidcentralPtPion, v2PHSDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDMidcentralPtPion, v2URQMDMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMMidcentralPtPion, v2LAQGSMMidcentralPtPion->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDMidcentralPtPion, v2PHQMDMidcentralPtPion->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2DCMQGSMMidcentralPtPion, v2DCMQGSMMidcentralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2MidcentralPion11GeV.at(2), grv2MidcentralPion11GeV.at(2)->GetTitle(), "p");
  v2URQMDMidcentralPtPion->Draw("");
  legend.at(iC)->Draw();
  // v2PHSDMidcentralPtPion->Draw("same PLC PMC");
  v2URQMDMidcentralPtPion->Draw("same PLC PMC");
  v2LAQGSMMidcentralPtPion->Draw("same PLC PMC");
  // v2PHQMDMidcentralPtPion->Draw("same PLC PMC");
  // v2DCMQGSMMidcentralPtPion->Draw("same PLC PMC");
  grv2MidcentralPion11GeV.at(0)->Draw("P");
  // grv2MidcentralPion11GeV.at(1)->Draw("P2");
  grv2MidcentralPion11GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralPtPion11GeV = new TCanvas("canv_v2PeripheralPtPion11GeV", "canv_v2PeripheralPtPion11GeV", 700, 500);
  canv_v2PeripheralPtPion11GeV->cd();

  v2URQMDPeripheralPtPion->GetYaxis()->SetRangeUser(-0.022, 0.25);
  // v2PHSDPeripheralPtPion->SetLineColor(2);
  // v2PHSDPeripheralPtPion->SetMarkerColor(2);
  // v2PHSDPeripheralPtPion->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDPeripheralPtPion->SetLineColor(3);
  // v2URQMDPeripheralPtPion->SetMarkerColor(3);
  v2URQMDPeripheralPtPion->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMPeripheralPtPion->SetLineColor(4);
  // v2LAQGSMPeripheralPtPion->SetMarkerColor(4);
  v2LAQGSMPeripheralPtPion->SetMarkerStyle(kOpenSquare);
  // v2PHQMDPeripheralPtPion->SetMarkerStyle(kOpenDiamond);
  // v2DCMQGSMPeripheralPtPion->SetMarkerStyle(kOpenCross);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=11 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=11 GeV, 9<b<15 fm (40-80%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2PHSDPeripheralPtPion, v2PHSDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDPeripheralPtPion, v2URQMDPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMPeripheralPtPion, v2LAQGSMPeripheralPtPion->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDPeripheralPtPion, v2PHQMDPeripheralPtPion->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2DCMQGSMPeripheralPtPion, v2DCMQGSMPeripheralPtPion->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2PeripheralPion11GeV.at(2), grv2PeripheralPion11GeV.at(2)->GetTitle(), "p");
  v2URQMDPeripheralPtPion->Draw("");
  legend.at(iC)->Draw();
  // v2PHSDPeripheralPtPion->Draw("same PLC PMC");
  v2URQMDPeripheralPtPion->Draw("same PLC PMC");
  v2LAQGSMPeripheralPtPion->Draw("same PLC PMC");
  // v2PHQMDPeripheralPtPion->Draw("same PLC PMC");
  // v2DCMQGSMPeripheralPtPion->Draw("same PLC PMC");
  grv2PeripheralPion11GeV.at(0)->Draw("P");
  grv2PeripheralPion11GeV.at(1)->Draw("P2");
  grv2PeripheralPion11GeV.at(2)->Draw("P3");
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtProton11GeVURQMD = new TCanvas("canv_KinematicsAllPtProton11GeVURQMD", "canv_KinematicsAllPtProton11GeVURQMD", 700, 500);
  canv_KinematicsAllPtProton11GeVURQMD->cd();
  canv_KinematicsAllPtProton11GeVURQMD->SetLogy();
  hURQMDKinematicsAllPtProton->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllPtProton, hURQMDKinematicsAllPtProton->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllPtProton, hURQMDCutsAllPtProton->GetTitle(), "l");
  hURQMDKinematicsAllPtProton->Draw("hist PLC PMC");
  hURQMDCutsAllPtProton->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaProton11GeVURQMD = new TCanvas("canv_KinematicsAllEtaProton11GeVURQMD", "canv_KinematicsAllEtaProton11GeVURQMD", 700, 500);
  canv_KinematicsAllEtaProton11GeVURQMD->cd();
  canv_KinematicsAllEtaProton11GeVURQMD->SetLogy();
  hURQMDKinematicsAllEtaProton->GetYaxis()->SetRangeUser(0.9e5, 5e8);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllEtaProton, hURQMDKinematicsAllEtaProton->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllEtaProton, hURQMDCutsAllEtaProton->GetTitle(), "l");
  hURQMDKinematicsAllEtaProton->Draw("hist PLC PMC");
  hURQMDCutsAllEtaProton->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityProton11GeVURQMD = new TCanvas("canv_KinematicsAllRapidityProton11GeVURQMD", "canv_KinematicsAllRapidityProton11GeVURQMD", 700, 500);
  canv_KinematicsAllRapidityProton11GeVURQMD->cd();
  canv_KinematicsAllRapidityProton11GeVURQMD->SetLogy();
  hURQMDKinematicsAllRapidityProton->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllRapidityProton, hURQMDKinematicsAllRapidityProton->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllRapidityProton, hURQMDCutsAllRapidityProton->GetTitle(), "l");
  hURQMDKinematicsAllRapidityProton->Draw("hist PLC PMC");
  hURQMDCutsAllRapidityProton->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtPion11GeVURQMD = new TCanvas("canv_KinematicsAllPtPion11GeVURQMD", "canv_KinematicsAllPtPion11GeVURQMD", 700, 500);
  canv_KinematicsAllPtPion11GeVURQMD->cd();
  canv_KinematicsAllPtPion11GeVURQMD->SetLogy();
  hURQMDKinematicsAllPtPion->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllPtPion, hURQMDKinematicsAllPtPion->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllPtPion, hURQMDCutsAllPtPion->GetTitle(), "l");
  hURQMDKinematicsAllPtPion->Draw("hist PLC PMC");
  hURQMDCutsAllPtPion->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaPion11GeVURQMD = new TCanvas("canv_KinematicsAllEtaPion11GeVURQMD", "canv_KinematicsAllEtaPion11GeVURQMD", 700, 500);
  canv_KinematicsAllEtaPion11GeVURQMD->cd();
  canv_KinematicsAllEtaPion11GeVURQMD->SetLogy();
  hURQMDKinematicsAllEtaPion->GetYaxis()->SetRangeUser(0.9e5, 5e8);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllEtaPion, hURQMDKinematicsAllEtaPion->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllEtaPion, hURQMDCutsAllEtaPion->GetTitle(), "l");
  hURQMDKinematicsAllEtaPion->Draw("hist PLC PMC");
  hURQMDCutsAllEtaPion->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityPion11GeVURQMD = new TCanvas("canv_KinematicsAllRapidityPion11GeVURQMD", "canv_KinematicsAllRapidityPion11GeVURQMD", 700, 500);
  canv_KinematicsAllRapidityPion11GeVURQMD->cd();
  canv_KinematicsAllRapidityPion11GeVURQMD->SetLogy();
  hURQMDKinematicsAllRapidityPion->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllRapidityPion, hURQMDKinematicsAllRapidityPion->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllRapidityPion, hURQMDCutsAllRapidityPion->GetTitle(), "l");
  hURQMDKinematicsAllRapidityPion->Draw("hist PLC PMC");
  hURQMDCutsAllRapidityPion->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtProton11GeVLAQGSM = new TCanvas("canv_KinematicsAllPtProton11GeVLAQGSM", "canv_KinematicsAllPtProton11GeVLAQGSM", 700, 500);
  canv_KinematicsAllPtProton11GeVLAQGSM->cd();
  canv_KinematicsAllPtProton11GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllPtProton->GetYaxis()->SetRangeUser(0.9e2, 5e7);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllPtProton, hLAQGSMKinematicsAllPtProton->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllPtProton, hLAQGSMCutsAllPtProton->GetTitle(), "l");
  hLAQGSMKinematicsAllPtProton->Draw("hist PLC PMC");
  hLAQGSMCutsAllPtProton->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaProton11GeVLAQGSM = new TCanvas("canv_KinematicsAllEtaProton11GeVLAQGSM", "canv_KinematicsAllEtaProton11GeVLAQGSM", 700, 500);
  canv_KinematicsAllEtaProton11GeVLAQGSM->cd();
  canv_KinematicsAllEtaProton11GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllEtaProton->GetYaxis()->SetRangeUser(0.9e3, 5e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllEtaProton, hLAQGSMKinematicsAllEtaProton->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllEtaProton, hLAQGSMCutsAllEtaProton->GetTitle(), "l");
  hLAQGSMKinematicsAllEtaProton->Draw("hist PLC PMC");
  hLAQGSMCutsAllEtaProton->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityProton11GeVLAQGSM = new TCanvas("canv_KinematicsAllRapidityProton11GeVLAQGSM", "canv_KinematicsAllRapidityProton11GeVLAQGSM", 700, 500);
  canv_KinematicsAllRapidityProton11GeVLAQGSM->cd();
  canv_KinematicsAllRapidityProton11GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllRapidityProton->GetYaxis()->SetRangeUser(0.9e2, 9e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllRapidityProton, hLAQGSMKinematicsAllRapidityProton->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllRapidityProton, hLAQGSMCutsAllRapidityProton->GetTitle(), "l");
  hLAQGSMKinematicsAllRapidityProton->Draw("hist PLC PMC");
  hLAQGSMCutsAllRapidityProton->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtPion11GeVLAQGSM = new TCanvas("canv_KinematicsAllPtPion11GeVLAQGSM", "canv_KinematicsAllPtPion11GeVLAQGSM", 700, 500);
  canv_KinematicsAllPtPion11GeVLAQGSM->cd();
  canv_KinematicsAllPtPion11GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllPtPion->GetYaxis()->SetRangeUser(0.9e2, 5e7);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllPtPion, hLAQGSMKinematicsAllPtPion->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllPtPion, hLAQGSMCutsAllPtPion->GetTitle(), "l");
  hLAQGSMKinematicsAllPtPion->Draw("hist PLC PMC");
  hLAQGSMCutsAllPtPion->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaPion11GeVLAQGSM = new TCanvas("canv_KinematicsAllEtaPion11GeVLAQGSM", "canv_KinematicsAllEtaPion11GeVLAQGSM", 700, 500);
  canv_KinematicsAllEtaPion11GeVLAQGSM->cd();
  canv_KinematicsAllEtaPion11GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllEtaPion->GetYaxis()->SetRangeUser(0.9e3, 5e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllEtaPion, hLAQGSMKinematicsAllEtaPion->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllEtaPion, hLAQGSMCutsAllEtaPion->GetTitle(), "l");
  hLAQGSMKinematicsAllEtaPion->Draw("hist PLC PMC");
  hLAQGSMCutsAllEtaPion->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityPion11GeVLAQGSM = new TCanvas("canv_KinematicsAllRapidityPion11GeVLAQGSM", "canv_KinematicsAllRapidityPion11GeVLAQGSM", 700, 500);
  canv_KinematicsAllRapidityPion11GeVLAQGSM->cd();
  canv_KinematicsAllRapidityPion11GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllRapidityPion->GetYaxis()->SetRangeUser(0.9e2, 9e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllRapidityPion, hLAQGSMKinematicsAllRapidityPion->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllRapidityPion, hLAQGSMCutsAllRapidityPion->GetTitle(), "l");
  hLAQGSMKinematicsAllRapidityPion->Draw("hist PLC PMC");
  hLAQGSMCutsAllRapidityPion->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsRegionsBURQMD = new TCanvas("canv_KinematicsRegionsBURQMD", "canv_KinematicsRegionsBURQMD", 700, 500);
  canv_KinematicsRegionsBURQMD->cd();
  hURQMDKinematicsAllB->GetYaxis()->SetRangeUser(0., 2.8e4);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllB->Draw("hist PLC PMC");
  hURQMDKinematicsCentralB->Draw("same hist PLC PMC");
  hURQMDKinematicsMidcentralB->Draw("same hist PLC PMC");
  hURQMDKinematicsPeripheralB->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsRegionsBLAQGSM = new TCanvas("canv_KinematicsRegionsBLAQGSM", "canv_KinematicsRegionsBLAQGSM", 700, 500);
  canv_KinematicsRegionsBLAQGSM->cd();
  hLAQGSMKinematicsAllB->GetYaxis()->SetRangeUser(0., 2.8e3);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllB->Draw("hist PLC PMC");
  hLAQGSMKinematicsCentralB->Draw("same hist PLC PMC");
  hLAQGSMKinematicsMidcentralB->Draw("same hist PLC PMC");
  hLAQGSMKinematicsPeripheralB->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBMultURQMD = new TCanvas("canv_KinematicsBMultURQMD", "canv_KinematicsBMultURQMD", 700, 500);
  canv_KinematicsBMultURQMD->cd();
  canv_KinematicsBMultURQMD->SetLogz();
  // hURQMDKinematicsAllBMULT->GetYaxis()->SetRangeUser(375, 2500);
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllBMULT->Draw("colz");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBMultLAQGSM = new TCanvas("canv_KinematicsBMultLAQGSM", "canv_KinematicsBMultLAQGSM", 700, 500);
  canv_KinematicsBMultLAQGSM->cd();
  canv_KinematicsBMultLAQGSM->SetLogz();
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllBMULT->Draw("colz");
  legend.at(iC)->Draw();
  
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsEMultURQMD = new TCanvas("canv_KinematicsEMultURQMD", "canv_KinematicsEMultURQMD", 700, 500);
  canv_KinematicsEMultURQMD->cd();
  canv_KinematicsEMultURQMD->SetLogz();
  // hURQMDKinematicsAllEMULT->GetYaxis()->SetRangeUser(375, 2500);
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllEMULT->Draw("colz");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsEMultLAQGSM = new TCanvas("canv_KinematicsEMultLAQGSM", "canv_KinematicsEMultLAQGSM", 700, 500);
  canv_KinematicsEMultLAQGSM->cd();
  canv_KinematicsEMultLAQGSM->SetLogz();
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllEMULT->Draw("colz");
  legend.at(iC)->Draw();
  
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBEURQMD = new TCanvas("canv_KinematicsBEURQMD", "canv_KinematicsBEURQMD", 700, 500);
  canv_KinematicsBEURQMD->cd();
  canv_KinematicsBEURQMD->SetLogz();
  // hURQMDKinematicsAllBE->GetYaxis()->SetRangeUser(375, 2500);
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllBE->Draw("colz");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBELAQGSM = new TCanvas("canv_KinematicsBELAQGSM", "canv_KinematicsBELAQGSM", 700, 500);
  canv_KinematicsBELAQGSM->cd();
  canv_KinematicsBELAQGSM->SetLogz();
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=11 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllBE->Draw("colz");
  legend.at(iC)->Draw();


  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1CentralRapidityProton7GeV = new TCanvas("canv_v1CentralRapidityProton7GeV", "canv_v1CentralRapidityProton7GeV", 700, 500);
  canv_v1CentralRapidityProton7GeV->cd();

  v1URQMDCentralRapidityProton7GeV->GetYaxis()->SetRangeUser(2*-0.05, 0.076*2);
  // v1URQMDCentralRapidityProton7GeV->SetLineColor(2);
  // v1URQMDCentralRapidityProton7GeV->SetMarkerColor(2);
  // v1DCMQGSMCentralRapidityProton7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDCentralRapidityProton7GeV->SetLineColor(3);
  // v1URQMDCentralRapidityProton7GeV->SetMarkerColor(3);
  v1URQMDCentralRapidityProton7GeV->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMCentralRapidityProton7GeV->SetLineColor(4);
  // v1LAQGSMCentralRapidityProton7GeV->SetMarkerColor(4);
  v1LAQGSMCentralRapidityProton7GeV->SetMarkerStyle(kOpenSquare);
  // v1PHQMDCentralRapidityProton7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v1DCMQGSMCentralRapidityProton7GeV, v1DCMQGSMCentralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1URQMDCentralRapidityProton7GeV, v1URQMDCentralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1LAQGSMCentralRapidityProton7GeV, v1LAQGSMCentralRapidityProton7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v1PHQMDCentralRapidityProton7GeV, v1PHQMDCentralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv1CentralProton7GeV.at(0), grv1CentralProton7GeV.at(0)->GetTitle(), "p");
  v1URQMDCentralRapidityProton7GeV->Draw("");
  legend.at(iC)->Draw();
  // v1DCMQGSMCentralRapidityProton7GeV->Draw("same PLC PMC");
  v1URQMDCentralRapidityProton7GeV->Draw("same PLC PMC");
  v1LAQGSMCentralRapidityProton7GeV->Draw("same PLC PMC");
  // v1PHQMDCentralRapidityProton7GeV->Draw("same PLC PMC");
  grv1CentralProton7GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDCentralRapidityProton7GeV->GetXaxis()->GetXmin(), 0., v1URQMDCentralRapidityProton7GeV->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1MidcentralRapidityProton7GeV = new TCanvas("canv_v1MidcentralRapidityProton7GeV", "canv_v1MidcentralRapidityProton7GeV", 700, 500);
  canv_v1MidcentralRapidityProton7GeV->cd();

  v1URQMDMidcentralRapidityProton7GeV->GetYaxis()->SetRangeUser(2*-0.05, 0.076*2);
  // v1URQMDMidcentralRapidityProton7GeV->SetLineColor(2);
  // v1URQMDMidcentralRapidityProton7GeV->SetMarkerColor(2);
  // v1DCMQGSMMidcentralRapidityProton7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDMidcentralRapidityProton7GeV->SetLineColor(3);
  // v1URQMDMidcentralRapidityProton7GeV->SetMarkerColor(3);
  v1URQMDMidcentralRapidityProton7GeV->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMMidcentralRapidityProton7GeV->SetLineColor(4);
  // v1LAQGSMMidcentralRapidityProton7GeV->SetMarkerColor(4);
  v1LAQGSMMidcentralRapidityProton7GeV->SetMarkerStyle(kOpenSquare);
  // v1PHQMDMidcentralRapidityProton7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 5<b<9 fm (10-40%) Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v1DCMQGSMMidcentralRapidityProton7GeV, v1DCMQGSMMidcentralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1URQMDMidcentralRapidityProton7GeV, v1URQMDMidcentralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1LAQGSMMidcentralRapidityProton7GeV, v1LAQGSMMidcentralRapidityProton7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v1PHQMDMidcentralRapidityProton7GeV, v1PHQMDMidcentralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv1MidcentralProton7GeV.at(0), grv1MidcentralProton7GeV.at(0)->GetTitle(), "p");
  v1URQMDMidcentralRapidityProton7GeV->Draw("");
  legend.at(iC)->Draw();
  // v1DCMQGSMMidcentralRapidityProton7GeV->Draw("same PLC PMC");
  v1URQMDMidcentralRapidityProton7GeV->Draw("same PLC PMC");
  v1LAQGSMMidcentralRapidityProton7GeV->Draw("same PLC PMC");
  // v1PHQMDMidcentralRapidityProton7GeV->Draw("same PLC PMC");
  grv1MidcentralProton7GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDMidcentralRapidityProton7GeV->GetXaxis()->GetXmin(), 0., v1URQMDMidcentralRapidityProton7GeV->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1PeripheralRapidityProton7GeV = new TCanvas("canv_v1PeripheralRapidityProton7GeV", "canv_v1PeripheralRapidityProton7GeV", 700, 500);
  canv_v1PeripheralRapidityProton7GeV->cd();

  v1URQMDPeripheralRapidityProton7GeV->GetYaxis()->SetRangeUser(2*-0.05, 0.076*2);
  // v1URQMDPeripheralRapidityProton7GeV->SetLineColor(2);
  // v1URQMDPeripheralRapidityProton7GeV->SetMarkerColor(2);
  // v1DCMQGSMPeripheralRapidityProton7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDPeripheralRapidityProton7GeV->SetLineColor(3);
  // v1URQMDPeripheralRapidityProton7GeV->SetMarkerColor(3);
  v1URQMDPeripheralRapidityProton7GeV->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMPeripheralRapidityProton7GeV->SetLineColor(4);
  // v1LAQGSMPeripheralRapidityProton7GeV->SetMarkerColor(4);
  v1LAQGSMPeripheralRapidityProton7GeV->SetMarkerStyle(kOpenSquare);
  // v1PHQMDPeripheralRapidityProton7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 9<b<15 fm (40-80%) Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v1DCMQGSMPeripheralRapidityProton7GeV, v1DCMQGSMPeripheralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1URQMDPeripheralRapidityProton7GeV, v1URQMDPeripheralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1LAQGSMPeripheralRapidityProton7GeV, v1LAQGSMPeripheralRapidityProton7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v1PHQMDPeripheralRapidityProton7GeV, v1PHQMDPeripheralRapidityProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv1PeripheralProton7GeV.at(0), grv1PeripheralProton7GeV.at(0)->GetTitle(), "p");
  v1URQMDPeripheralRapidityProton7GeV->Draw("");
  legend.at(iC)->Draw();
  // v1DCMQGSMPeripheralRapidityProton7GeV->Draw("same PLC PMC");
  v1URQMDPeripheralRapidityProton7GeV->Draw("same PLC PMC");
  v1LAQGSMPeripheralRapidityProton7GeV->Draw("same PLC PMC");
  // v1PHQMDPeripheralRapidityProton7GeV->Draw("same PLC PMC");
  grv1PeripheralProton7GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDPeripheralRapidityProton7GeV->GetXaxis()->GetXmin(), 0., v1URQMDPeripheralRapidityProton7GeV->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1CentralRapidityPion7GeV = new TCanvas("canv_v1CentralRapidityPion7GeV", "canv_v1CentralRapidityPion7GeV", 700, 500);
  canv_v1CentralRapidityPion7GeV->cd();

  v1URQMDCentralRapidityPion7GeV->GetYaxis()->SetRangeUser(2*-0.05, 0.076*2);
  // v1URQMDCentralRapidityPion7GeV->SetLineColor(2);
  // v1URQMDCentralRapidityPion7GeV->SetMarkerColor(2);
  // v1DCMQGSMCentralRapidityPion7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDCentralRapidityPion7GeV->SetLineColor(3);
  // v1URQMDCentralRapidityPion7GeV->SetMarkerColor(3);
  v1URQMDCentralRapidityPion7GeV->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMCentralRapidityPion7GeV->SetLineColor(4);
  // v1LAQGSMCentralRapidityPion7GeV->SetMarkerColor(4);
  v1LAQGSMCentralRapidityPion7GeV->SetMarkerStyle(kOpenSquare);
  // v1PHQMDCentralRapidityPion7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v1DCMQGSMCentralRapidityPion7GeV, v1DCMQGSMCentralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1URQMDCentralRapidityPion7GeV, v1URQMDCentralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1LAQGSMCentralRapidityPion7GeV, v1LAQGSMCentralRapidityPion7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v1PHQMDCentralRapidityPion7GeV, v1PHQMDCentralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv1CentralPion7GeV.at(0), grv1CentralPion7GeV.at(0)->GetTitle(), "p");
  v1URQMDCentralRapidityPion7GeV->Draw("");
  legend.at(iC)->Draw();
  // v1DCMQGSMCentralRapidityPion7GeV->Draw("same PLC PMC");
  v1URQMDCentralRapidityPion7GeV->Draw("same PLC PMC");
  v1LAQGSMCentralRapidityPion7GeV->Draw("same PLC PMC");
  // v1PHQMDCentralRapidityPion7GeV->Draw("same PLC PMC");
  grv1CentralPion7GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDCentralRapidityPion7GeV->GetXaxis()->GetXmin(), 0., v1URQMDCentralRapidityPion7GeV->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1MidcentralRapidityPion7GeV = new TCanvas("canv_v1MidcentralRapidityPion7GeV", "canv_v1MidcentralRapidityPion7GeV", 700, 500);
  canv_v1MidcentralRapidityPion7GeV->cd();

  v1URQMDMidcentralRapidityPion7GeV->GetYaxis()->SetRangeUser(2*-0.05, 0.076*2);
  // v1URQMDMidcentralRapidityPion7GeV->SetLineColor(2);
  // v1URQMDMidcentralRapidityPion7GeV->SetMarkerColor(2);
  // v1DCMQGSMMidcentralRapidityPion7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDMidcentralRapidityPion7GeV->SetLineColor(3);
  // v1URQMDMidcentralRapidityPion7GeV->SetMarkerColor(3);
  v1URQMDMidcentralRapidityPion7GeV->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMMidcentralRapidityPion7GeV->SetLineColor(4);
  // v1LAQGSMMidcentralRapidityPion7GeV->SetMarkerColor(4);
  v1LAQGSMMidcentralRapidityPion7GeV->SetMarkerStyle(kOpenSquare);
  // v1PHQMDMidcentralRapidityPion7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 5<b<9 fm (10-40%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v1DCMQGSMMidcentralRapidityPion7GeV, v1DCMQGSMMidcentralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1URQMDMidcentralRapidityPion7GeV, v1URQMDMidcentralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1LAQGSMMidcentralRapidityPion7GeV, v1LAQGSMMidcentralRapidityPion7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v1PHQMDMidcentralRapidityPion7GeV, v1PHQMDMidcentralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv1MidcentralPion7GeV.at(0), grv1MidcentralPion7GeV.at(0)->GetTitle(), "p");
  v1URQMDMidcentralRapidityPion7GeV->Draw("");
  legend.at(iC)->Draw();
  // v1DCMQGSMMidcentralRapidityPion7GeV->Draw("same PLC PMC");
  v1URQMDMidcentralRapidityPion7GeV->Draw("same PLC PMC");
  v1LAQGSMMidcentralRapidityPion7GeV->Draw("same PLC PMC");
  // v1PHQMDMidcentralRapidityPion7GeV->Draw("same PLC PMC");
  grv1MidcentralPion7GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDMidcentralRapidityPion7GeV->GetXaxis()->GetXmin(), 0., v1URQMDMidcentralRapidityPion7GeV->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v1PeripheralRapidityPion7GeV = new TCanvas("canv_v1PeripheralRapidityPion7GeV", "canv_v1PeripheralRapidityPion7GeV", 700, 500);
  canv_v1PeripheralRapidityPion7GeV->cd();

  v1URQMDPeripheralRapidityPion7GeV->GetYaxis()->SetRangeUser(2*-0.05, 0.076*2);
  // v1URQMDPeripheralRapidityPion7GeV->SetLineColor(2);
  // v1URQMDPeripheralRapidityPion7GeV->SetMarkerColor(2);
  // v1DCMQGSMPeripheralRapidityPion7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v1URQMDPeripheralRapidityPion7GeV->SetLineColor(3);
  // v1URQMDPeripheralRapidityPion7GeV->SetMarkerColor(3);
  v1URQMDPeripheralRapidityPion7GeV->SetMarkerStyle(kOpenCircle);
  // v1LAQGSMPeripheralRapidityPion7GeV->SetLineColor(4);
  // v1LAQGSMPeripheralRapidityPion7GeV->SetMarkerColor(4);
  v1LAQGSMPeripheralRapidityPion7GeV->SetMarkerStyle(kOpenSquare);
  // v1PHQMDPeripheralRapidityPion7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 9<b<15 fm (40-80%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v1DCMQGSMPeripheralRapidityPion7GeV, v1DCMQGSMPeripheralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1URQMDPeripheralRapidityPion7GeV, v1URQMDPeripheralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v1LAQGSMPeripheralRapidityPion7GeV, v1LAQGSMPeripheralRapidityPion7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v1PHQMDPeripheralRapidityPion7GeV, v1PHQMDPeripheralRapidityPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv1PeripheralPion7GeV.at(0), grv1PeripheralPion7GeV.at(0)->GetTitle(), "p");
  v1URQMDPeripheralRapidityPion7GeV->Draw("");
  legend.at(iC)->Draw();
  // v1DCMQGSMPeripheralRapidityPion7GeV->Draw("same PLC PMC");
  v1URQMDPeripheralRapidityPion7GeV->Draw("same PLC PMC");
  v1LAQGSMPeripheralRapidityPion7GeV->Draw("same PLC PMC");
  // v1PHQMDPeripheralRapidityPion7GeV->Draw("same PLC PMC");
  grv1PeripheralPion7GeV.at(0)->Draw("P");
  line.DrawLine(v1URQMDPeripheralRapidityPion7GeV->GetXaxis()->GetXmin(), 0., v1URQMDPeripheralRapidityPion7GeV->GetXaxis()->GetXmax(), 0.);

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralPtProton7GeV = new TCanvas("canv_v2CentralPtProton7GeV", "canv_v2CentralPtProton7GeV", 700, 500);
  canv_v2CentralPtProton7GeV->cd();

  v2URQMDCentralPtProton7GeV->GetYaxis()->SetRangeUser(-0.012, 0.08);
  v2URQMDCentralPtProton7GeV->GetXaxis()->SetRangeUser(0.21, 2.);
  // v2URQMDCentralPtProton7GeV->GetYaxis()->SetNdivisions(504);
  // v2DCMQGSMCentralPtProton7GeV->SetLineColor(2);
  // v2DCMQGSMCentralPtProton7GeV->SetMarkerColor(2);
  // v2DCMQGSMCentralPtProton7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDCentralPtProton7GeV->SetLineColor(3);
  // v2URQMDCentralPtProton7GeV->SetMarkerColor(3);
  v2URQMDCentralPtProton7GeV->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMCentralPtProton7GeV->SetLineColor(4);
  // v2LAQGSMCentralPtProton7GeV->SetMarkerColor(4);
  v2LAQGSMCentralPtProton7GeV->SetMarkerStyle(kOpenSquare);
  // v2PHQMDCentralPtProton7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2DCMQGSMCentralPtProton7GeV, v2DCMQGSMCentralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDCentralPtProton7GeV, v2URQMDCentralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMCentralPtProton7GeV, v2LAQGSMCentralPtProton7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDCentralPtProton7GeV, v2PHQMDCentralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2CentralProton7GeV.at(2), grv2CentralProton7GeV.at(2)->GetTitle(), "p");
  v2URQMDCentralPtProton7GeV->Draw("");
  legend.at(iC)->Draw();
  // v2DCMQGSMCentralPtProton7GeV->Draw("same PLC PMC");
  v2URQMDCentralPtProton7GeV->Draw("same PLC PMC");
  v2LAQGSMCentralPtProton7GeV->Draw("same PLC PMC");
  // v2PHQMDCentralPtProton7GeV->Draw("same PLC PMC");
  grv2CentralProton7GeV.at(0)->Draw("P");
  grv2CentralProton7GeV.at(1)->Draw("P2");
  grv2CentralProton7GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralPtProton7GeV = new TCanvas("canv_v2MidcentralPtProton7GeV", "canv_v2MidcentralPtProton7GeV", 700, 500);
  canv_v2MidcentralPtProton7GeV->cd();

  v2URQMDMidcentralPtProton7GeV->GetYaxis()->SetRangeUser(-0.039, 0.18);
  v2URQMDMidcentralPtProton7GeV->GetXaxis()->SetRangeUser(0.21, 2.);
  // v2DCMQGSMMidcentralPtProton7GeV->SetLineColor(2);
  // v2DCMQGSMMidcentralPtProton7GeV->SetMarkerColor(2);
  // v2DCMQGSMMidcentralPtProton7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDMidcentralPtProton7GeV->SetLineColor(3);
  // v2URQMDMidcentralPtProton7GeV->SetMarkerColor(3);
  v2URQMDMidcentralPtProton7GeV->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMMidcentralPtProton7GeV->SetLineColor(4);
  // v2LAQGSMMidcentralPtProton7GeV->SetMarkerColor(4);
  v2LAQGSMMidcentralPtProton7GeV->SetMarkerStyle(kOpenSquare);
  // v2PHQMDMidcentralPtProton7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 5<b<9 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2DCMQGSMMidcentralPtProton7GeV, v2DCMQGSMMidcentralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDMidcentralPtProton7GeV, v2URQMDMidcentralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMMidcentralPtProton7GeV, v2LAQGSMMidcentralPtProton7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDMidcentralPtProton7GeV, v2PHQMDMidcentralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2MidcentralProton7GeV.at(2), grv2MidcentralProton7GeV.at(2)->GetTitle(), "p");
  v2URQMDMidcentralPtProton7GeV->Draw("");
  legend.at(iC)->Draw();
  // v2DCMQGSMMidcentralPtProton7GeV->Draw("same PLC PMC");
  v2URQMDMidcentralPtProton7GeV->Draw("same PLC PMC");
  v2LAQGSMMidcentralPtProton7GeV->Draw("same PLC PMC");
  // v2PHQMDMidcentralPtProton7GeV->Draw("same PLC PMC");
  grv2MidcentralProton7GeV.at(0)->Draw("P");
  grv2MidcentralProton7GeV.at(1)->Draw("P2");
  grv2MidcentralProton7GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralPtProton7GeV = new TCanvas("canv_v2PeripheralPtProton7GeV", "canv_v2PeripheralPtProton7GeV", 700, 500);
  canv_v2PeripheralPtProton7GeV->cd();

  v2URQMDPeripheralPtProton7GeV->GetYaxis()->SetRangeUser(-0.039, 0.18);
  v2URQMDPeripheralPtProton7GeV->GetXaxis()->SetRangeUser(0.21, 2.);
  // v2DCMQGSMPeripheralPtProton7GeV->SetLineColor(2);
  // v2DCMQGSMPeripheralPtProton7GeV->SetMarkerColor(2);
  // v2DCMQGSMPeripheralPtProton7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDPeripheralPtProton7GeV->SetLineColor(3);
  // v2URQMDPeripheralPtProton7GeV->SetMarkerColor(3);
  v2URQMDPeripheralPtProton7GeV->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMPeripheralPtProton7GeV->SetLineColor(4);
  // v2LAQGSMPeripheralPtProton7GeV->SetMarkerColor(4);
  v2LAQGSMPeripheralPtProton7GeV->SetMarkerStyle(kOpenSquare);
  // v2PHQMDPeripheralPtProton7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Protons");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 9<b<15 fm (0-10%) Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2DCMQGSMPeripheralPtProton7GeV, v2DCMQGSMPeripheralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDPeripheralPtProton7GeV, v2URQMDPeripheralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMPeripheralPtProton7GeV, v2LAQGSMPeripheralPtProton7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDPeripheralPtProton7GeV, v2PHQMDPeripheralPtProton7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2PeripheralProton7GeV.at(2), grv2PeripheralProton7GeV.at(2)->GetTitle(), "p");
  v2URQMDPeripheralPtProton7GeV->Draw("");
  legend.at(iC)->Draw();
  // v2DCMQGSMPeripheralPtProton7GeV->Draw("same PLC PMC");
  v2URQMDPeripheralPtProton7GeV->Draw("same PLC PMC");
  v2LAQGSMPeripheralPtProton7GeV->Draw("same PLC PMC");
  // v2PHQMDPeripheralPtProton7GeV->Draw("same PLC PMC");
  grv2PeripheralProton7GeV.at(0)->Draw("P");
  grv2PeripheralProton7GeV.at(1)->Draw("P2");
  grv2PeripheralProton7GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2CentralPtPion7GeV = new TCanvas("canv_v2CentralPtPion7GeV", "canv_v2CentralPtPion7GeV", 700, 500);
  canv_v2CentralPtPion7GeV->cd();

  v2URQMDCentralPtPion7GeV->GetYaxis()->SetRangeUser(-0.039, 0.08);
  v2URQMDCentralPtPion7GeV->GetXaxis()->SetRangeUser(0.21, 1.59);
  // v2DCMQGSMCentralPtPion7GeV->SetLineColor(2);
  // v2DCMQGSMCentralPtPion7GeV->SetMarkerColor(2);
  // v2DCMQGSMCentralPtPion7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDCentralPtPion7GeV->SetLineColor(3);
  // v2URQMDCentralPtPion7GeV->SetMarkerColor(3);
  v2URQMDCentralPtPion7GeV->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMCentralPtPion7GeV->SetLineColor(4);
  // v2LAQGSMCentralPtPion7GeV->SetMarkerColor(4);
  v2LAQGSMCentralPtPion7GeV->SetMarkerStyle(kOpenSquare);
  // v2PHQMDCentralPtPion7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2DCMQGSMCentralPtPion7GeV, v2DCMQGSMCentralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDCentralPtPion7GeV, v2URQMDCentralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMCentralPtPion7GeV, v2LAQGSMCentralPtPion7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDCentralPtPion7GeV, v2PHQMDCentralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2CentralPion7GeV.at(2), grv2CentralPion7GeV.at(2)->GetTitle(), "p");
  v2URQMDCentralPtPion7GeV->Draw("");
  legend.at(iC)->Draw();
  // v2DCMQGSMCentralPtPion7GeV->Draw("same PLC PMC");
  v2URQMDCentralPtPion7GeV->Draw("same PLC PMC");
  v2LAQGSMCentralPtPion7GeV->Draw("same PLC PMC");
  // v2PHQMDCentralPtPion7GeV->Draw("same PLC PMC");
  grv2CentralPion7GeV.at(0)->Draw("P");
  grv2CentralPion7GeV.at(1)->Draw("P2");
  grv2CentralPion7GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2MidcentralPtPion7GeV = new TCanvas("canv_v2MidcentralPtPion7GeV", "canv_v2MidcentralPtPion7GeV", 700, 500);
  canv_v2MidcentralPtPion7GeV->cd();

  v2URQMDMidcentralPtPion7GeV->GetYaxis()->SetRangeUser(-0.039, 0.18);
  v2URQMDMidcentralPtPion7GeV->GetXaxis()->SetRangeUser(0.21, 1.59);
  // v2DCMQGSMMidcentralPtPion7GeV->SetLineColor(2);
  // v2DCMQGSMMidcentralPtPion7GeV->SetMarkerColor(2);
  // v2DCMQGSMMidcentralPtPion7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDMidcentralPtPion7GeV->SetLineColor(3);
  // v2URQMDMidcentralPtPion7GeV->SetMarkerColor(3);
  v2URQMDMidcentralPtPion7GeV->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMMidcentralPtPion7GeV->SetLineColor(4);
  // v2LAQGSMMidcentralPtPion7GeV->SetMarkerColor(4);
  v2LAQGSMMidcentralPtPion7GeV->SetMarkerStyle(kOpenSquare);
  // v2PHQMDMidcentralPtPion7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 5<b<9 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2DCMQGSMMidcentralPtPion7GeV, v2DCMQGSMMidcentralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDMidcentralPtPion7GeV, v2URQMDMidcentralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMMidcentralPtPion7GeV, v2LAQGSMMidcentralPtPion7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDMidcentralPtPion7GeV, v2PHQMDMidcentralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2MidcentralPion7GeV.at(2), grv2MidcentralPion7GeV.at(2)->GetTitle(), "p");
  v2URQMDMidcentralPtPion7GeV->Draw("");
  legend.at(iC)->Draw();
  // v2DCMQGSMMidcentralPtPion7GeV->Draw("same PLC PMC");
  v2URQMDMidcentralPtPion7GeV->Draw("same PLC PMC");
  v2LAQGSMMidcentralPtPion7GeV->Draw("same PLC PMC");
  // v2PHQMDMidcentralPtPion7GeV->Draw("same PLC PMC");
  grv2MidcentralPion7GeV.at(0)->Draw("P");
  grv2MidcentralPion7GeV.at(1)->Draw("P2");
  grv2MidcentralPion7GeV.at(2)->Draw("P3");

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_v2PeripheralPtPion7GeV = new TCanvas("canv_v2PeripheralPtPion7GeV", "canv_v2PeripheralPtPion7GeV", 700, 500);
  canv_v2PeripheralPtPion7GeV->cd();

  v2URQMDPeripheralPtPion7GeV->GetYaxis()->SetRangeUser(-0.029, 0.18);
  v2URQMDPeripheralPtPion7GeV->GetXaxis()->SetRangeUser(0.21, 1.59);
  // v2DCMQGSMPeripheralPtPion7GeV->SetLineColor(2);
  // v2DCMQGSMPeripheralPtPion7GeV->SetMarkerColor(2);
  // v2DCMQGSMPeripheralPtPion7GeV->SetMarkerStyle(kOpenTriangleUp);
  // v2URQMDPeripheralPtPion7GeV->SetLineColor(3);
  // v2URQMDPeripheralPtPion7GeV->SetMarkerColor(3);
  v2URQMDPeripheralPtPion7GeV->SetMarkerStyle(kOpenCircle);
  // v2LAQGSMPeripheralPtPion7GeV->SetLineColor(4);
  // v2LAQGSMPeripheralPtPion7GeV->SetMarkerColor(4);
  v2LAQGSMPeripheralPtPion7GeV->SetMarkerStyle(kOpenSquare);
  // v2PHQMDPeripheralPtPion7GeV->SetMarkerStyle(kOpenDiamond);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  // ltitle.DrawLatex(legCoordX.first, legCoordY.second + 0.05, "Au+Au, #sqrt{s_{NN}}=7 GeV, 0<b<5 fm (0-10%) Pions");
  legend.at(iC)->SetHeader("Au+Au, #sqrt{s_{NN}}=7 GeV, 9<b<15 fm (0-10%) Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->SetNColumns(3);
  // legend.at(iC)->AddEntry(v2DCMQGSMPeripheralPtPion7GeV, v2DCMQGSMPeripheralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2URQMDPeripheralPtPion7GeV, v2URQMDPeripheralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(v2LAQGSMPeripheralPtPion7GeV, v2LAQGSMPeripheralPtPion7GeV->GetTitle(), "p");
  // legend.at(iC)->AddEntry(v2PHQMDPeripheralPtPion7GeV, v2PHQMDPeripheralPtPion7GeV->GetTitle(), "p");
  legend.at(iC)->AddEntry(grv2PeripheralPion7GeV.at(2), grv2PeripheralPion7GeV.at(2)->GetTitle(), "p");
  v2URQMDPeripheralPtPion7GeV->Draw("");
  legend.at(iC)->Draw();
  // v2DCMQGSMPeripheralPtPion7GeV->Draw("same PLC PMC");
  v2URQMDPeripheralPtPion7GeV->Draw("same PLC PMC");
  v2LAQGSMPeripheralPtPion7GeV->Draw("same PLC PMC");
  // v2PHQMDPeripheralPtPion7GeV->Draw("same PLC PMC");
  grv2PeripheralPion7GeV.at(0)->Draw("P");
  grv2PeripheralPion7GeV.at(1)->Draw("P2");
  grv2PeripheralPion7GeV.at(2)->Draw("P3");
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtProton7GeVURQMD = new TCanvas("canv_KinematicsAllPtProton7GeVURQMD", "canv_KinematicsAllPtProton7GeVURQMD", 700, 500);
  canv_KinematicsAllPtProton7GeVURQMD->cd();
  canv_KinematicsAllPtProton7GeVURQMD->SetLogy();
  hURQMDKinematicsAllPtProton7GeV->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllPtProton7GeV, hURQMDKinematicsAllPtProton7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllPtProton7GeV, hURQMDCutsAllPtProton7GeV->GetTitle(), "l");
  hURQMDKinematicsAllPtProton7GeV->Draw("hist PLC PMC");
  hURQMDCutsAllPtProton7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaProton7GeVURQMD = new TCanvas("canv_KinematicsAllEtaProton7GeVURQMD", "canv_KinematicsAllEtaProton7GeVURQMD", 700, 500);
  canv_KinematicsAllEtaProton7GeVURQMD->cd();
  canv_KinematicsAllEtaProton7GeVURQMD->SetLogy();
  hURQMDKinematicsAllEtaProton7GeV->GetYaxis()->SetRangeUser(0.9e5, 5e8);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllEtaProton7GeV, hURQMDKinematicsAllEtaProton7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllEtaProton7GeV, hURQMDCutsAllEtaProton7GeV->GetTitle(), "l");
  hURQMDKinematicsAllEtaProton7GeV->Draw("hist PLC PMC");
  hURQMDCutsAllEtaProton7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityProton7GeVURQMD = new TCanvas("canv_KinematicsAllRapidityProton7GeVURQMD", "canv_KinematicsAllRapidityProton7GeVURQMD", 700, 500);
  canv_KinematicsAllRapidityProton7GeVURQMD->cd();
  canv_KinematicsAllRapidityProton7GeVURQMD->SetLogy();
  hURQMDKinematicsAllRapidityProton7GeV->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllRapidityProton7GeV, hURQMDKinematicsAllRapidityProton7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllRapidityProton7GeV, hURQMDCutsAllRapidityProton7GeV->GetTitle(), "l");
  hURQMDKinematicsAllRapidityProton7GeV->Draw("hist PLC PMC");
  hURQMDCutsAllRapidityProton7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtPion7GeVURQMD = new TCanvas("canv_KinematicsAllPtPion7GeVURQMD", "canv_KinematicsAllPtPion7GeVURQMD", 700, 500);
  canv_KinematicsAllPtPion7GeVURQMD->cd();
  canv_KinematicsAllPtPion7GeVURQMD->SetLogy();
  hURQMDKinematicsAllPtPion7GeV->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllPtPion7GeV, hURQMDKinematicsAllPtPion7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllPtPion7GeV, hURQMDCutsAllPtPion7GeV->GetTitle(), "l");
  hURQMDKinematicsAllPtPion7GeV->Draw("hist PLC PMC");
  hURQMDCutsAllPtPion7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaPion7GeVURQMD = new TCanvas("canv_KinematicsAllEtaPion7GeVURQMD", "canv_KinematicsAllEtaPion7GeVURQMD", 700, 500);
  canv_KinematicsAllEtaPion7GeVURQMD->cd();
  canv_KinematicsAllEtaPion7GeVURQMD->SetLogy();
  hURQMDKinematicsAllEtaPion7GeV->GetYaxis()->SetRangeUser(0.9e5, 5e8);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllEtaPion7GeV, hURQMDKinematicsAllEtaPion7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllEtaPion7GeV, hURQMDCutsAllEtaPion7GeV->GetTitle(), "l");
  hURQMDKinematicsAllEtaPion7GeV->Draw("hist PLC PMC");
  hURQMDCutsAllEtaPion7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityPion7GeVURQMD = new TCanvas("canv_KinematicsAllRapidityPion7GeVURQMD", "canv_KinematicsAllRapidityPion7GeVURQMD", 700, 500);
  canv_KinematicsAllRapidityPion7GeVURQMD->cd();
  canv_KinematicsAllRapidityPion7GeVURQMD->SetLogy();
  hURQMDKinematicsAllRapidityPion7GeV->GetYaxis()->SetRangeUser(0.9e3, 5e9);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllRapidityPion7GeV, hURQMDKinematicsAllRapidityPion7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hURQMDCutsAllRapidityPion7GeV, hURQMDCutsAllRapidityPion7GeV->GetTitle(), "l");
  hURQMDKinematicsAllRapidityPion7GeV->Draw("hist PLC PMC");
  hURQMDCutsAllRapidityPion7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtProton7GeVLAQGSM = new TCanvas("canv_KinematicsAllPtProton7GeVLAQGSM", "canv_KinematicsAllPtProton7GeVLAQGSM", 700, 500);
  canv_KinematicsAllPtProton7GeVLAQGSM->cd();
  canv_KinematicsAllPtProton7GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllPtProton7GeV->GetYaxis()->SetRangeUser(0.9e2, 5e7);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllPtProton7GeV, hLAQGSMKinematicsAllPtProton7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllPtProton7GeV, hLAQGSMCutsAllPtProton7GeV->GetTitle(), "l");
  hLAQGSMKinematicsAllPtProton7GeV->Draw("hist PLC PMC");
  hLAQGSMCutsAllPtProton7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaProton7GeVLAQGSM = new TCanvas("canv_KinematicsAllEtaProton7GeVLAQGSM", "canv_KinematicsAllEtaProton7GeVLAQGSM", 700, 500);
  canv_KinematicsAllEtaProton7GeVLAQGSM->cd();
  canv_KinematicsAllEtaProton7GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllEtaProton7GeV->GetYaxis()->SetRangeUser(0.9e3, 5e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllEtaProton7GeV, hLAQGSMKinematicsAllEtaProton7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllEtaProton7GeV, hLAQGSMCutsAllEtaProton7GeV->GetTitle(), "l");
  hLAQGSMKinematicsAllEtaProton7GeV->Draw("hist PLC PMC");
  hLAQGSMCutsAllEtaProton7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityProton7GeVLAQGSM = new TCanvas("canv_KinematicsAllRapidityProton7GeVLAQGSM", "canv_KinematicsAllRapidityProton7GeVLAQGSM", 700, 500);
  canv_KinematicsAllRapidityProton7GeVLAQGSM->cd();
  canv_KinematicsAllRapidityProton7GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllRapidityProton7GeV->GetYaxis()->SetRangeUser(0.9e2, 9e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Protons", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllRapidityProton7GeV, hLAQGSMKinematicsAllRapidityProton7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllRapidityProton7GeV, hLAQGSMCutsAllRapidityProton7GeV->GetTitle(), "l");
  hLAQGSMKinematicsAllRapidityProton7GeV->Draw("hist PLC PMC");
  hLAQGSMCutsAllRapidityProton7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllPtPion7GeVLAQGSM = new TCanvas("canv_KinematicsAllPtPion7GeVLAQGSM", "canv_KinematicsAllPtPion7GeVLAQGSM", 700, 500);
  canv_KinematicsAllPtPion7GeVLAQGSM->cd();
  canv_KinematicsAllPtPion7GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllPtPion7GeV->GetYaxis()->SetRangeUser(0.9e2, 5e7);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllPtPion7GeV, hLAQGSMKinematicsAllPtPion7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllPtPion7GeV, hLAQGSMCutsAllPtPion7GeV->GetTitle(), "l");
  hLAQGSMKinematicsAllPtPion7GeV->Draw("hist PLC PMC");
  hLAQGSMCutsAllPtPion7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllEtaPion7GeVLAQGSM = new TCanvas("canv_KinematicsAllEtaPion7GeVLAQGSM", "canv_KinematicsAllEtaPion7GeVLAQGSM", 700, 500);
  canv_KinematicsAllEtaPion7GeVLAQGSM->cd();
  canv_KinematicsAllEtaPion7GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllEtaPion7GeV->GetYaxis()->SetRangeUser(0.9e3, 5e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllEtaPion7GeV, hLAQGSMKinematicsAllEtaPion7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllEtaPion7GeV, hLAQGSMCutsAllEtaPion7GeV->GetTitle(), "l");
  hLAQGSMKinematicsAllEtaPion7GeV->Draw("hist PLC PMC");
  hLAQGSMCutsAllEtaPion7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsAllRapidityPion7GeVLAQGSM = new TCanvas("canv_KinematicsAllRapidityPion7GeVLAQGSM", "canv_KinematicsAllRapidityPion7GeVLAQGSM", 700, 500);
  canv_KinematicsAllRapidityPion7GeVLAQGSM->cd();
  canv_KinematicsAllRapidityPion7GeVLAQGSM->SetLogy();
  hLAQGSMKinematicsAllRapidityPion7GeV->GetYaxis()->SetRangeUser(0.9e2, 9e6);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm, Pions", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllRapidityPion7GeV, hLAQGSMKinematicsAllRapidityPion7GeV->GetTitle(), "l");
  legend.at(iC)->AddEntry(hLAQGSMCutsAllRapidityPion7GeV, hLAQGSMCutsAllRapidityPion7GeV->GetTitle(), "l");
  hLAQGSMKinematicsAllRapidityPion7GeV->Draw("hist PLC PMC");
  hLAQGSMCutsAllRapidityPion7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();

  
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsRegionsBURQMD7GeV = new TCanvas("canv_KinematicsRegionsBURQMD7GeV", "canv_KinematicsRegionsBURQMD7GeV", 700, 500);
  canv_KinematicsRegionsBURQMD7GeV->cd();
  hURQMDKinematicsAllB7GeV->GetYaxis()->SetRangeUser(0., 2.8e4);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hURQMDKinematicsAllB7GeV, "All", "l");
  legend.at(iC)->AddEntry(hURQMDKinematicsCentralB7GeV, "Central", "l");
  legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB7GeV, "Midcentral", "l");
  legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB7GeV, "Peripheral", "l");
  hURQMDKinematicsAllB7GeV->Draw("hist PLC PMC");
  hURQMDKinematicsCentralB7GeV->Draw("same hist PLC PMC");
  hURQMDKinematicsMidcentralB7GeV->Draw("same hist PLC PMC");
  hURQMDKinematicsPeripheralB7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsRegionsBLAQGSM7GeV = new TCanvas("canv_KinematicsRegionsBLAQGSM7GeV", "canv_KinematicsRegionsBLAQGSM7GeV", 700, 500);
  canv_KinematicsRegionsBLAQGSM7GeV->cd();
  hLAQGSMKinematicsAllB7GeV->GetYaxis()->SetRangeUser(0., 2.8e3);
  legend.push_back(new TLegend(legCoordX.first, legCoordY.first, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB7GeV, "All", "l");
  legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB7GeV, "Central", "l");
  legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB7GeV, "Midcentral", "l");
  legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB7GeV, "Peripheral", "l");
  hLAQGSMKinematicsAllB7GeV->Draw("hist PLC PMC");
  hLAQGSMKinematicsCentralB7GeV->Draw("same hist PLC PMC");
  hLAQGSMKinematicsMidcentralB7GeV->Draw("same hist PLC PMC");
  hLAQGSMKinematicsPeripheralB7GeV->Draw("same hist PLC PMC");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBMultURQMD7GeV = new TCanvas("canv_KinematicsBMultURQMD7GeV", "canv_KinematicsBMultURQMD7GeV", 700, 500);
  canv_KinematicsBMultURQMD7GeV->cd();
  canv_KinematicsBMultURQMD7GeV->SetLogz();
  // hURQMDKinematicsAllBMULT->GetYaxis()->SetRangeUser(375, 2500);
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllBMULT7GeV->Draw("colz");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBMultLAQGSM7GeV = new TCanvas("canv_KinematicsBMultLAQGSM7GeV", "canv_KinematicsBMultLAQGSM7GeV", 700, 500);
  canv_KinematicsBMultLAQGSM7GeV->cd();
  canv_KinematicsBMultLAQGSM7GeV->SetLogz();
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllBMULT7GeV->Draw("colz");
  legend.at(iC)->Draw();
  
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsEMultURQMD7GeV = new TCanvas("canv_KinematicsEMultURQMD7GeV", "canv_KinematicsEMultURQMD7GeV", 700, 500);
  canv_KinematicsEMultURQMD7GeV->cd();
  canv_KinematicsEMultURQMD7GeV->SetLogz();
  // hURQMDKinematicsAllEMULT->GetYaxis()->SetRangeUser(375, 2500);
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllEMULT7GeV->Draw("colz");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsEMultLAQGSM7GeV = new TCanvas("canv_KinematicsEMultLAQGSM7GeV", "canv_KinematicsEMultLAQGSM7GeV", 700, 500);
  canv_KinematicsEMultLAQGSM7GeV->cd();
  canv_KinematicsEMultLAQGSM7GeV->SetLogz();
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllEMULT7GeV->Draw("colz");
  legend.at(iC)->Draw();

  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBEURQMD7GeV = new TCanvas("canv_KinematicsBEURQMD7GeV", "canv_KinematicsBEURQMD7GeV", 700, 500);
  canv_KinematicsBEURQMD7GeV->cd();
  canv_KinematicsBEURQMD7GeV->SetLogz();
  // hURQMDKinematicsAllBE->GetYaxis()->SetRangeUser(375, 2500);
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, UrQMD, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hURQMDKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hURQMDKinematicsPeripheralB, "Peripheral", "l");
  hURQMDKinematicsAllBE7GeV->Draw("colz");
  legend.at(iC)->Draw();
  //--------------------------------------------------------------------------------------------------------------
  iC++;
  TCanvas *canv_KinematicsBELAQGSM7GeV = new TCanvas("canv_KinematicsBELAQGSM7GeV", "canv_KinematicsBELAQGSM7GeV", 700, 500);
  canv_KinematicsBELAQGSM7GeV->cd();
  canv_KinematicsBELAQGSM7GeV->SetLogz();
  legend.push_back(new TLegend(legCoordX.first * 2, legCoordY.first + 0.05, legCoordX.second, legCoordY.second));
  legend.at(iC)->SetHeader("Au+Au, LAQGSM, #sqrt{s_{NN}}=7.7 GeV, 0 < b < 17 fm", "C");
  header = (TLegendEntry *)legend.at(iC)->GetListOfPrimitives()->First();
  header->SetTextSize(.035);
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsAllB, "All", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsCentralB, "Central", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsMidcentralB, "Midcentral", "l");
  // legend.at(iC)->AddEntry(hLAQGSMKinematicsPeripheralB, "Peripheral", "l");
  hLAQGSMKinematicsAllBE7GeV->Draw("colz");
  legend.at(iC)->Draw();



  canv_v1CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton11GeV.pdf");
  canv_v1CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton11GeV.png");
  canv_v1CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton11GeV.C");
  canv_v1CentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton11GeV.eps");

  canv_v1MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton11GeV.pdf");
  canv_v1MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton11GeV.png");
  canv_v1MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton11GeV.C");
  canv_v1MidcentralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton11GeV.eps");

  canv_v1PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton11GeV.pdf");
  canv_v1PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton11GeV.png");
  canv_v1PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton11GeV.C");
  canv_v1PeripheralRapidityProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton11GeV.eps");

  canv_v1CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion11GeV.pdf");
  canv_v1CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion11GeV.png");
  canv_v1CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion11GeV.C");
  canv_v1CentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion11GeV.eps");

  canv_v1MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion11GeV.pdf");
  canv_v1MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion11GeV.png");
  canv_v1MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion11GeV.C");
  canv_v1MidcentralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion11GeV.eps");

  canv_v1PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion11GeV.pdf");
  canv_v1PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion11GeV.png");
  canv_v1PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion11GeV.C");
  canv_v1PeripheralRapidityPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion11GeV.eps");

  canv_v2CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton11GeV.pdf");
  canv_v2CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton11GeV.png");
  canv_v2CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton11GeV.C");
  canv_v2CentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton11GeV.eps");

  canv_v2MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton11GeV.pdf");
  canv_v2MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton11GeV.png");
  canv_v2MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton11GeV.C");
  canv_v2MidcentralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton11GeV.eps");

  canv_v2PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton11GeV.pdf");
  canv_v2PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton11GeV.png");
  canv_v2PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton11GeV.C");
  canv_v2PeripheralPtProton11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton11GeV.eps");

  canv_v2CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion11GeV.pdf");
  canv_v2CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion11GeV.png");
  canv_v2CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion11GeV.C");
  canv_v2CentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion11GeV.eps");

  canv_v2MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion11GeV.pdf");
  canv_v2MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion11GeV.png");
  canv_v2MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion11GeV.C");
  canv_v2MidcentralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion11GeV.eps");

  canv_v2PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion11GeV.pdf");
  canv_v2PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion11GeV.png");
  canv_v2PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion11GeV.C");
  canv_v2PeripheralPtPion11GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion11GeV.eps");


  canv_KinematicsAllPtProton11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton11GeVURQMD.png");
  canv_KinematicsAllEtaProton11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton11GeVURQMD.png");
  canv_KinematicsAllRapidityProton11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton11GeVURQMD.png");
  canv_KinematicsAllPtPion11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion11GeVURQMD.png");
  canv_KinematicsAllEtaPion11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion11GeVURQMD.png");
  canv_KinematicsAllRapidityPion11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion11GeVURQMD.png");

  canv_KinematicsAllPtProton11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton11GeVLAQGSM.png");
  canv_KinematicsAllEtaProton11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton11GeVLAQGSM.png");
  canv_KinematicsAllRapidityProton11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton11GeVLAQGSM.png");
  canv_KinematicsAllPtPion11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion11GeVLAQGSM.png");
  canv_KinematicsAllEtaPion11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion11GeVLAQGSM.png");
  canv_KinematicsAllRapidityPion11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion11GeVLAQGSM.png");

  canv_KinematicsRegionsBURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBURQMD.png");
  canv_KinematicsRegionsBLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBLAQGSM.png");
  
  canv_KinematicsBMultURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultURQMD.png");
  canv_KinematicsBMultLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultLAQGSM.png");
  
  canv_KinematicsEMultURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultURQMD.png");
  canv_KinematicsEMultLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultLAQGSM.png");
  
  canv_KinematicsBEURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBEURQMD.png");
  canv_KinematicsBELAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBELAQGSM.png");

  canv_KinematicsAllPtProton11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton11GeVURQMD.pdf");
  canv_KinematicsAllEtaProton11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton11GeVURQMD.pdf");
  canv_KinematicsAllRapidityProton11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton11GeVURQMD.pdf");
  canv_KinematicsAllPtPion11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion11GeVURQMD.pdf");
  canv_KinematicsAllEtaPion11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion11GeVURQMD.pdf");
  canv_KinematicsAllRapidityPion11GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion11GeVURQMD.pdf");

  canv_KinematicsAllPtProton11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton11GeVLAQGSM.pdf");
  canv_KinematicsAllEtaProton11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton11GeVLAQGSM.pdf");
  canv_KinematicsAllRapidityProton11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton11GeVLAQGSM.pdf");
  canv_KinematicsAllPtPion11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion11GeVLAQGSM.pdf");
  canv_KinematicsAllEtaPion11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion11GeVLAQGSM.pdf");
  canv_KinematicsAllRapidityPion11GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion11GeVLAQGSM.pdf");

  canv_KinematicsRegionsBURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBURQMD.pdf");
  canv_KinematicsRegionsBLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBLAQGSM.pdf");
  
  canv_KinematicsBMultURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultURQMD.pdf");
  canv_KinematicsBMultLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultLAQGSM.pdf");
  
  canv_KinematicsEMultURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultURQMD.pdf");
  canv_KinematicsEMultLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultLAQGSM.pdf");
  
  canv_KinematicsBEURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBEURQMD.pdf");
  canv_KinematicsBELAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBELAQGSM.pdf");

  canv_v1CentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton7GeV.pdf");
  canv_v1CentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton7GeV.png");
  canv_v1CentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton7GeV.C");
  canv_v1CentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityProton7GeV.eps");

  canv_v1MidcentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton7GeV.pdf");
  canv_v1MidcentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton7GeV.png");
  canv_v1MidcentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton7GeV.C");
  canv_v1MidcentralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityProton7GeV.eps");

  canv_v1PeripheralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton7GeV.pdf");
  canv_v1PeripheralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton7GeV.png");
  canv_v1PeripheralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton7GeV.C");
  canv_v1PeripheralRapidityProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityProton7GeV.eps");

  canv_v1CentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion7GeV.pdf");
  canv_v1CentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion7GeV.png");
  canv_v1CentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion7GeV.C");
  canv_v1CentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1CentralRapidityPion7GeV.eps");

  canv_v1MidcentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion7GeV.pdf");
  canv_v1MidcentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion7GeV.png");
  canv_v1MidcentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion7GeV.C");
  canv_v1MidcentralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1MidcentralRapidityPion7GeV.eps");

  canv_v1PeripheralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion7GeV.pdf");
  canv_v1PeripheralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion7GeV.png");
  canv_v1PeripheralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion7GeV.C");
  canv_v1PeripheralRapidityPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v1PeripheralRapidityPion7GeV.eps");

  canv_v2CentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton7GeV.pdf");
  canv_v2CentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton7GeV.png");
  canv_v2CentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton7GeV.C");
  canv_v2CentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtProton7GeV.eps");

  canv_v2MidcentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton7GeV.pdf");
  canv_v2MidcentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton7GeV.png");
  canv_v2MidcentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton7GeV.C");
  canv_v2MidcentralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtProton7GeV.eps");

  canv_v2PeripheralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton7GeV.pdf");
  canv_v2PeripheralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton7GeV.png");
  canv_v2PeripheralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton7GeV.C");
  canv_v2PeripheralPtProton7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtProton7GeV.eps");

  canv_v2CentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion7GeV.pdf");
  canv_v2CentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion7GeV.png");
  canv_v2CentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion7GeV.C");
  canv_v2CentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2CentralPtPion7GeV.eps");

  canv_v2MidcentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion7GeV.pdf");
  canv_v2MidcentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion7GeV.png");
  canv_v2MidcentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion7GeV.C");
  canv_v2MidcentralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2MidcentralPtPion7GeV.eps");

  canv_v2PeripheralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion7GeV.pdf");
  canv_v2PeripheralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion7GeV.png");
  canv_v2PeripheralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion7GeV.C");
  canv_v2PeripheralPtPion7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/v2PeripheralPtPion7GeV.eps");


  canv_KinematicsAllPtProton7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton7GeVURQMD.png");
  canv_KinematicsAllEtaProton7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton7GeVURQMD.png");
  canv_KinematicsAllRapidityProton7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton7GeVURQMD.png");
  canv_KinematicsAllPtPion7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion7GeVURQMD.png");
  canv_KinematicsAllEtaPion7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion7GeVURQMD.png");
  canv_KinematicsAllRapidityPion7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion7GeVURQMD.png");

  canv_KinematicsAllPtProton7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton7GeVLAQGSM.png");
  canv_KinematicsAllEtaProton7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton7GeVLAQGSM.png");
  canv_KinematicsAllRapidityProton7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton7GeVLAQGSM.png");
  canv_KinematicsAllPtPion7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion7GeVLAQGSM.png");
  canv_KinematicsAllEtaPion7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion7GeVLAQGSM.png");
  canv_KinematicsAllRapidityPion7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion7GeVLAQGSM.png");

  canv_KinematicsRegionsBURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBURQMD7GeV.png");
  canv_KinematicsRegionsBLAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBLAQGSM7GeV.png");

  canv_KinematicsBMultURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultURQMD7GeV.png");
  canv_KinematicsBMultLAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultLAQGSM7GeV.png");
  
  canv_KinematicsEMultURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultURQMD7GeV.png");
  canv_KinematicsEMultLAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultLAQGSM7GeV.png");
  
  canv_KinematicsBEURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBEURQMD7GeV.png");
  canv_KinematicsBELAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBELAQGSM7GeV.png");

  canv_KinematicsAllPtProton7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton7GeVURQMD.pdf");
  canv_KinematicsAllEtaProton7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton7GeVURQMD.pdf");
  canv_KinematicsAllRapidityProton7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton7GeVURQMD.pdf");
  canv_KinematicsAllPtPion7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion7GeVURQMD.pdf");
  canv_KinematicsAllEtaPion7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion7GeVURQMD.pdf");
  canv_KinematicsAllRapidityPion7GeVURQMD->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion7GeVURQMD.pdf");

  canv_KinematicsAllPtProton7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtProton7GeVLAQGSM.pdf");
  canv_KinematicsAllEtaProton7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaProton7GeVLAQGSM.pdf");
  canv_KinematicsAllRapidityProton7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityProton7GeVLAQGSM.pdf");
  canv_KinematicsAllPtPion7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllPtPion7GeVLAQGSM.pdf");
  canv_KinematicsAllEtaPion7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllEtaPion7GeVLAQGSM.pdf");
  canv_KinematicsAllRapidityPion7GeVLAQGSM->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinAllRapidityPion7GeVLAQGSM.pdf");

  canv_KinematicsRegionsBURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBURQMD7GeV.pdf");
  canv_KinematicsRegionsBLAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinRegionsBLAQGSM7GeV.pdf");

  canv_KinematicsBMultURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultURQMD7GeV.pdf");
  canv_KinematicsBMultLAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBMultLAQGSM7GeV.pdf");
  
  canv_KinematicsEMultURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultURQMD7GeV.pdf");
  canv_KinematicsEMultLAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinEMultLAQGSM7GeV.pdf");
  
  canv_KinematicsBEURQMD7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBEURQMD7GeV.pdf");
  canv_KinematicsBELAQGSM7GeV->SaveAs("/home/peter/Documents/WorkLocal/MPD/Pics/ModelFlowShow/KinBELAQGSM7GeV.pdf");
}