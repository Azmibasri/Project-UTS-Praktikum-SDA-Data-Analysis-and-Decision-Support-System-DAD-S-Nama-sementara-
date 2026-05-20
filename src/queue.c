// Fungsi dari queue.c adalah untuk mengatur sistem antrean pelanggan (queue) pada program
#include <stdio.h>
#include "types.h" // Mengambil struct pelanggan

Pelanggan queue[MAX_QUEUE]; // Array queue

// Penanda antrean
int front = -1; // Posisi depan
int rear = -1; // Posisi belakang

void initQueue() { // Fungsi untuk mengosongkan queue
    front = -1;
    rear = -1;
}

int isFull() { // Fungsi untuk mengecek apakah queue penuh
    return rear == MAX_QUEUE - 1;
}

int isEmpty() { // Kebalikan dari fungsi isFull()
    return front == -1 || front > rear;
}

void enqueue(Pelanggan p) { // Fungsi untuk menambahkan pelanggan
    if (isFull()) {
        printf("Queue penuh! Tidak bisa menambahkan pelanggan.\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = p;

    printf("Pelanggan dengan ID %d berhasil ditambahkan.\n", p.id);
}