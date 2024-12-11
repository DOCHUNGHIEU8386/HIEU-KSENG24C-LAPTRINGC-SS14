#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countWords(const char *str) {
    bool inWord = false;
    int wordCount = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }
    
    return wordCount;
}

int main() {
    char chuoi[100];
    printf("Nh?p m?t chu?i: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    size_t len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }
    int soLuongTu = countWords(chuoi);
    printf("S? t? trong chu?i là: %d\n", soLuongTu);
    
    return 0;
}

