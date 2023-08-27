#include <stdio.h>
int main(){
	int array[100];
	int inp;
	int min=0;
	int banyakdata;
	
	printf("Banyak Elemen dalam Array : ");
	scanf("%d",&banyakdata);
	
	printf("Masukkan Elemen ke dalam array : \n");
	for(int i=0; i<banyakdata; i++){
		printf("Elemen : ");
		scanf("%d",&inp);
		array[i] = inp;
	}
	
	printf("tampilkan data yang telah anda inputkan : ");
	for(int i = 0; i<banyakdata; i++){
		printf(",%d",array[i]);
	}
}
