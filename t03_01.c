#include <stdio.h>
#include <stdlib.h> // Disertakan sesuai permintaan, meskipun tidak langsung digunakan di logika inti
#include <string.h> // Disertakan sesuai permintaan, meskipun tidak langsung digunakan di logika inti

int main() {
    int N; // Variabel untuk menyimpan jumlah nilai yang akan dimasukkan

    // Membaca nilai N dari input pertama
    scanf("%d", &N);

    long long sum = 0; // Variabel untuk menyimpan total nilai, menggunakan long long untuk menampung jumlah besar
    int nilai;         // Variabel sementara untuk membaca setiap nilai tugas

    // Loop untuk membaca N buah nilai tugas
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai); // Membaca setiap nilai tugas
        sum += nilai;        // Menambahkan nilai ke total
    }

    // Menghitung rata-rata. Cast sum ke double untuk mendapatkan hasil desimal
    double average = (double)sum / N;

    // Mencetak total nilai
    printf("%lld\n", sum);

    // Mencetak rata-rata dengan dua digit presisi di belakang koma
    printf("%.2f\n", average);

    return 0; // Mengindikasikan program berjalan sukses
}
