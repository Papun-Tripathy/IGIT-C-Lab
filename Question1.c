// calculate the smallest of 3 numbers
#include<stdio.h>
#include<conio.h>

void main(){
    int num1, num2, num3;
    printf("Enter the 3 Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3)
        printf("Greatest number of all 3 is: %d", num1);
    else if (num2 > num3)
        printf("Greatest number of all 3 is: %d", num2);
    else
        printf("Greatest number of all 3 is: %d", num3);
}
