#include<stdio.h>

int konversi(int rupiah){
    float dolar = rupiah/15107.50; 
    float euro = rupiah/16673.39; 
    float ringgit = rupiah/3317.78; 

    return printf("\ndolar %.2f\neuro %.2f\nringgit %.2f\n",dolar,euro,ringgit);
}

int main(){
    int rupiah_A = 1340*8;
    int rupiah_B = 20191-12345;
    int rupiah_C = 201910370311340 / 23456789 ;
    printf("Konversi Rupiah A adalah %d : ",rupiah_A);
    konversi(rupiah_A);
    printf("\nKonversi Rupiah B adalah %d : ",rupiah_B);
    konversi(rupiah_B);
     printf("\nKonversi Rupiah C adalah %d : ",rupiah_C);
    konversi(rupiah_C);
}
