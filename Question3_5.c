#include<stdio.h>

int main(){
    int value, sum;
    printf("Enter the value: ");
    scanf("%d",&value);

    sum = (value% 10) + ((value / 10)%10) + ((value / 100)%10) + ((value / 1000)%10);

    printf("Sum of the digits is: %d", sum);

    return 0;
}