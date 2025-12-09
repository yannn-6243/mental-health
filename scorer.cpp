#include <string>
#include <emscripten.h>

extern "C" {

EMSCRIPTEN_KEEPALIVE
const char* classify(int total, int maxScore) {
    static std::string result;

    if (total < 0 || total > maxScore) {
        result = "Error";
        return result.c_str();
    }

    // 4 Tingkatan:
    // 0–25%   : Baik / Stabil
    // 26–50%  : Perlu Perhatian Diri
    // 51–75%  : Butuh Konsultasi Ringan
    // 76–100% : Butuh Konsultasi Profesional

    int t1 = (int)(maxScore * 0.25);
    int t2 = (int)(maxScore * 0.50);
    int t3 = (int)(maxScore * 0.75);

    if (total <= t1) {
        result = "Baik / Kondisi Stabil";
    }
    else if (total <= t2) {
        result = "Perlu Perhatian Diri";
    }
    else if (total <= t3) {
        result = "Butuh Konsultasi Ringan";
    }
    else {
        result = "Butuh Konsultasi Profesional";
    }

    return result.c_str();
}

}
