#include<stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("enter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%f celsius= %f fahrenheit ", celsius, fahrenheit);

    return 0;
}
