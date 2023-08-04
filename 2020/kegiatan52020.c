#include <stdio.h>

#define N 5

// Fungsi untuk mencetak matriks
void printMatrix(double mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%lf ", mat[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk menukar dua baris pada matriks
void swapRows(double mat[N][N], int row1, int row2) {
    for (int i = 0; i < N; i++) {
        double temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}

int main() {
    double mat[N][N]; // Matriks untuk menyimpan elemen-elemen matriks

    printf("Masukkan elemen-elemen matriks berukuran 5x5:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("Matriks yang dimasukkan:\n");
    printMatrix(mat);

    // Proses eliminasi Gauss-Jordan
    double det = 1.0;
    for (int i = 0; i < N; i++) {
        // Jika elemen diagonal utama adalah nol, tukar baris dengan baris di bawahnya yang tidak nol
        if (mat[i][i] == 0) {
            int found = 0;
            for (int j = i + 1; j < N; j++) {
                if (mat[j][i] != 0) {
                    swapRows(mat, i, j);
                    det *= -1.0; // Mengubah tanda determinan ketika menukar baris
                    found = 1;
                    break;
                }
            }

            // Jika tidak ditemukan elemen non-nol di bawah elemen diagonal, maka determinan akan menjadi 0
            if (!found) {
                det = 0;
                break;
            }
        }

        // Lakukan eliminasi Gauss untuk mengubah elemen-elemen di bawah elemen diagonal menjadi 0
        for (int j = i + 1; j < N; j++) {
            double factor = mat[j][i] / mat[i][i];
            for (int k = i; k < N; k++) {
                mat[j][k] -= factor * mat[i][k];
            }
        }
        det *= mat[i][i]; // Kalikan dengan elemen diagonal utama saat ini
    }

    printf("Determinan matriks adalah: %lf\n", det);

    return 0;
}

