#include<stdio.h>

int main(){
    char value;
    printf("Enter the character: ");
    scanf("%c", &value);
    
    (value >= 65) && (value <= 90) || (value >= 97) && (value <= 122) ? 
    (value ==65) ||(value ==69) ||(value ==73) ||(value ==79) || (value ==85) ||
    (value ==97) ||(value ==101) ||(value ==105) ||(value ==111) || (value ==117) ? 
    printf("The character is a Vowel") :
    printf("The character is a Consonant"): 
    printf("This is not a alphabet");

    return 0;
}