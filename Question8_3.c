/*
Write a program that takes as input a string and two numbers n1 and n2 and find the 
substring between these two positions. For example, let the string is “Welcome” and the numbers are 
n1=2 and n2=5 then the substring will be: “lcom”.
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[1000], newStr[1000];
    int start, end, count = 0;

    printf("Enter the string: ");
    gets(str);

    printf("Enter the starting and ending index of the substring: ");
    scanf("%d %d", &start, &end);

    if(start == end) {
        printf("Entered starting and ending values are identical!!!");
        return ;
    }
    for (int i = start; i < end; i++){
        newStr[count++] = str[i]; 
    }
    newStr[count]= '\0';
    printf("The substring is: %s", newStr );
}