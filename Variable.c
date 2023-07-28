#include<stdio.h>
int main(){
    // Terdapat 3 Tipe data yang ada di c
    // ada int digunakan untuk angka
    // ada Float digunakan untuk angka dengan desimal
    // ada char digunakan untuk string / huruf

    int angka = 20;
    float desimal = 20.1;
    char huruf = 'D';
    int saudara = 2;

    char umur = 23;
    

    // untuk memanggil output dari variabel dibawah ini
    // int menggunakakn %d atau %i
    // float menggunakan %f
    // char menggunakan %c
    // string menggunakan %s
    // double menggunakan %lf
    // untuk menambahkan baris baru bisa menggunakan \n

    printf("%d\n",angka);
    printf("%f\n",desimal);
    printf("%c\n",huruf);

    // bentuk dalam sebuah kalimat
    printf("umur saya %i tahun, dan mempunyai %d saudara",umur,saudara);


}
