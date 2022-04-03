#include<stdio.h>

int main(){
    long int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%ld",&num);

    while (num != 0) {
        count++;
        num = num /10;
    }
    printf("The number contains %d digits", count);

    return 0;
}