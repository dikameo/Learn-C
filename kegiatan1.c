#include<stdio.h>
#include <string.h>
    // char username[] = "dika";
    // char realpassword[] = "123";
    // char inputUsername[] ="";
    // char inputPassword[] = "";

    // do
    // {
    // printf("masukkan username anda :");
    // scanf("%s",&inputUsername);
    // printf("masukkan password anda :");
    // scanf("%s",&inputPassword);

    //     if (inputUsername==username && inputPassword == realpassword)
    //     {
    //         printf("Selamat Datang\n");
    //     }else{
    //         printf("User atau Password salah\n");
    //     }
        
    // } while (inputUsername!=username && inputPassword != realpassword);


int main() {
    char username[] = "dika";
    char realpassword[] = "123";
    char inputUsername[50]; // Adjust the size as per your requirements
    char inputPassword[50]; // Adjust the size as per your requirements

    do {
        printf("masukkan username anda: ");
        scanf("%s", inputUsername);
        printf("masukkan password anda: ");
        scanf("%s", inputPassword);

        if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, realpassword) == 0) {
            printf("Selamat Datang\n");
            break; // Exit the loop if the login is successful
        } else {
            printf("User atau Password salah\n");
        }
    } while (1); // Infinite loop until correct login

    return 0;
}


    
