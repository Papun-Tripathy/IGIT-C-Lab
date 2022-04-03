#include<stdio.h>

int main(){
    float inputNumber;
    printf("Enter the price of the item: ");
    scanf("%f", &inputNumber);

    printf("Item price is: %4.0f paise", inputNumber * 100);

    return 0;
}