#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "This is a sample text.";
    char searchArray[] = "This";
    
    // Gabungkan string dan array karakter menjadi satu string
    char combined[strlen(text) + sizeof(searchArray)];
    strcpy(combined, text);
    strcat(combined, searchArray);
    
    // Lakukan pencarian substring dalam string gabungan
    char substr[] = "sample";
    char *result = strstr(combined, substr);
    
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - combined);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}

