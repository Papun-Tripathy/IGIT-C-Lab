#include<stdio.h>

int main(){
    char value;
    printf("Enter the character: ");
    scanf("%c", &value); 
    (value >= 65) && (value <= 90) ? printf("The character is a Uppercase Letter") : 
    (value >= 97) && (value <= 122) ? printf("The character is a Lowercase Letter")
    : printf("This is not a alphabet");

    return 0;
}