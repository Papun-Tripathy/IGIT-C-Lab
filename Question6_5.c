#include<stdio.h>
int main(){
    int size, arr[1000],prevAvail = 0, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        printf("Element-%d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array is: \n");
    for(int i = 0; i< size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\nElements Frequency is: \n");
    for(int i = 0; i < size; i++){
        prevAvail = 0;
        count = 0;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                prevAvail = 1;
            }
        }
        // if the element is previously available and counted and displayed the frequency so we are avoiding that
        if(prevAvail){
            continue;
        } 
        for (int j = i; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        printf("Occurance of the element %d: %d times\n", arr[i], count);
    }
    return 0;
}