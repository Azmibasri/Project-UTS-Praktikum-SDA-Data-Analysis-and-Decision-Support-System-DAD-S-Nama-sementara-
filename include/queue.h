#ifndef QUEUE_H
#define QUEUE_H

#include "types.h"

// Inisialisasi queue
void initQueue();

// Mengecek queue penuh
int isFull();

// Mengecek queue kosong
int isEmpty();

// Menambahkan pelanggan ke queue
void enqueue(Pelanggan p);

// Menghapus pelanggan dari queue
Pelanggan dequeue();

// Memproses pelanggan
void prosesPelanggan(int *total_riwayat, Pelanggan riwayat[]);

#endif