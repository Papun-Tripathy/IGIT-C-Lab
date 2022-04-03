/*
Write a program using function to input a m x n matrix (of integers) and then transpose 
it
*/

#include<stdio.h>

void transposeMatrix(int *ptr,int *destination, int row, int column){
    int *fromTheArray, *toTheArray; 
    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            fromTheArray = ptr + (column * i) + j;
            toTheArray = destination + (column * j) + i;
            *toTheArray = *fromTheArray;
        }
    }
}

void main(){
    int row, column;
    printf("Enter the rows and column of the matrix: ");
    scanf("%d %d", &row, &column);

    int matrix[row][column], transpose[column][row];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter the Element [%d][%d]: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    transposeMatrix(&matrix[0][0], &transpose[0][0], row, column);
    printf("The matrix is: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The transverse of the Matrix is: \n");
    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}