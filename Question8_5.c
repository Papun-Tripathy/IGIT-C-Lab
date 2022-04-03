/*
Write a program which reads a string and prints it in alphabetical order. For example, the 
word WELCOME should be displayed as CEELMOW.
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[1000], temp;

    printf("enter the string: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j < strlen(str); j++){
            if( (int)str[i] < (int)str[j] ){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("String in Alphabetical order: \"%s\"", str);
}