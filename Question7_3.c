#include<stdio.h>

int main(){
    int arr[50][50],rows[50], columns[50],row, column;
    for(int i = 0; i < 50;i++) rows[i] = columns[i] = 0;

    printf("Enter the Row of the matrix: ");
    scanf("%d", &row);
    printf("Enter the Column of the matrix: ");
    scanf("%d", &column);

    printf("Enter the elements: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter Element[%d][%d]: ", i+1,j+1);
            scanf("%d", &arr[i][j]);
            rows[i] = rows[i] + arr[i][j];
            columns[j] = columns[j] + arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", arr[i][j]);     
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++){
        printf("The sum of all elements in row-%d: %d\n", i, rows[i]);
    }
    for (int i = 0; i < column; i++){
        printf("The sum of all elements in row-%d: %d\n", i, columns[i]);
    }

    return 0;
}