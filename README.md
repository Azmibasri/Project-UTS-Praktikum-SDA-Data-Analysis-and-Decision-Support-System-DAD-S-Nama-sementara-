# Sistem Analisis Penjualan Nasi Ayam Dakwah

Sistem ini dirancang untuk membantu pengelolaan dan analisis proses penjualan pada usaha Nasi Ayam Dakwah dengan fokus pada peningkatan kecepatan pelayanan. Sistem ini menggunakan metode antrean *First-In-First-Out* (FIFO), di mana pelanggan yang datang lebih dahulu akan dilayani terlebih dahulu. Selain itu, program ini menyediakan fitur analisis untuk mendeteksi jam sibuk dan memberikan rekomendasi operasional.

## 👥 Tim Pengembang

Proyek Praktikum Struktur Data dan Algoritma, Universitas Syiah Kuala (2025/2026).

| Nama Anggota | NIM |
| :--- | :--- |
| Azmi Basri | 250810701100044 |
| Ahmad Damanhuri | 250810701100046 |
| Najahal Khaira | 250810701100040 |
| Lukmanul Hakim Karva | 250810701100011 |
| Farisha Tara Ushna | 250810701100105 |

---

## ✨ Fitur Utama

* **Pencatatan Data Pelanggan:** Merekam ID pelanggan, waktu kedatangan, dan durasi pelayanan.
* **Manajemen Antrean (Queue):** Menggunakan struktur data *queue* untuk memproses pesanan secara berurutan sesuai prinsip FIFO.
* **Pengurutan Riwayat Transaksi (Sorting):** Mengurutkan riwayat pelayanan berdasarkan waktu tunggu terlama (*descending*) menggunakan algoritma *Quick Sort*.
* **Analisis Jam Sibuk & Rekomendasi:** Memantau antrean untuk mendeteksi lonjakan (waktu tunggu > 2 menit untuk 3 pelanggan berturut-turut) dan memberikan peringatan serta rekomendasi penambahan stok operasional secara otomatis.

---

## 📁 Struktur Berkas dan Direktori

Program ini disusun dengan format modular, memisahkan fungsionalitas ke dalam file header (`.h`) dan source (`.c`):

* `include/types.h`: Tempat menyimpan definisi tipe data inti, seperti struktur *struct* `Pelanggan`.
* `include/queue.h` & `queue.c`: Berfungsi untuk mengatur sistem antrean pelanggan pada program (seperti fungsionalitas `enqueue` dan `dequeue`).
* `include/sort.h` & `sort.c`: Menyimpan implementasi algoritma pengurutan *Quick Sort*.
* `include/analysis.h` & `analysis.c`: Mengelola fungsi deteksi jam sibuk dan keluaran rekomendasi operasional.
* `main.c`: Berkas utama program yang menyajikan antarmuka menu CLI (*Command Line Interface*) dan menggabungkan seluruh modul di atas.

---

## 🛠️ Panduan Kompilasi dan Menjalankan Program

Karena proyek ini menggunakan arsitektur kode modular, seluruh berkas sumber (`.c`) harus dikompilasi secara bersamaan. Berikut adalah perintah kompilasi menggunakan GCC:

```bash
gcc main.c queue.c sort.c analysis.c -o program
