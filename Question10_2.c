/*
Write a program using function to take a string as input and then convert all lowercase 
characters to its uppercase equivalent.
*/

#include<stdio.h>
#include<string.h>

void fromLowerToUpper(char *ptr, int len){
    for(int i = 0; i < len; i++){
        if( (int) *ptr >= 97 && (int) *ptr <122 ){
            *ptr = *ptr - 32;
        }
        ptr++;
    }
}

void main(){
    char str[1000];
    printf("Enter the string input: ");
    gets(str);
    int len = strlen(str);
    fromLowerToUpper(&str[0], len);
    printf("The string in loew case is: \n%s", str);
}