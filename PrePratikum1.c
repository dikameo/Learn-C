#include<stdio.h>
#define PHI 3.14
int main(){
    int sisiPersegi, luasPersegi, KelilingPersegi;
    float jariLingkaran, luasLingkaran, kelilingLingkaran;

    // printf("Masukkan sisi Persegi : ");
    // scanf("%d",sisiPersegi);
    // printf("\nUkuran dari Persegi : \n");
    // luasPersegi = sisiPersegi*sisiPersegi;
    // KelilingPersegi =sisiPersegi*4;
    // printf("\nLuas Persegi : %d\n ",&luasPersegi);
    // printf("\nKeliling Persegi : %d\n ",&KelilingPersegi);

    // printf("\nMasukkan jari-jari Lingkaran : ");
    // scanf("%f",&jariLingkaran);
    // printf("\nUkuran dari Lingkaran : ");
    // luasLingkaran=jariLingkaran*jariLingkaran*PHI;
    // kelilingLingkaran=2*jariLingkaran*PHI;
    // printf("\nLuas Persegi : %d \n",luasLingkaran);
    // printf("Keliling Lingkaran : %d\n",kelilingLingkaran);

    // fixed
    
    // printf("Masukkan sisi Persegi : ");
    // scanf("%d",&sisiPersegi); //untuk input menambahkan & pada depan variabel
    // printf("\nUkuran dari Persegi : \n");
    // luasPersegi = sisiPersegi*sisiPersegi;
    // KelilingPersegi =sisiPersegi*4;
    // printf("\nLuas Persegi : %d\n ",luasPersegi); // sedangkan output tidak perlu menambahkan & pada depan variabelnya
    // printf("\nKeliling Persegi : %d\n ",KelilingPersegi);

    // fixed
    printf("\nMasukkan jari-jari Lingkaran : ");
    scanf("%f",&jariLingkaran);
    printf("\nUkuran dari Lingkaran : ");
    luasLingkaran=jariLingkaran*jariLingkaran*PHI;
    kelilingLingkaran=2*jariLingkaran*PHI;
    printf("\nLuas Persegi : %.2lf \n",luasLingkaran); // mengganti dengan float
    printf("Keliling Lingkaran : %.2lf\n",kelilingLingkaran); // mengganti dengan menggunakan float

   

}
