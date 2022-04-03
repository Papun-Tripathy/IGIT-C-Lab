#include<stdio.h>

int main(){
    int arr[50][50], squre, diognal1 = 0, diognal2 = 0;

    printf("Enter the row and column of the squre matrix: ");
    scanf("%d", &squre);

    printf("Enter the elemets: \n");
    for (int i = 0; i < squre; i++){
        for (int j = 0; j < squre; j++){
            printf("Enter element-[%d][%d]: ",i+1, j+1);
            scanf("%d", &arr[i][j]);
            if(i == j){
                diognal1 += arr[i][j];
            }
            if( i + j == squre-1){
                diognal2 += arr[i][j];
            }
        }
    }
    
    printf("The matrix is: \n");
    for(int i = 0; i < squre; i++){
        for(int j = 0; j < squre; j++){
            printf("%d ", arr[i][j]);     
        }
        printf("\n");
    }

    printf("Sum of first diagonal matrix (LeftTop-RightBottom): %d\n", diognal1);
    printf("Sum of Second diagonal matrix (RightTop-LeftBottom): %d\n", diognal2);
    return 0;
}