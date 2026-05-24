#include <stdio.h>
#include "analysis.h"

void deteksiJamSibuk(Pelanggan riwayat[], int total_riwayat) {
    int count = 0;
    int jam_sibuk_terdeteksi = 0;

    for (int i = 0; i < total_riwayat; i++) {
        if (riwayat[i].waktu_tunggu > 2) {
            count = count + 1;
        } else {
            count = 0;
        }
        if (count >= 3) {
            jam_sibuk_terdeteksi = 1;
        }
    }
    if (jam_sibuk_terdeteksi == 1)
    {
        printf("Rekomendasi: Penambahan Stok Ayam\n");
    } else {
        printf("Rekomendasi: Operasional Berjalan Normal\n");
    }
}