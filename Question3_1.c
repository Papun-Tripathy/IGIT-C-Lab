#include<stdio.h>
#include<math.h>
int main(){
    float side1, side2, side3, semiPeri, area;

    printf("Enter the 3 sides of Triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    semiPeri = (side1+side2+side3)/2;

    area = sqrt(semiPeri*(semiPeri-side1)*(semiPeri-side2)*(semiPeri-side3));

    printf("Area of the triangle is: %0.2f",area);

    return 0;
}