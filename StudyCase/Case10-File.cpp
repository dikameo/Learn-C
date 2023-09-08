#include <stdio.h>
int main(){
	FILE *perkenalan;
	perkenalan = fopen("perkenalan.txt","a");
	
//	Input
	char nama[100];
	printf("Masukkan Nama : ");
	scanf("%s",&nama);
	printf("Data Berhasil Dikirim\n");
	
	fprintf(perkenalan,"List : %s\n",nama);
	fclose(perkenalan);
	
	perkenalan = fopen("perkenalan.txt","r");
	
//	Cetak Dari Input
	char cetak[100]; // variabel bebas
	while(fgets(cetak,100,perkenalan)){
		printf("%s",cetak);
	}

	fclose(perkenalan);
	
	
	
	// r = (Membaca)tidak dapat diedit hanya menampilkan nilai sebelum diedit
	// w = (Menulis) Bisa melakukan Edit
	// a = (Append) Menambahkan nilai sebelumnya Serta Mengedit
	
	// r+ = Read And Write
	
}
