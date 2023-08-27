#include <stdio.h>
#include <string.h>
int main(){
	char nama[] = "Wahyu Andika";
	char copy[100];
	int panjang = strlen(nama); // cek banyak karakter
	strcpy(copy,nama); // Untuk Copy nilai dari String
	printf("Panjang dari karakter %s: %d\n",nama,panjang);
	printf("Copy dari karakter %s: %s\n",nama,copy);
	
	//Membandingkan nilai string
	char str1[] = "sapi";
	char str2[] = "sapi";
	int result = strcmp(str1,str2); // Apabila benar maka nilai output berninlai 0
	printf("%d\n",result);
	if(result<0){
		printf("%s bernilai kurang dari %s\n",str1,str2);
	}else if (result > 0) {
        printf("%s bernilai lebih dari %s\n",str1,str2);
    } else {
        printf("%s bernilai sama %s\n",str1,str2);
    }
    
//	Menggabungkan nilai dari 2 string yang berbeda
	char hewan[] = "Sapi";
	char warna[] = " coklat";
	strcat(hewan,warna);
	printf("gabungan dari kedua string : %s\n",hewan);
	
// Mencari substring
	char kalimat [] = "sapi memakan rumput di sawah";
	char cari[] = "memakan";
	char *ketemu = strstr(kalimat,cari);
	printf("ditemukan :%s",ketemu);
}
