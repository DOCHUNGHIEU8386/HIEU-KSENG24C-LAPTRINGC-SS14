#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello, world!";
    
    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }
    
    printf("\n"); 
    
    return 0;
}

