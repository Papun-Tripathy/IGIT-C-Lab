#include<stdio.h>

int main(){
    int size, position;
    float newval;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    float arr[size+1];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++){
        printf("Enter element - %d: ", i);
        scanf("%f", &arr[i]);
    }
    printf("Enter the new element: ");
    scanf("%f", &newval);
    printf("Enter the position wher the new value will go: ");
    scanf("%d", &position);
    // this is for setting the index
    position--;
    // this is fpr increasing the size of the array 
    size++;
    for(int i = size; i > position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = newval;

    printf("The array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%f, ", arr[i]);
    }    

    return 0;
}