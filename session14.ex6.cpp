#include <stdio.h>
#include <string.h>

int isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int countLetters(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isLetter(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    
    char chuoi[100];
    
    printf("Nh?p m?t chu?i: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    size_t len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }
    
    int soLuongChuCai = countLetters(chuoi);
    
    printf("S? lu?ng ký t? là ch? cái trong chu?i là: %d\n", soLuongChuCai);
    
    return 0;
}

