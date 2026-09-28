#include<stdio.h>

int main(){
    float rad, area, circumference;
    printf("enter the radius of the circle: ");
    scanf("%d",&rad);

    area = 3.14 * rad * rad;
    circumference = 2 * 3.14 * rad;

    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);

    return 0;

}
