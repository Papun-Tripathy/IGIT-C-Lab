#include<stdio.h>

int main(){
    char arr[1000], temp;
    int num;

    printf("Enter the number of inputs: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        if(i == 0) scanf("%c", &arr[i]);
        scanf("%c", &arr[i]);
    }
    printf("The characters are: \n");
    for(int i = 0; i < num; i++){
        printf("%c ", arr[i]);
    }
    printf("\nDeleted duplicate characters are: ");
    for(int i = 0; i < num; i++){
        for(int j = i + 1; j < num;j++){
            if(arr[i] == arr[j]){
                printf("\'%c\', ", arr[j]);
                // for removing the element and shift the whole array to one index behind 
                for(int k = j; k < num - 1; k++){
                    arr[k] = arr[k +1];
                }
                num--;
                j--;
            }
        }
    }
    printf("\nFinal characters remaining are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%c", arr[i]);
    }    

    return 0;
} 