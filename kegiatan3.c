#include<stdio.h>

int waktu(int detik){
    float jam,menit,hari;
    menit = detik/60;
    jam = menit/60;
    hari = jam/24;

    return printf("%d Detik, %f Menit, %f Jam, %f Hari \n",detik,menit,jam,hari);
}

int main(){
    double a = 311205*4; // 6 digit awal dikali 4
    double b = 201810370311205/123456789; // semua digit mahasiswa dibagi 123456789 
    double c = 201810  + 311205; // 6 diit awal ditambah 6 digit terakhir
    waktu(a);
    waktu(b);
    waktu(c);

}
