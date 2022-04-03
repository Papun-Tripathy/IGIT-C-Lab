// write a program to convert celcious to farhenit and vice versa
#include<stdio.h>
#include<conio.h>


void main() {
    float cel, far;
    printf("Enter the temperature in celcious: ");
    scanf("%f", &cel);

    far = (9 * cel) / 5 + 32 ;
    printf("temperature in fahrenheit is: %f\n", far);

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &far);

    cel = (far - 32) * (5.0 / 9.0);
    printf("temperature in celcious is: %f\n", cel);

    getch();

}