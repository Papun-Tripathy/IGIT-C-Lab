/*Write a menu-based program that takes two matrixes A and B as input and displays the 
results of the following operations based on user’s choice
A + B
A - B
B - A
A * B
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int arr1[10][10], arr2[10][10], resultMatrix[10][10];
    int row, column, choice = 0, multiplication = 0;

    printf("Enter the number of rows and column for both the matrix A & B: ");
    scanf("%d %d", &row, &column);

    printf("Enter the elements of first Matrix A\n");
    for (int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter element[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter the elements of Second Matrix B\n");
    for (int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("Enter element[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    while(1){
        char goOn;
        printf("\n----------------------------------------------------------------\n");
        printf("1: A + B \n");
        printf("2: A - B \n");
        printf("3: B - A \n");
        printf("4: A * B \n");
        printf("0: Exit \n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 0: 
                return ;
            case 1:
                for(int i = 0; i < row; i++)
                    for(int j = 0; j < column; j++)
                        resultMatrix[i][j] = arr1[i][j] + arr2[i][j];
                
                printf("The resultant matrix is: \n");

                for(int i = 0; i < row; i++){
                    for(int j = 0; j < column; j++){
                        printf("%d\t", resultMatrix[i][j]);
                    }
                    printf("\n");
                }
                printf("press any key to continue...");
                goOn = getch();
                break;

            case 2: 
                for(int i = 0; i < row; i++)
                    for(int j = 0; j < column; j++)
                        resultMatrix[i][j] = arr1[i][j] - arr2[i][j];
                
                printf("The resultant matrix is: \n");

                for(int i = 0; i < row; i++){
                    for(int j = 0; j < column; j++){
                        printf("%d\t", resultMatrix[i][j]);
                    }
                    printf("\n");
                }
                printf("press any key to continue...");
                goOn = getch();
                break;

            case 3: 
                for(int i = 0; i < row; i++)
                    for(int j = 0; j < column; j++)
                        resultMatrix[i][j] = arr2[i][j] - arr1[i][j];
                
                printf("The resultant matrix is: \n");

                for(int i = 0; i < row; i++){
                    for(int j = 0; j < column; j++){
                        printf("%d\t", resultMatrix[i][j]);
                    }
                    printf("\n");
                }
                printf("press any key to continue...");
                goOn = getch();
                break;
            
            case 4: 
                /*
                    number of rows of first matrix should be equal with the number of column of the 
                    second matrix then we can have a successful matrix multiplication.
                */
                if(row != column){
                    printf("Matrix multiplycation of these two matrix is not possible!!!\n");
                    break;
                }
                for(int i = 0; i < row; i++){
                    for(int j = 0; j < row; j++){
                        multiplication = 0;
                        for(int k = 0; k < column; k++){
                            multiplication = multiplication +arr1[i][k] * arr2[k][j]; 
                        }
                        resultMatrix[i][j] = multiplication;
                    }

                }
            
                printf("The resultant matrix is: \n");

                for(int i = 0; i < row; i++){
                    for(int j = 0; j < column; j++){
                        printf("%d\t", resultMatrix[i][j]);
                    }
                    printf("\n");
                }
                printf("press any key to continue...");
                goOn = getch();
                break;
            
            default:
                printf("invalid Input Try again!!!");
                break;
        }
    }
    

}
