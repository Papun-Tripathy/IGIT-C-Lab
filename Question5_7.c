#include<stdio.h>

int main(){
    int num, reverse = 0, temp;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0){
        int value = temp %10;
        reverse= reverse* 10 + value;
        temp = temp / 10;
    }

    if(num == reverse){
        printf("The number %d is a pallendrum number", num);
    } else{
        printf("The number %d is not a pallendrum number", num);
    }

    return 0;
}