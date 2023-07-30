#include<stdio.h>

int diskonPertama(int total){
    int diskon;
    diskon = (total*0.1);
    total -= diskon;
    return printf("diskon : %d \ntotal bayar anda sebesar : %d \n\n Selamat berbelanja kembali :b",diskon,total);
}

int diskonKedua(int total){
    int diskon;
    diskon = (total*0.2);
    total -= diskon;
    return printf("diskon : %d \ntotal bayar anda sebesar : %d \n\n Selamat berbelanja kembali :b",diskon,total);
}

int diskonKetiga(int total){
    int diskon;
    diskon = (total*0.25);
    total -= diskon;
    return printf("diskon : %d \ntotal bayar anda sebesar : %d \n\n Selamat berbelanja kembali :b",diskon,total);
}
int main(){
    int barang, total;
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("Masukkan harga barang %d :",i);
        scanf("%d",&barang);
        total+=barang;
    }
    
    if(total<100000){
        printf("tidak ada potongan harga, terima kasih\n");
        printf("total bayar amda sebesar %d\n",total);
    }else if(total >=100000 && total < 300000){
        printf("anda mendapatkan potongan harga 10 persen\n");
        printf("total harga : %d \n",total);
        diskonPertama(total);
    }else if(total >=300000 && total < 500000){
        printf("anda mendapatkan potongan harga 20 persen\n");
        printf("total harga : %d \n",total);
        diskonKedua(total);
    }else if(total >=500000){
        printf("anda mendapatkan potongan harga 25 persen\n");
        printf("total harga : %d \n",total);
        diskonKetiga(total);
    }
}
