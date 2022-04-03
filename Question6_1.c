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

    for(int i = 0; i < num-1; i++){
        for(int j = i +1; j < num; j++){
            if(arr[i] < arr[j]){
                temp = arr[j];
                arr[j]= arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("The sorted array in decending order is: \n");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}