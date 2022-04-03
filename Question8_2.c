/*
Write a program that will count the number of occurrences of a specific character in a 
given line of text
*/
#include<stdio.h>
#include<string.h>

void main(){
    char passage[] = "hello there i am Pratyush tripathy from Rayagada.";
    int counter =0;
    printf("the passage is:\n%s\n", passage);
    printf("Enter the character you want to search: ");
    char search = getchar();

    for(int i = 0; i < strlen(passage); i++){
        if(passage[i] == search) {
            counter++;
        }
    }
    printf("The letter \'%c\' occured in the Passage: %d times", search, counter);

}