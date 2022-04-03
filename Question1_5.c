#include<stdio.h>
#define PI 3.141
int main(){
    float rad, area, peri;

    printf("Enter the radious of the circle: ");
    scanf("%f", &rad);

    area = PI * rad * rad;
    peri = 2 * PI * rad;

    printf("The area is: %f and the Perimeter is: %f", area, peri);

    return 0;
}