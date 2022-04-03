/*
Write a program using pointers to read an array of integers and print its elements in 
reverse order
*/

#include<stdio.h>

void main(){
    printf("Enter the rows and columns of the array: ");
    int row, column;
    scanf("%d %d", &row, &column);

    int arr[row][column], *ptr = &arr[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j<column; j++){
            printf("Enter element [%d][%d]: ",i+1,j+1 );
            scanf("%d", ptr);
            ptr = ptr + 1;
        }
    }
    ptr--;
    printf("The elements in reverse order is: \n");
    for(int i = 0; i< row * column;i++){
        printf("%d ", *(ptr--));
        if( (i != 0) && ( i % row == (row - 1) ) ){
            printf("\n");
        }
    }
}