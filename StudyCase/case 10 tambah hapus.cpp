#include<stdio.h>
#include<string.h>


int main(){
	char hewan[4][100] ={"sapi","ayam","kucing","kuda"};
	int pilihan,hapus;
	int count = 4;
	int found = 0;
	char namahewan[100];
	for(int i =0; i<4; i++ ){
		printf("%d.%s\n",i+1,hewan[i]);
	}
	
	printf("\nPilih pilihan anda: \n1.Cari\n2.Delete\n3.Stop\n");
	printf("pilihan anda :");
	scanf("%d",&pilihan);
	
	switch(pilihan){
		case 1:
			//Cari
			printf("Cari array yang anda cari :");
			scanf("%s",&namahewan);
			for(int i=0; i<4; i++){
			int result = strcmp(namahewan,hewan[i]);
			if(result ==0){
				printf("Ditemukan");
				found = 1;
				break;
			}
		}		
		if(!found){
			printf("tidak Ditemukan");
		}
		case 2:
//			printf("Hapus Pilihan anda :");
//            int hapus;
//            scanf("%d", &hapus);
//            printf("Elemen yang dihapus: %s\n", hewan[hapus - 1]);
//
//            // Menggeser elemen-elemen setelah elemen yang dihapus
//            for (int i = hapus - 1; i < count ; i++) { //Ini Dikurangi 1 karena indeks elemen itu dimulai dari 1
//                strcpy(hewan[i], hewan[i + 1]);
//            }
//            
//            count--;
//
//            printf("Isi Array setelah penghapusan:\n");
//            for (int i = 0; i < count; i++) {
//            	if(i<=count){
//            		printf("\n %d. %s", i + 1, hewan[i]);
//				}
//            }

			printf("Masukkan Nomor yang ingin anda hapus: ");
                scanf("%d", &hapus);
                if (hapus >= 1 && hapus <= count) {
                    hapus--;
                    for (int i = hapus; i < count - 1; i++) {
                        strcpy(hewan[i], hewan[i + 1]);
                    }
                    strcpy(hewan[count-1], ""); // Mengosongkan elemen terakhir (4-3 = 1 maka nilai ke 1)
                    printf("Nama berhasil dihapus\n");
                    printf("Data nama yang diperbarui:\n");
                    for (int i = 0; i < count; i++) {
                        printf("\n %d. %s", i + 1, hewan[i]);
                    }
                    printf("\n");
                } else {
                    printf("Nomor tidak valid\n");
                }
                break;
            break;
		}		
	
			
	
	}
	
	
