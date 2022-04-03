#include<stdio.h>

int main(){
    int number,a,b,c;

    printf("Enter the number: ");
    scanf("%d", &number);

    a = 1;
    b = 1;

    printf("%d, %d, ", a,b);
    for(int i = 3; i<=number;i++){
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }

    return 0;
}