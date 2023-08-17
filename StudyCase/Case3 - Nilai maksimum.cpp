#include<stdio.h>
int main(){

  int arraya[] = {10, 40, 2, 65, 30, 66};
    int jmlarra = sizeof(arraya) / sizeof(arraya[0]);
    int arrayb[] = {1, 20, 56, 23, 6, 40, 32};
    int jmlarrb = sizeof(arrayb) / sizeof(arrayb[0]);
    int totalarr[100]; // Ukuran yang cukup besar untuk menampung semua elemen
    int jmlarr = jmlarra + jmlarrb; // Ukuran total array
    int i;
    int indeks = 0;

    // Menampilkan data A
    printf("Data dari array A:\n");
    for (i = 0; i < jmlarra; i++) {
        printf("Data : %d\n", arraya[i]);
        totalarr[indeks] = arraya[i];
        indeks++;
    }

    // Menampilkan data B
    printf("Data dari array B:\n");
    for (i = 0; i < jmlarrb; i++) {
        printf("Data : %d\n", arrayb[i]);
        totalarr[indeks] = arrayb[i];
        indeks++;
    }

    // Menampilkan data dari array A dan B
    printf("Data dari array A dan B:\n");
    for (i = 0; i < jmlarr; i++) {
        printf("Data : %d\n", totalarr[i]);
    }

    int maksimum = totalarr[0];
    int minimum = totalarr[0];

    // Mencari data yang tertinggi dan terendah
    for (i = 1; i < jmlarr; i++) {
        if (totalarr[i] > maksimum) {
            maksimum = totalarr[i];
        }
        if (totalarr[i] < minimum) {
            minimum = totalarr[i];
        }
    }

    printf("Nilai maksimum : %d\n", maksimum);
    printf("Nilai minimum : %d\n", minimum);
	
//	Penjelasan
// 	Mengecek array[i] apakah lebih dari maksimum
//  jika lebih maka array[i] dimasukan kedalam variabel maksimum
//  lakukan iteraksi hingga nilai dari jmlarr habis
//  kemudian print dari nilai maksimum

}
