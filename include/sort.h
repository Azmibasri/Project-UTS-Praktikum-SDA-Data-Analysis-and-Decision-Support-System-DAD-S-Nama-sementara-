#ifndef SORT_H
#define SORT_H

#include "types.h" // Masih bisa diganti sesuai keperluan

// Membagi array berdasarkan pivot
int partition(Pelanggan arr[], int low, int high);

// Mengurutkan array dengan Quick Sort
void quickSort(Pelanggan arr[], int low, int high);

#endif