#include <stdio.h>

int main(){
    int num;
    printf("Enter an integer: ");

    if (scanf("%d", &num) == 1) {
        if (num >= 0) {
            if (num == 0) {
                printf("The entered number is Zero.\n");
            } else {
                printf("The entered number is Positive.\n");
            }
        } else {
            printf("The entered number is Negative.\n");
        }
    } else {
        printf("Invalid input! Please enter a valid integer.\n");
    }
    return 0;
}

