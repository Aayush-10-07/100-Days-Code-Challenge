#include<stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    if (scanf("%c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z') {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Uppercase Vowel\n");
        } else {
            printf("Uppercase Consonant\n");
        }
    } else if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Lowercase Vowel\n");
        } else {
            printf("Lowercase Consonant\n");
        }
    } else {
        printf("Not an alphabet.\n");
    }

    return 0;
}
