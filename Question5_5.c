#include<stdio.h>

int main(){
    int num, sum =0;

    printf("The numbers that are divisible by 7 and lies in between 100 & 200 are: \n");
    for(int i = 100; i<= 200; i++){
        if(i%7 != 0){
            continue;
        }
        printf("%d, ", i);
        sum = sum + i;
    }
    printf("\nThe sum of above numbers is: %d", sum);

    return 0;
}