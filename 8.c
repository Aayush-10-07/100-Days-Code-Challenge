#include<stdio.h>

int main(){
    int a, b, c;
    printf("enter 1st number: ");
    scanf("%d", &a);

    printf("enter 2nd number: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping\n");
    printf("first number= %d\n", a);
    printf("second number= %d\n", b);

    return 0;
}
