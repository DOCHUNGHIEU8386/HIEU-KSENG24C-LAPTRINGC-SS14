#include <stdio.h>
#include <string.h>

void inputString(char *str, int size) {
    printf("Nh?p m?t chu?i: ");
    fgets(str, size, stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char chuoi[100];
        inputString(chuoi, sizeof(chuoi));
        int doDaiChuoi = strlen(chuoi);
        printf("Chu?i b?n v?a nh?p l�: %s\n", chuoi);
    printf("�? d�i c?a chu?i l�: %d\n", doDaiChuoi);
    
    return 0;
}

