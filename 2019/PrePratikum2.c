#include<stdio.h>

// int input(){
//     int celcius;
//     printf("Masukkan derajat suhu Celcius yang akan dikonversi :");
//     scanf("%d",&celcius); 

//     return celcius;
// }

// int reamur(int celcius){
//     return celcius * 4/5;
// }

// int fahrenheit(int celcius){
//     return (celcius*9/5) +32;
// }

// int kelvin(int celcius){
//     return celcius + 273;
// }

// char cetak (int r, int f, int k){
//     int reamur = r;
//     int fahrenheit = f;
//     int kelvin = k;
//     return printf("Hasil Konversi reamur : %d , fahrenheit : %d, kelvin : %d",reamur,fahrenheit,kelvin);
// }

// int main(){
//     int celcius;
//     int outputreamur,outputfahrenheit,outputkelvin; 
//     celcius = input();
//     outputreamur = reamur(celcius);
//     outputfahrenheit = fahrenheit(celcius);
//     outputkelvin = kelvin(celcius);
//     cetak(outputreamur,outputfahrenheit,outputkelvin);
//     // printf("Hasil Konversi reamur : %d , fahrenheit : %d, kelvin : %d",outputreamur,outputfahrenheit,outputkelvin);
    
// }

void konversiSuhu(int celcius) {
    int reamur = celcius * 4 / 5;
    int fahrenheit = celcius * 9 / 5 + 32;
    int kelvin = celcius + 273;
    
    printf("Hasil Konversi:\n");
    printf("Reamur   : %d\n", reamur);
    printf("Fahrenheit: %d\n", fahrenheit);
    printf("Kelvin    : %d\n", kelvin);
}

int main() {
    int celcius;
    printf("Masukkan derajat suhu Celcius yang akan dikonversi: ");
    scanf("%d", &celcius);
    
    konversiSuhu(celcius);
    return 0;
}