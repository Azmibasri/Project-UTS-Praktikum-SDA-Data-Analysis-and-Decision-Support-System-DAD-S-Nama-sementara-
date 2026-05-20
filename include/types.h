// Fungsi types.h adalah sebagai tempat untuk menyimpan definisi tipe data yang akan dipakai oleh file lain
#ifndef TYPES_H // Berfungsi agar file tidak dibaca berulang kali
#define TYPES_H

#define MAX_QUEUE 100 // Antrean maksimal = 100 pelanggan

// Membuat struct bernama pelanggan
typedef struct { 
    int id;
    int waktu_masuk;
    int waktu_layanan;
    int waktu_tunggu;
} Pelanggan;

#endif // Penutup header