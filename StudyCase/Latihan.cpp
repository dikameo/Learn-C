#include<stdio.h>
int main(){
	int i;
	int arr[]={4,2,1,78,3};
	int urutan[100];
	int rangearr = sizeof(arr) / sizeof(arr[0]);
	
	for(i=0; i<rangearr; i++){
		int cek = i;
		for (int j = i + 1; j < rangearr; j++) {
            if (arr[j] > arr[cek]) {  
                cek = j;
            }
        }
			int tmp = arr[i];
			arr[i] = arr[cek];
			arr[cek] = tmp;
		}
	
	printf("Urutan: %d",arr[0]);
//	for(i=0; i<rangearr; i++){
//		printf("%d,",arr[i]);
//	}
	
}




