#include<stdio.h>

int main(){
    int val1, val2, val3;

    printf("Enter the 3 numbers: ");
    scanf("%d %d %d", &val1, &val2, &val3);

    if(val1 < val2 && val1 < val3){
        printf("The smallest value is: %d", val1);
    } else if(val2 < val3){
        printf("The smallest value is: %d", val2);
    } else {
        printf("The smallest value is: %d", val3);
    }

    return 0;
}