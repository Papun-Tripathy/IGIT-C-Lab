/*
Write a program that reads two strings and then compares them without using the 
strcmp() function.
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str1[1000], str2[1000];
    int len1, len2, compareValue = 0, length;
    printf("enter the string One: ");
    gets(str1);
    len1 = strlen(str1);
    printf("enter the string Two: ");
    gets(str2);
    len2 = strlen(str1);

    if(len1 != len2){
        length = len1 < len2 ? len1 : len2;    
    }
    for(int i = 0; i < length; i++){
        if(str1[i] == '\0' || str2[i] == '\0'){
            break;
        }
        compareValue = compareValue + ( (int)str1[i] - (int)str2[i] ); 
    }
    if(compareValue == 0){
        printf("Both strings are same");
    } else {
        printf("The difference between two strings are: %d", compareValue);
    }
}
