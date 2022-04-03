#include<stdio.h>

int main(){
    int number, copy, temp, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    copy = number;

    while(copy != 0){
        temp = copy%10;
        sum = sum + (temp *temp *temp);
        copy = copy /10;
    }
    if(sum == number){
        printf("The number %d is a amstrong number", number);
    } else {
        printf("The number %d is not a amstrong number",number);
    }

    return 0;
}