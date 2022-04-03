#include<stdio.h>

int main(){
    int arr[50][50], squre;
    printf("Enter the number of rows and columns: ");
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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("It\'s upper triangular matrix is: \n");
    for(int i = 0; i<squre; i++){
        for (int j = 0; j < squre; j++){
            if(j < i){
                printf("  ");
                continue;
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}