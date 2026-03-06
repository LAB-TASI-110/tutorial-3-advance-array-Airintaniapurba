#include <stdio.h>  // Untuk fungsi input/output seperti printf dan scanf
#include <stdlib.h> // Untuk fungsi utilitas umum
#include <string.h> // Untuk fungsi manipulasi string (diminta, meskipun tidak langsung digunakan di sini)

int main() {
    int N; // Deklarasi variabel untuk jumlah nilai
    scanf("%d", &N); // Membaca jumlah nilai (N) dari input

    int values[100]; // Deklarasi array untuk menyimpan nilai-nilai, maksimal 100 nilai
    int sum = 0; // Inisialisasi variabel untuk menjumlahkan total nilai
    int min_val = 101; // Inisialisasi nilai minimum (nilai tugas 0-100, jadi 101 pasti lebih besar)
    int max_val = -1;  // Inisialisasi nilai maksimum (nilai tugas 0-100, jadi -1 pasti lebih kecil)
    int i; // Variabel counter untuk loop

    // Loop untuk membaca N nilai, menghitung jumlah, serta mencari nilai min dan max
    for (i = 0; i < N; i++) {
        scanf("%d", &values[i]); // Membaca setiap nilai tugas
        sum += values[i]; // Menambahkan nilai ke total jumlah

        // Memperbarui nilai minimum jika nilai saat ini lebih kecil
        if (values[i] < min_val) {
            min_val = values[i];
        }
        // Memperbarui nilai maksimum jika nilai saat ini lebih besar
        if (values[i] > max_val) {
            max_val = values[i];
        }
    }

    double average = (double)sum / N; // Menghitung rata-rata dengan presisi double

    int count_above_average = 0; // Inisialisasi variabel untuk menghitung nilai di atas rata-rata

    // Loop kedua untuk menghitung berapa banyak nilai yang di atas atau sama dengan rata-rata
    for (i = 0; i < N; i++) {
        if (values[i] >= average) {
            count_above_average++; // Menambah counter jika nilai memenuhi kriteria
        }
    }

    int range = max_val - min_val; // Menghitung rentang nilai (maksimum - minimum)

    // Mencetak hasil sesuai format yang diminta
    printf("%d\n", sum); // Jumlah seluruh nilai
    printf("%.2f\n", average); // Nilai rata-rata dengan 2 digit presisi
    printf("%d\n", count_above_average); // Banyaknya nilai >= rata-rata
    printf("%d\n", range); // Rentang nilai

    return 0; // Mengembalikan 0 menandakan program berakhir dengan sukses
}
