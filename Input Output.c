#include<stdio.h>
int main (){
    int a;
    float b;
    printf("Masukkan nilai a :");
    scanf("%d",&a);// penulisan harus seperti ini
    printf("Masukkan nilai b :");
    scanf("%f",&b);

    printf("nilai a=%d\n",a);
    printf("nilai b=%.1f\n",b);
}
