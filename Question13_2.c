/*
Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array
and display the largest and smallest among them.
*/

#include<stdio.h>

int main(){
    int n, swap;
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the integer elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);    
    }

    for(int i =0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[i] < array[j]){
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }

    printf("The elements of the array is: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
    printf("\nThe smallest element of the array is: %d", array[n-1]);
    printf("\nThe biggest element of the array is: %d", array[0]);
    return 0;
}