
#include <stdio.h>

int main() {
    int number;
    printf("Masukkan angka : ");
    scanf("%d", &number);

    printf("Faktor dari %d :", number);

    int jumlah ; // Variabel untuk menyimpan hasil penjumlahan faktor-faktor
	int i;
	
	if(number>=0){
		
    for ( i = 1; i <= number; i++) {
 
        if (number % i == 0) {
            printf(" %d", i); // faktor yang ditampilkan
            jumlah += i; // Tambahkan faktor ke dalam jumlah
        }else{
        	
		}
    	}
    printf("\nTotal faktor: %d\n", jumlah);
	}else{
		printf(" bilangan harus positif");
    // printf("\nTotal faktor: %d\n", jumlah);
	}

    
    //Flowchart
    //Inputan masuk
    // lakukan looping
    // jika number % i == 0 putaran pertama i bernilai 1,  6 % 1 == 0
    // kemudian cetak bilangan faktor 1
    // jumlahkan 0+1 =1
    // jika number % i == 0 putaran kedua i bernilai 2, 6 % 2 == 0
    // kemudian cetak bilangan faktor 2
    // jumlahkan 1+2 = 3
    // jika number % i == 0 putaran ketiga i bernilai 3, 6 % 3 == 0
    // kemudian cetak bilangan faktor 3
    // jumlahkan 3+3 =6
    // jika number % i == 0 putaran keempat i bernilai 4, 6 % 4 != 0 maka di akan dilanjutkan
    // jika number % i == 0 putaran kelima i bernilai 4, 6 % 5 != 0 maka di akan dilanjutkan
    // jika number % i == 0 putaran keenam i bernilai 6, 6 % 6 == 0
    // kemudian cetak bilangan faktor 3
    // jumlahkan 6+6 =12

    // kenapa sisa bagi harus nol karena kalau sisa bagi selain 0 maka akan terjadi eror
    return 0;
}


