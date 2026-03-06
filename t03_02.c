#include <stdio.h>  // Diperlukan untuk fungsi input/output seperti printf dan scanf
#include <stdlib.h> // Diperlukan untuk alokasi memori dinamis (malloc, free)
#include <string.h> // Disertakan sesuai permintaan, meskipun tidak digunakan secara langsung untuk operasi ini

int main() {
    // 1. Deklarasi Variabel
    int n; // Untuk menyimpan jumlah nilai mahasiswa
    int *nilai_mahasiswa; // Pointer untuk array dinamis yang akan menyimpan nilai-nilai tugas
    long long total_nilai = 0; // Untuk akumulasi total nilai, menggunakan long long untuk mencegah overflow
    double rata_rata; // Untuk menyimpan nilai rata-rata dengan presisi desimal
    int count_di_atas_rata = 0; // Untuk menghitung mahasiswa yang nilainya di atas atau sama dengan rata-rata

    // 2. Input: Membaca jumlah nilai (N) dari baris pertama
    scanf("%d", &n);

    // 3. Alokasi Memori Dinamis untuk menyimpan N nilai
    nilai_mahasiswa = (int *)malloc(n * sizeof(int));
    
    // Penanganan error sederhana jika alokasi memori gagal
    if (nilai_mahasiswa == NULL) {
        // Jika alokasi memori gagal, cetak pesan error dan keluar dari program
        // Dalam konteks tugas kuliah pemrograman prosedural, ini adalah praktik yang baik.
        fprintf(stderr, "Error: Gagal mengalokasikan memori.\n");
        return 1; // Mengembalikan kode error
    }

    // 4. Loop Input: Membaca N nilai tugas dan menghitung totalnya
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai_mahasiswa[i]);
        total_nilai += nilai_mahasiswa[i];
    }

    // 5. Perhitungan Rata-rata
    // Melakukan type casting ke double pada total_nilai sebelum pembagian
    // untuk memastikan hasil rata-rata adalah desimal, bukan integer.
    rata_rata = (double)total_nilai / n;

    // 6. Loop: Menghitung berapa banyak mahasiswa yang nilainya di atas atau sama dengan rata-rata
    for (int i = 0; i < n; i++) {
        if (nilai_mahasiswa[i] >= rata_rata) {
            count_di_atas_rata++;
        }
    }

    // 7. Output: Menampilkan hasil sesuai format yang diminta
    printf("%lld\n", total_nilai); // Total nilai
    printf("%.2lf\n", rata_rata);  // Rata-rata dengan 2 digit presisi
    printf("%d\n", count_di_atas_rata); // Jumlah mahasiswa di atas/sama dengan rata-rata

    // 8. Pembersihan Memori: Melepaskan memori yang telah dialokasikan
    free(nilai_mahasiswa);
    nilai_mahasiswa = NULL; // Menyetel pointer ke NULL setelah free adalah praktik yang baik

    // 9. Mengakhiri program dengan sukses
    return 0;
}

