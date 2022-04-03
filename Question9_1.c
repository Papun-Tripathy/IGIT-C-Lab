/*
Write a program using pointers to input a 4X5 matrix and then display it
*/

#include<stdio.h>

void main(){
    int arr[4][5], *ptr = arr;
    for(int i = 0; i < 20; i++){
        printf("Enter the element %d: ",i+1);
        int val;
        scanf("%d", ptr);
        ptr++;
    }
    printf("The elements are\n");
    for(int i = 0; i< 4;i++){
        for(int j = 0; j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}