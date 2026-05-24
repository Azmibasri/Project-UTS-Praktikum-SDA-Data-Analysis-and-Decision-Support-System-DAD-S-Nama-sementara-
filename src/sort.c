#include "../include/sort.h"

// Membagi array berdasarkan pivot
int partition(Pelanggan arr[], int low, int high)
{
    // Deklarasi pivot dan penanda indeks
    int pivot = arr[high].waktu_tunggu;
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        // Urut descending
        if (arr[j].waktu_tunggu > pivot)
        {
            i++;

            // Tukar data pelanggan
            Pelanggan temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Pindahkan pivot ke posisi yang benar
    Pelanggan temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Quick Sort recursive
void quickSort(Pelanggan arr[], int low, int high)
{
    if (low < high)
    {
        // Deklarasi variabel untuk menyimpan indeks pivot
        int pi = partition(arr, low, high);

        // Sort kiri
        quickSort(arr, low, pi - 1);

        // Sort kanan
        quickSort(arr, pi + 1, high);
    }
}