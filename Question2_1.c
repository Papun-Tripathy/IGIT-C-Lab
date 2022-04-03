// calculate the area of the triangle given it's base and height

#include<stdio.h>

int main(){
    float area, base, height;

    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %f", area);

    return 0;
}