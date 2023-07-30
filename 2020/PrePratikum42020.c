#include<stdio.h>
int main(){
/*
1. Kerjakan soal dibawah ini :
    a. 50 mod 2
    50/2 = 25
    50 -(25*2) = 0
    50 -50 = 0
    b. 340 mod 3
    340 / 3 = 113
    340 - (113*3) 
    340 - 339 = 1
    c. 45 * ( 125 mod 5 )
    45 * (125-(25*5)) = 0
    45 * 0 = 0


    d. 123 + ( 456 mod 7 ) – 89
    123 + (456-(65*7))-89
    123+ 1-89
    35

*/

//int i;
//for ( i = 0; i <= 500; i+=2)
//{
//    printf("%d\n",i);
//
//}


int bil;
int i;
for(i=0; i<=5; i++){
    printf("Masukkan sebuah bilangan : ");
    scanf("%d",&bil);

    if (bil>0)
    {
        if(bil%2==0){
            printf("%d adalah bilangan genap positif \n",bil);
        }else{
            printf("%d adalah bilangan ganjil positif\n ", bil);
        }   
    }else if(bil<0){
        if(bil%2==0){
            printf("%d adalah bilangan genap negatif \n",bil);
        }else{
            printf("%d adalah bilangan ganjil negatif\n ", bil);
        }   
    }else{
        printf("bilangan yang anda input adalah angka 0 \n");
    }
    
}
}
