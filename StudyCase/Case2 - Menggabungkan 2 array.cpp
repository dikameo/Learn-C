#include<stdio.h>
int main(){
	int arraypertama[]= {20,2,46,7};
	int arraykedua[] = {10,40,2,1};
	int bigarray[100];
	
	int jmlap= sizeof(arraypertama)/sizeof(arraypertama[0]);
	int jmlak= sizeof(arraykedua)/sizeof(arraykedua[0]);
	int i;
	int indeks=0;//dimulai dari 0
	
//	Menampilkan data A
	printf("Berikut data dari array A\n");
	for(i=0; i<jmlap; i++){
		printf(" Data %d",arraypertama[i]);
		bigarray[indeks] = arraypertama[i];
		indeks++; // menabahkan menggunakan indeks tidak menggunakan i
		
	}
	
//	Menampilkan data B
	printf("\nBerikut data dari array B\n");
	for(i=0; i<jmlak; i++){
		printf(" Data %d",arraykedua[i]);
		bigarray[indeks] = arraykedua[i];
		indeks++;// nilai dari indeks perulangan kedua akan melanjutkan dari perluangan pertama
	}
// Menampilkan Total data 
	printf("\n\nBerikut data dari array A dan B\n");
	for(i=0; i<jmlap+jmlak; i++){
		printf(" Data %d",bigarray[i]);
	}
}
