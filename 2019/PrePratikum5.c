#include <stdio.h>
#include <string.h>

#define elemen 4

int main() {
    char arrnama[elemen][100] = {"sapi", "kuda", "kucing", "kerbau"};
    int i, pilih, hapus;
    char carinama[100];

        printf("Data nama:\n");
        for (i = 0; i < elemen; i++) {
            printf("\n %d. %s", i + 1, arrnama[i]);
        }
        printf("\n");
    do {

        printf("\n\nPilih Menu:\n");
        printf("1. Cari Nama\n2. Hapus Nama\n3. Program Selesai\n");
        printf("Pilih Nomer yang akan dipilih: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1:
                printf("Masukkan Nama yang ingin dicari: ");
                scanf("%s", carinama);
                int found = 0;
                for (i = 0; i < elemen; i++) {
                    if (strcmp(arrnama[i], carinama) == 0) {
                        printf("Nama %s Ditemukan\n", carinama);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Tidak ditemukan\n");
                }
                break;
            case 2:
                printf("Masukkan Nomor yang ingin anda hapus: ");
                scanf("%d", &hapus);
                if (hapus >= 1 && hapus <= elemen) {
                    hapus--;
                    for (i = hapus; i < elemen - 1; i++) {
                        strcpy(arrnama[i], arrnama[i + 1]);
                    }
                    strcpy(arrnama[elemen - 1], ""); // Mengosongkan elemen terakhir
                    printf("Nama berhasil dihapus\n");
                    printf("Data nama yang diperbarui:\n");
                    for (i = 0; i < elemen; i++) {
                        printf("\n %d. %s", i + 1, arrnama[i]);
                    }
                    printf("\n");
                } else {
                    printf("Nomor tidak valid\n");
                }
                break;
            case 3:
                printf("Program berhenti\n");
                break;
            default:
                printf("Pilihan tidak valid\n");
                break;
        }
    } while (pilih != 3);

    return 0;
}

