// swap two numbers
#include<stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Two value before swapping: %d & %d \n", num1, num2);
    num3 = num1 ;
    num1 = num2 ;
    num2 = num3 ;

    printf("Two value after swapping: %d & %d", num1, num2);

    return 0;
}