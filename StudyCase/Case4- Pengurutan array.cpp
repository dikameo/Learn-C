#include <stdio.h>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] > array[minIndex]) { 
                minIndex = j;
            }
        }
        // Tukar elemen terkecil dengan elemen di posisi i
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}
// Penjelasan
// for iterasi pada looping kesatu  dengan adanya n-1 mengurangi perbandingan untuk iterasi terakhir opsional tidak apa apa menggunakan n saja
// for iterasi kedua nilai j = i + 1, karena untuk membandingkan elemen i dengan elemen j= i + 1, semisal i = 0 maka j = i+1 maka j bernilai 1
 // Jika nilai pada array[j] > array[minIndex], array[j] sama dengan array pada indeks 1 > daripada array dari pada array indeks i, i disini berarti 0 maka
// nilai dari minIndex akan diperbarui dengan array[j]  disitu array j bernilai 1
// Kemudian kita tukar dibantu dengan variabel temp


int main() {
    int array[100];  // Ukuran maksimal array
    int jumlahElemen;

    // Memasukkan elemen-elemen array
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &jumlahElemen);
    printf("Masukkan elemen-elemen array:\n");
    for (int i = 0; i < jumlahElemen; i++) {
        scanf("%d", &array[i]);
    }

    // Mengurutkan elemen array menggunakan selection sort
    selectionSort(array, jumlahElemen);

    // Menampilkan array yang telah diurutkan
    printf("Array yang telah diurutkan:\n");
    for (int i = 0; i < jumlahElemen; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

