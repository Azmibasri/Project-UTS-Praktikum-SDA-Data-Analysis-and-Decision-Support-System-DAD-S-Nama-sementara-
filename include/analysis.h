#ifndef ANALYSIS_H
#define ANALYSIS_H

typedef struct {
    int waktu_tunggu;
} Pelanggan;

void deteksiJamSibuk(Pelanggan riwayat[], int total_riwayat);

#endif