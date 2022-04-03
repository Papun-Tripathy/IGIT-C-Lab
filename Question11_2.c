/*
Write a program to create a structure COMPLEX to represent a complex number. Using 
the structure write a program to add two complex numbers and display their sum.
*/

#include<stdio.h>

struct ComplexNumber{
    int real;
    int imaginary;
};
int main(){
    struct ComplexNumber num1, num2, sum;
    printf("For Complex number 1\n");
    printf("Enter the real part: ");
    scanf("%d", &num1.real);
    printf("Enter the Imaginary part: ");
    scanf("%d", &num1.imaginary);
    printf("For Complex number 2\n");
    printf("Enter the real part: ");
    scanf("%d", &num2.real);
    printf("Enter the Imaginary part: ");
    scanf("%d", &num2.imaginary);
    printf("The First Complex Number is: %d + %di \n",num1.real,num1.imaginary);
    printf("The Second Complex Number is: %d + %di \n",num2.real,num2.imaginary);

    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    printf("Sum of two Imaginary number is: %d + %di",sum.real,sum.imaginary );


    return 0;
}