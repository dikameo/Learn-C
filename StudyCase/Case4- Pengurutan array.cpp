#include <stdio.h>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] > array[minIndex]) { // Jika array[1] > array [0] sukses
                minIndex = j; // maka perbarui  array[0] dengan array[1]
            }
        }
        // Tukar elemen terkecil dengan elemen di posisi i
        int temp = array[i]; // Tukar Posisi antara array [0] dengan array [1]
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}


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

