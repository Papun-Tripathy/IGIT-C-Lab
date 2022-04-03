/*
Write a program using function to input a m x n matrix (of integers) and then find the 
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it
*/

#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
   *a = *b;
    *b = temp;
}

void calculateTheValues(int *matrix, int row, int column){
    for(int *i = matrix; i < ( matrix + (row * column) ); i++){
        for(int *j = i + 1; j < ( matrix + (row * column) ); j++){
            if(*i < *j){
                swap(i,j);
            }
        }    
    }
}

void main(){
    int row, column, temp;
    printf("Enter the row and column of the matrix: ");
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    printf("Enter the elements of the Matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter element[%d][%d]: ", i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    calculateTheValues(&matrix[0][0], row, column);
    printf("The largest number in the matrix is: %d", matrix[0][0]);
    printf("\nThe second largest number in the matrix is: %d", matrix[0][1]);
    printf("\nThe smallest number in the matrix is: %d", matrix[row - 1][column -1]);
    printf("\nThe second smallest number in the matrix is: %d", matrix[row - 1][column -2]);
}