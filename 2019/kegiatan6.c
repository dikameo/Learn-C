#include<stdio.h>
#define MAKS 256
#define MAK 256
int main(){
    int i=0, jumkar = 0;
    // char teks[MAKS];
    // puts("Masukkan suatu kalimat (maks 255 karakter)");
    // puts("Saya akan menghitung jumlah karakternya\n");
    // gets(teks);

    // // while (teks[i]!='\0')
    // // {
    // //     jumkar++;
    // //     i++;
    // // }
    // printf("\nJumlah karakter = %d\n",strlen(teks));
    // dengan menggunakan fungsi strlen tidak melakukann looping menghemat koding
    char asal[] = "Saya menyukai bahasa C";
    char hasil[MAK];
    
    // while (asal[i]!='\0'){
    //     hasil[i]=asal[i];
    //     i++;
    // }
    // hasil[i]='\0';
    printf("isi hasil : %s\n",strcpy(hasil,asal));
    


}
