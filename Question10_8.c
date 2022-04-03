/*
Write a function using pointers that compares two integer arrays to see whether they 
are identical. The function returns 1 if they are identical, 0 otherwise.
*/

#include<stdio.h>

int identicalMatrix(int* matrix1, int*matrix2, int row, int column){
    for(int i = 0; i < row*column; i++){
        if( *(matrix1+i) != *(matrix2+i) ){
            return 0;
        }
    }
    return 1;
}

void main(){
    int row, column;
    printf("Enter the rows and columns of the two matrix: ");
    scanf("%d %d",&row, &column);

    int matrix1[row][column], matrix2[row][column];

    printf("Enter the elements of the Matrix1: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter the element[%d][%d]: ",i+1,j+1 );
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the elements of the Matrix2: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter the element[%d][%d]: ",i+1,j+1 );
            scanf("%d",&matrix2[i][j]);
        }
    }
    if(identicalMatrix(&matrix1[0][0], &matrix2[0][0], row, column)){
        printf("Both the matrix are Identical");
    } else {
        printf("Both the matrix are not Identical");
    }

}