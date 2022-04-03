/*
Write a program using function to determine whether a year is a leap year or not
*/

#include<stdio.h>

int leepYearOrNot(int year){
    if(year % 4 == 0){
        return 1;
    } else return 0;
}

void main(){
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);

    if(leepYearOrNot(year)){
        printf("The year %d is a leap year", year);
    } else{
        printf("The year %d is not a leap year", year);
    }
}