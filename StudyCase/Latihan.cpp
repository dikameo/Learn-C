#include <stdio.h>

int main() {
    char arr[4][100] = {"sapi", "kuda", "kucing"}; // Array dengan elemen sampai indeks 3
	char kosong[10] = "sapi";
    for (int i = 0; i < 4; i++) {
        if (i <= 3) {
            printf("Elemen pada indeks %d: %s\n", i, arr[i]);
        }
    }

    return 0;
}

