#include<stdio.h>

int main(){
    float num1, num2;
    printf("Enter the two number: ");
    scanf("%f %f", &num1, &num2);

    printf("The result is: %f", (num1/num2) );

    return 0;
}