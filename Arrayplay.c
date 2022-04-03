#include<stdio.h>

void calculateMinMax(int a[], int len, int* min, int* max){
    *min = *max = a[0];
    for(int i = 1; i < len; i++){
        if(*max < a[i]){
            *max = a[i];
        }
        if(*min > a[i]){
            *min = a[i];
        }
    }
}

void main(){
    
    /*
    // basis of a pointer
    int x = 12;
    // initialisation of the variable
    int *ptr;
    // declaration of teh pointer variable 
    ptr = &x;
    // initialisation of the pointer to the 
    printf("Address of x: %d, Value of ptr: %d, *ptr : %d", &x, ptr, *ptr);
    */

    // int a[] = {45,85,751,2,965,48512,47,263,59,854,2,59,63,89,23,-15,487,235};
    /*
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);

    calculateMinMax(a, len, &min, &max);
    printf("These are the minimum: %d, maximum: %d, values in the array.", min, max);
    */

    // int *ptr = a;
    // ptr = ptr + 2;
    // printf("%d\n", ptr);
    // printf("%d\n", &a[2]);

    /*
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr = &a[0][0];
    printf("base ptr address: %d\n", ptr);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("address of A [%d] [%d] : %d and ptr address difference: %d and the value there is: %d\n", i+1,j+1,&a[i][j], ptr - &a[0][0], *ptr);
            ptr = ptr +1;
        }
    }
    pointer = baseAddress + dataTypeSize * column + dataTypeSize + row
    */
   

}