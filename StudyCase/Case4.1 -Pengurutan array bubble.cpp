#include <stdio.h>

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                // Tukar posisi elemen jika urutan salah
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Sama halnya short
// semisal n = 3, i = 0, j=0
// yang membedakan looping kedua 3 - 0 - 1
// jika array[0] < array[j(0)+1]
// maka akan menukar int temp 
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

    // Mengurutkan elemen array menggunakan bubble sort
    bubbleSort(array, jumlahElemen);

    // Menampilkan array yang telah diurutkan
    printf("Array yang telah diurutkan:\n");
    for (int i = 0; i < jumlahElemen; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

