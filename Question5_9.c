#include<stdio.h>

int main(){
    int number, sum =0;

    printf("Enter the number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number/2; i++){
        if(number % i == 0){
            sum = sum + i;
        }
    }
    if(sum == number){
        printf("The number %d is a prefect number", number);
    }else{
        printf("The number %d is not a prefect number", number);
    }

    return 0;
}