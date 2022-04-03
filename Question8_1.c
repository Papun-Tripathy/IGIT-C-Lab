/*
 Write a program to find out the length of a string without using the strlen() function.
*/

#include<stdio.h>
#include<string.h>

void main(){
    int i = 0;
    char str[] = "Pratyush Tripathy";
    while (str[i] != '\0'){
        i++;
    }
    printf("Total length of the string is: %d",i+1);
    
}