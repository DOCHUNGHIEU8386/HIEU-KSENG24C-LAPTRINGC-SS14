#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char chuoi[] = "Hello, world!";
    printf("Chu?i ban d?u: %s\n", chuoi);
    char kyTu;
    printf("Nh?p v�o m?t k� t? b?t k?: ");
    scanf("%c", &kyTu);
    int soLanXuatHien = countOccurrences(chuoi, kyTu);
    printf("S? l?n xu?t hi?n c?a k� t? '%c' trong chu?i l�: %d\n", kyTu, soLanXuatHien);
    
    return 0;
}

