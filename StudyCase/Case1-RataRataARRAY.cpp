#include<stdio.h>
int main(){
	int i,j,inp ;
	
	int sum=0; // harus 0
	float ave=0;	
	
//	JUMLAH DATA
	printf("inputkan berapa  data yang anda masukan ? (1-10)");
	scanf("%d",&inp);
	int arrdata[inp];
//	INPUT DATA
	 printf("Anda Ingin memasukan %d kedalam array\n",inp);
	 for(i=0; i<inp; i++){
	 	printf("elemen ke-%d = ",i+1);
	 	scanf("%d",&arrdata[i]);
	 	sum+=arrdata[i];
	 }
	

    // Calculate average
    ave = (float)sum / inp;

    // Output total and average
    printf("Total data : %d\n", sum);
    printf("Rerata data : %.2f\n", ave);

	return 0;
}
