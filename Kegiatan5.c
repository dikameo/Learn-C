#include<stdio.h>
#define N 3
int main(){
    // // c0 c1 c2 
    // // 1 2 3  baris 0
    // // 4 5 6  baris 1
    // // 7 8 9  baris 2
    // int a[3][3] = {{ 1,2,3 },{4,5,6},{7,8,9}};

    // int i,j;
    // for ( i = 0; i < 3 ; i+=2)
    // {
        
    //     for ( j = 0; j < 3; j+=2)
    //     {
    //         printf("a[%d][%d] = %d\t\n",i,j,a[i][j]);
           
    //     }
        
    // }
    // // diagonal kanan
    // // {0,0} , {1,1} , {2,2}
    // // {0,3} , {1,1}, {2,1}

    int matrix[N][N];
    int i, j, sumDiagonal1 = 0, sumDiagonal2 = 0, diffDiagonal;

    // Input matriks
    printf("Masukkan elemen matriks %dx%d:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Menghitung jumlah elemen diagonal utama (diagonal dari kiri atas ke kanan bawah)
    for (i = 0; i < N; i++) {
        sumDiagonal1 += matrix[i][i];
    }

    // Menghitung jumlah elemen diagonal sekunder (diagonal dari kanan atas ke kiri bawah)
    for (i = 0; i < N; i++) {
        sumDiagonal2 += matrix[i][N - 1 - i];
    }

    // Menghitung selisih diagonal
    diffDiagonal = sumDiagonal1 - sumDiagonal2;

    // Menampilkan matriks dan selisih diagonal
    printf("\nMatriks yang dimasukkan:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSelisih diagonal matriks: %d\n", diffDiagonal);

    return 0;
}