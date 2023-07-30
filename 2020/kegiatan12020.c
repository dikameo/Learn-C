#include<stdio.h>
#include <string.h>

int main() {
    char username[] = "dika";
    char password[] = "123";
    int nilai ;
    char inputUsername[50]; // Adjust the size as per your requirements
    char inputPassword[50]; // Adjust the size as per your requirements

    do {
        printf("masukkan username anda: ");
        scanf("%s", inputUsername);
        printf("masukkan password anda: ");
        scanf("%s", inputPassword);

        if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, password) == 0) {
            printf("Masukkan Nilai anda :");
            scanf("%d",&nilai);
            // break; // Exit the loop if the login is successful
            if (nilai>=80)
            {
                /* code */
                 printf("Selamat anda lolos di informatika \n");
                break;
            }else{
                printf("Silahkan coba tahun depan semangat \n");
                break;
            }
            
        } else {
            printf("User atau Password salah\n");
        }
    } while (1); // Infinite loop until correct login

    return 0;
}


    
