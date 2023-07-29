#include<stdio.h>
int main(){
/* 
1. 10 mod 2
    10 / 2 = 5
    10 - (2 * 5) 
    10 - 10 = 0
2. 11 mod 7  
    11 / 7 = 1
    11 - (7 * 1)
    11 - 7 = 4
3. 6 + ( 9 mod 2 )
    9/2 = 4
    9 - (4*2)=1
    6 + 1 = 7
4. 17 = x + 104 mod 3
    17 - 104 = x mod 3
    -87 = x mod 3
    -87 = 3 * (-29) + x
    x = -87 - (3 * (-29))
    x -87 + 87
    x = 0
*/ 

// int i=1;
//  for (i = 1; i<=500; i++){
//     printf("%d\n",i);
//  }

// do
// {
//     printf("%d\n",i);
//     i++;
// } while (i<=500);

// while (i<=500)
// {
//     printf("%d\n",i);
//     i++;
// }

//int JumlahLakiLaki = 6;
//int JumlahPerempuan = 3;
//
//int i = 0;
//int j;
//while(i<JumlahLakiLaki+JumlahPerempuan){
//    for(j=0; j<2; j++){
//        printf("L");
//    }
//
//    printf("P");
//    i+=3;
//}

int maxLine = 199;
int i;
for(i=0; i<maxLine; i++){
    if(i%3==0 && i %5==0){
        printf("FizzBuzz");
    }else if(i%3==0){
        printf("Fizz");
    }else if (i%5==0){
        printf("Buzz");
    }else{
        printf(i);
    }
}
}
