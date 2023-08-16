#include<stdio.h>
int main(){
	int num = 5;
	int *ptr =&num;
	
	
	printf("ini nilai dari num : %d ini nilai dari heksadesimal:%x\n ",num,&num);
	printf("ini nilai dari ptr : %d ini nilai dari heksadesimal:%x\n ",ptr,&ptr);
	printf("ini nilai dari *ptr : %d ini nilai dari heksadesimal:%x\n",*ptr,&*ptr);
	*ptr = 8;
	printf("ini nilai dari *ptr perubahan-2 : %d ini nilai dari heksadesimal:%x\n",*ptr,&*ptr);
}
