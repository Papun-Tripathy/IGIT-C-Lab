#include<stdio.h>

int main(){
    int num, temp;
    int arr[1000];
    
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter %d input: \n", num);
    for(int i = 0; i < num; i++){
        printf("Element - %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    // for getting the second largest number
    for(int i = 0; i < 2; i++){
        for(int j = i +1; j < num; j++){
            if(arr[i] < arr[j]){
                temp = arr[j];
                arr[j]= arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("The second Largest number is: %d \n", arr[1]);
    for(int i = 0; i < 2; i++){
        for(int j = i +1; j < num; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j]= arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("The second Smallest number is: %d ", arr[1]);

    return 0;
}