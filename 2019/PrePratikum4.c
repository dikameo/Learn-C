#include<stdio.h>
#define size 4
int main(){

    // float score1, score2, score3, score4;
    // // printf("Masukkan 4 nilai float: \n");
    // // scanf_s("%f",&score1);
    // // scanf_s("%f",&score2);
    // // scanf_s("%f",&score3);
    // // scanf_s("%f",&score4);
    // // printf("Skor dalam urutan terbalik adalah sebagaimana berikut: \n");
    // // scanf_s("%.2f\n",&score1);
    // // scanf_s("%.2f\n",&score2);
    // // scanf_s("%.2f\n",&score3);
    // // scanf_s("%.2f\n",&score4);

    // printf("Masukkan 4 nilai float: \n");
    // scanf("%f",&score1);
    // scanf("%f",&score2);
    // scanf("%f",&score3);
    // scanf("%f",&score4);
    // printf("Skor dalam urutan terbalik adalah sebagaimana berikut: \n");
    // printf("%.2f\n",score4);
    // printf("%.2f\n",score3);
    // printf("%.2f\n",score2);
    // printf("%.2f\n",score1);

    // float score[size];
    // int i;
    // printf("Masukkan %d nilai float: ",size);
    // for(i=0; i<=(size-1); i=i+1){
    //     printf("%f",score[i]);
    // }

    // printf("The scores in reverse order are: \n");
    // for ( i = size; i >= 0; i=i+1)
    // {
    //     printf("%.2f\t",score[i]);
    //     printf("\n");
    // }

    // const size = 4;
    // float score[size];
    // int i;

    // printf("Masukkan %d nilai float: ", size);
    // for (i = 0; i < size; i++) {
    //     scanf("%f", &score[i]);
    // }

    // printf("The scores in forward order are: \n");
    // for (i = 0; i < size; i++) {
    //     printf("%.2f\t", score[i]);
    //     printf("\n");
    // }

    // printf("The scores in reverse order are: \n");
    // for (i = size - 1; i >= 0; i--) {
    //     printf("%.2f\t", score[i]);
    //     printf("\n");
    //     printf("%.2f\t", score[5]);
    // }

    // 5. tidak ada perubahan
    // 6. program pertama tidak menerapkan perulangan,array dan tidak efektif, program kedua menerapkan perulangan ada array
    // 7. dari indeks 0 hingga 3
    // 8. 4 elemen
    // 9. sudah
    // 10. dalam variabel size bernilai 4 sedangkan dalam indeks array hanya memiliki maksimal indeks sampai indeks ke 3, sehingga apabila dimasukkan 4 maka akan bernilai 0 karena indeks melebihi 3
    

    // KEGIATAN II
    // c0   c1  c2   c3
    // 1    2   3    4  baris 0
    // 5    6   7    8  baris 1
    // 9    10  11   12 baris 2
    int i,j,a[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for ( i = 1; i >= 0; i--){ //perulangan pada dimensi pertama / baris
        for ( j = 3; j >= 0; j--){ //perulangan pada dimensi kedua / kolom
        printf("a[%d][%d] = %d\t",i,j,a[i][j]);
        printf("\n");
        }
    }
    // apabila perulangan pada dimensi kedua sudah dicetak semua, kemudian perulangan dimensi pertama melanjutkan kembali
    // 2. baris 2 hingga 0 dan kolom 3 hingga 0 =  12 11 10 9 8 7 6 5 4 3 2 1 
    // 3. baris 2 hingga 0 dan kolom 0 hingga 0 =  9 5 1
    // 4. baris 1 hingga 0 dan kolom 3 hingga 0 =  8 7 6 5 4 3 2 1

    



}
