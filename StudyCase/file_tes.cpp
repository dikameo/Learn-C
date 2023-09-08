#include <stdio.h>
main() {
FILE *fp; //pointer untuk variabel FILE bukan nama file
// membuka file dengan mode 'w+' : ditulis, dibaca, menghapus isi yang sudah ada. 
fp = fopen("test.txt", "w+");
//menulis teks dalam file
fprintf(fp, "Ini contoh kalimat untuk menulis sebuah file...\n");
//float f = 1.2;
//fprintf(fp, f); //salah karena opsi 'w+' bukan 'w+b'
//menuliskan teks dalam file
fputs("Contoh menggunakan fungsi fputs untuk menulisi file...\n", fp);
//setelah selesai melakukan operasi baca/tulis sebaiknya file dituup kembali dengan perintah
fclose(fp);
}
