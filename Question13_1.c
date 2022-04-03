/*
Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array
and display their sum and average
*/

#include<stdio.h>

int main(){
    int n, sum=0;
    float avg;
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the integer elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    avg = (float)sum / n;

    printf("The elements of the array is: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
    printf("\n The sum of all the avobe number in the array is: %d \n Average of all the number is: %f", sum, avg);

    return 0;
}