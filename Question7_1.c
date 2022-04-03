#include<stdio.h>

int main(){
    int arr[50][50], isSymmetric = 1, squre;

    printf("Enter number of rows and columns: ");
    scanf("%d", &squre);

    printf("Enter the elements\n");
    for (int i = 0; i < squre; i++){
        for (int j = 0; j < squre; j++){
            scanf("%d", &arr[i][j]);   
        }
    }
    printf("The Array is: \n");

    for(int i = 0; i<squre; i++){
        for (int j = 0; j < squre; j++){
            if(arr[i][j] != arr[j][i]){
                isSymmetric = 0;
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(isSymmetric){
        printf("The matrix is a symmetric matrix");
    } else{
        printf("The matrix is not a symmetric matrix");
    }
    
    return 0;
}