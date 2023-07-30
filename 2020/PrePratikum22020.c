#include<stdio.h>

int konversi(int hektare){
    int are = hektare *100;
    int m_persegi = are *100;
    int cm_persegi = m_persegi *10000;

    return printf("\n %d are \n %d meter persegi \n %d centimeter persegi\n",are,m_persegi,cm_persegi);

}

int main(){
    int hektare;
    printf("Masukkan satuan luas dalam satuan hektare: ");
    scanf("%d",&hektare);

    printf("konversi satuan luas adalah %d hektare sama dengan : ",hektare);
    konversi(hektare);
}