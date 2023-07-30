#include<stdio.h>
int main(){
    const float nilai4 = 0.04;
    int nilai1,nilai2,nilai3,rerata;
    float hasil;

    printf("masukkan nilai 1 : ");
    scanf("%d",&nilai1);
    printf("masukkan nilai 2 : ");
    scanf("%d",&nilai2);
    printf("masukkan nilai 3 : ");
    scanf("%d",&nilai3);
    rerata = (nilai1+nilai2+nilai3)/3;
    printf("rata -rata nilai yang kamu peroleh adalah : %d",rerata);
    // hasil = rerata*nilai4/100;
    hasil = rerata*nilai4;
    printf("\nrata -rata nilai yang kamu peroleh adalah : %.2f",hasil);
}