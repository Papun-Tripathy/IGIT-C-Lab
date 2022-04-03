/*
Write a program to convert a sparse matrix given in regular form to 3-tuple form.
*/

#include <stdio.h>

int main()
{
    int row, column, count = 0;
    printf("Enter the Rows and Columns of a normal matrix:");
    scanf("%d %d", &row, &column);

    int matrix[row][column];

    printf("Enter the values for matrix[%d][%d]\n", row, column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Element[%d][%d]:- ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix elements are: \n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] != 0){
                count++;
            }
        }
        printf("\n");
    }
    int sprase[count][3];
    int place = 1;
    sprase[0][0] = row;
    sprase[0][1] = column;
    sprase[0][2] = count;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] != 0)
            {
                sprase[place][0] = i;
                sprase[place][1] = j;
                sprase[place][2] = matrix[i][j];
                place++;
            }
        }
    }
    printf("Sprase of the matrix is: \n");
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sprase[i][j]);
        }
        printf("\n");
    }

    return 0;
}