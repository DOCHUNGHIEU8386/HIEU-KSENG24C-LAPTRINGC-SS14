#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {

    char chuoi[] = "Hello, world!";
    printf("Chu?i ban d?u: %s\n", chuoi);
    reverseString(chuoi);
    printf("Chu?i sau khi d?o ngu?c: %s\n", chuoi);
    
    return 0;
}

