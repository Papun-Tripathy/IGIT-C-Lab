#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    num%2 == 0 ? 
        printf("The number %d is a Even number", num) : 
        printf("The number %d is a Odd number", num); 

    return 0;
}