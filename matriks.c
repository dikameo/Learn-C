#include<stdio.h>
#define ROW_A 2
#define COL_A 3
#define ROW_B 3
#define COL_B 3

int main(){
    int matriksa[2][2]={{ 1,2 },{3,4}};
    int matriksb[2][2]={{ 5,6 },{7,8}};
    int matriksc[2][3]={{ 5,6,7 },{8,9,10}};
    int penjumlahan[2][2];

    // printf("ini data matriks A :");
    // int i,j;
    // for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         printf(" %d",matriksa[i][j]);
    //     }
        
    // }
    // printf("\nini data matriks B :");
    //     for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         printf(" %d",matriksb[i][j]);
    //     }
        
    // }
    // printf("\nTotal data matriks A + B :");
    //     for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         printf(" %d",matriksa[i][j]+matriksb[i][j]);
    //     }
        
    // }
    // printf("\nTotal data matriks A - B :");
    //     for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         printf(" %d",matriksa[i][j]-matriksb[i][j]);
    //     }
        
    // }

    // int inpkali=4;
    // printf("\n Perkalian data matriks A dengan %d :",inpkali );
    // for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         printf(" %d",matriksa[i][j]*inpkali);
    //     }
        
    // }
    printf("\n Perkalian data matriks 2 dimensi dari matriks a dan c :\n" );

//  #define ROW_A 2
//  #define COL_A 3
//  #define ROW_B 3
//  #define COL_B 2
    int matrixA[ROW_A][COL_A] = {{1, 2, 3},
                                 {4, 5, 6}};

    int matrixB[ROW_B][COL_B] = {{1, 2, 3},
                                 {4, 5, 6},
                                 {7, 8, 9}};

    int resultMatrix[ROW_A][COL_B];

    int i, j, k;
    
    printf("Matriks A\n");
    // Cetak matriks A
    for(i=0; i<ROW_A; i++ ){
        for ( j = 0; j < COL_A; j++)
        {
            printf("%d",matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Matriks B\n");
    // Cetak matriks A
    for(i=0; i<ROW_B; i++ ){
        for ( j = 0; j < COL_B; j++)
        {
            printf("%d",matrixB[i][j]);
        }
        printf("\n");
    }



    printf("Proses Perkalian\n");
    // Inisialisasi matriks hasil dengan 0
    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            resultMatrix[i][j] = 0;
        }
    }
    int hasil ;
    // Perkalian matriks
    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            for (k = 0; k < COL_A; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
                printf("%d * %d  = %d\n",matrixA[i][k],matrixB[k][j],hasil = matrixA[i][k] * matrixB[k][j]);
            }
        printf("\n");
        }
        printf("\n");
    }

    // Cetak hasil perkalian matriks
    printf("Hasil perkalian matriks:\n");
    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

}