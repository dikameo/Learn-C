#include<stdio.h>
int main(){
	int array[] = {1,63,50,25,100};
	int rangearray = sizeof(array)/sizeof(array[0]);
	int inp,found;
	
	printf("Masukkan Nilai yang ingin anda cari :");
	scanf("%d",&inp);
	
	
	for(int i=0; i<rangearray; i++){
		if(inp == array[i]){
			found = 1;
			break;
		}

	}
	
	if(found){
		printf("Ditemukan");
	}else{
		printf("Tidak Ditemukan");
	}
	return 0;
}
