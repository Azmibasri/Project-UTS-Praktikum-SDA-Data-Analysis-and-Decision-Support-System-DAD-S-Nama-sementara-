#include <stdio.h>
#include <stdlib.h>
// Memastikan semua file di-include dengan benar sesuai letak direktorinya
#include "include/types.h"
#include "include/queue.h"
#include "include/sort.h"
#include "include/analysis.h" 

// Membuat array global di main untuk menampung riwayat dan variabel total_riwayat 
Pelanggan riwayat[MAX_QUEUE];
int total_riwayat = 0;

void tampilkanMenu() { 
    printf("\n============================================\n");
    printf("   SISTEM ANTREAN NASI AYAM DAKWAH   \n");
    printf("============================================\n");
    printf("1. Input Data Pelanggan\n"); 
    printf("2. Proses Pelayanan\n");
    printf("3. Urutkan Riwayat Transaksi\n");
    printf("4. Jalankan Analisis & Rekomendasi\n");
    printf("5. Keluar Program\n");
    printf("============================================\n");
    printf("Pilih menu (1-5): ");
}

int main() {
    int pilihan;
    
    // Inisialisasi antrean saat program pertama kali berjalan
    initQueue();

    while (1) { // Sediakan menu menggunakan switch-case di dalam loop while 
        tampilkanMenu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: { // Menu 1: Memanggil fungsi enqueue
                Pelanggan p;
                printf("\n--- Input Data Pelanggan ---\n");
                printf("Masukkan ID Pelanggan: ");
                scanf("%d", &p.id);
                printf("Masukkan Waktu Masuk (menit): ");
                scanf("%d", &p.waktu_masuk);
                printf("Masukkan Durasi Layanan (menit): ");
                scanf("%d", &p.waktu_layanan);
                
                p.waktu_tunggu = 0; // Akan dihitung di prosesPelanggan
                enqueue(p); 
                break;
            }
            case 2: { // Menu 2: Memanggil fungsi prosesPelanggan
                printf("\n--- Proses Pelayanan ---\n");
                if (!isEmpty()) {
                    prosesPelanggan(&total_riwayat, riwayat);
                    printf("Pelanggan terdepan berhasil diproses dan masuk ke riwayat.\n");
                } else {
                    printf("Antrean kosong. Belum ada pelanggan yang bisa diproses.\n");
                }
                break;
            }
            case 3: { // Menu 3: Memanggil fungsi quickSort
                printf("\n--- Urutkan Riwayat Transaksi ---\n");
                if (total_riwayat > 0) {
                    // Array asal diubah secara langsung (in-place sorting) berdasarkan waktu tunggu terlama
                    quickSort(riwayat, 0, total_riwayat - 1);
                    printf("Riwayat berhasil diurutkan berdasarkan Waktu Tunggu (Descending).\n");
                    
                    printf("\nData Riwayat Setelah Diurutkan:\n");
                    for(int i = 0; i < total_riwayat; i++) {
                        printf("ID Pelanggan: %d | Waktu Tunggu: %d menit\n", riwayat[i].id, riwayat[i].waktu_tunggu);
                    }
                } else {
                    printf("Riwayat kosong. Silakan proses pelanggan terlebih dahulu.\n");
                }
                break;
            }
            case 4: { // Menu 4: Memanggil fungsi deteksiJamSibuk
                printf("\n--- Analisis & Rekomendasi Operasional ---\n");
                if (total_riwayat > 0) {
                    deteksiJamSibuk(riwayat, total_riwayat);
                } else {
                    printf("Riwayat kosong. Tidak ada data untuk dianalisis.\n");
                }
                break;
            }
            case 5: { // Menu 5: Keluar Program
                printf("\nKeluar dari program. Terima kasih!\n");
                return 0;
            }
            default:
                printf("\nPilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    return 0;
}