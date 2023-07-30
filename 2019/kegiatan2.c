#include<stdio.h>
int main(){
    int barangPertama,barangKedua,totalBarang,hasilDiskon;
    const float diskon = 0.1;
    // const diskon = 10; tanpa menggunakan float

    printf("TOKO GAUL\n");
    printf("Masukkan Harga Barang Pertama :");
    scanf("%d",&barangPertama);
    printf("Masukkan Harga Barang Kedua :");
    scanf("%d",&barangKedua);

    totalBarang = barangPertama + barangKedua;
    printf("Harga Total : %d \n",totalBarang);
    hasilDiskon = totalBarang-(totalBarang*diskon);
    // hasilDiskon = totalBarang-(totalBarang/diskon); tanpa menggunakan float
    printf("Harga Total setelah diskon : %d",hasilDiskon);


}
