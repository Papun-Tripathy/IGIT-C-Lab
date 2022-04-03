#include<stdio.h>

int main(){
    int arr1[1000], arr2[1000], arr3[2000];
    int sizeA, sizeB, temp, choice, newElement, position, deletePosition;
    int search, searchFind = 0, foundPosition;

    printf("Enter the size of 1st array: ");
    scanf("%d", &sizeA);
    printf("Enter the size of 2nd array: ");
    scanf("%d", &sizeB);

    printf("Enter elements of Array1: \n");
    for (int i = 0; i < sizeA; i++)
    {
        printf("Array1 - Element-%d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of Array2: \n");
    for (int i = 0; i < sizeB; i++)
    {
        printf("Array2 - Element-%d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    while(1){
        searchFind = 0;
        printf("\n-----------------------------------------------------------------\n");
        printf("Chose options:\n");
        printf("Enter 1 for Traverse Array 1\n");
        printf("Enter 2 for Traverse Array 2\n");
        printf("Enter 3 for Insert new element in Array 1\n");
        printf("Enter 4 for Insert new element in Array 2\n");
        printf("Enter 5 for Delete an element from Array 1\n");
        printf("Enter 6 for Delete an element from Array 2\n");
        printf("Enter 7 for Searching an element from Array 1\n");
        printf("Enter 8 for Searching an element from Array 2\n");
        printf("Enter 9 for Sorting elements in Array 1 in ascending order\n");
        printf("Enter 10 for Sorting elements in Array 2 in ascending order\n");
        printf("Enter 11 for merging Array 1 and Array 2 and make Array 3\n");
        printf("Enter 0 for Exit\n");
        printf("\n-----------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 0:
            return 0;
        case 1: 
            printf("Elements in the Array1 are: \n");
            for(int i = 0; i < sizeA; i++){
                printf("%d, ",arr1[i]);
            }
            break;

        case 2: 
            printf("Elements in the Array2 are: \n");
            for(int i = 0; i < sizeB; i++){
                printf("%d, ",arr2[i]);
            }
            break;

        case 3:
            printf("Enter the new Element: ");
            scanf("%d", &newElement);
            printf("Enter the position of the element to add in Array 1: ");
            scanf("%d", &position);
            position--;
            for(int i = sizeA; i > position; i--){
                arr1[i] = arr1[i - 1];
            }
            sizeA++;
            arr1[position] = newElement; 
            break;

        case 4:
            printf("Enter the new Element: ");
            scanf("%d", &newElement);
            printf("Enter the position of the element to add in Array 2: ");
            scanf("%d", &position);
            position--;
            for(int i = sizeB; i > position; i--){
                arr2[i] = arr2[i - 1];
            }
            sizeB++;
            arr2[position] = newElement; 
            break;
        
        case 5: 
            printf("Enter the position of the element to delete from Array1: ");
            scanf("%d", &deletePosition);
            deletePosition--;
            for(int i = deletePosition; i < sizeA; i++){
                arr1[i] = arr1[i+1];
            }
            sizeA--;
            break;

        case 6: 
            printf("Enter the position of the element to delete from Array2: ");
            scanf("%d", &deletePosition);
            deletePosition--;
            for(int i = deletePosition; i < sizeB; i++){
                arr2[i] = arr2[i+1];
            }
            sizeB--;
            break;

        case 7:
            printf("Enter the element to search from Array1: ");
            scanf("%d", &search);
            for(int i = 0; i < sizeA; i++){
                if(arr1[i] == search){
                    foundPosition = i;
                    searchFind = 1;
                    break;
                }       
            }
            if(searchFind){
                printf("Element found at position: %d", foundPosition+1);
            } else {
                printf("Element not found\n");
            }
            searchFind = 0;
            break;
                    
        case 8:
            printf("Enter the element to search from Array1: ");
            scanf("%d", &search);
            for(int i = 0; i < sizeB; i++){
                if(arr2[i] == search){
                    foundPosition = i;
                    searchFind = 1;
                    break;
                }       
            }
            if(searchFind){
                printf("Element found at position: %d", foundPosition+1);
            } else {
                printf("Element not found\n");
            }
            searchFind = 0;
            break;

        case 9:
            for(int i = 0; i < sizeA; i++){
                for (int j = i + 1; j < sizeA; j++)
                {
                    if(arr1[i] > arr1[j]){
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            printf("Array elements after sorting in ascending order: \n");
            for(int i = 0; i < sizeA; i++){
                printf("%d, ", arr1[i]);
            }
            printf("\n");
            break;
                    
        case 10:
            for(int i = 0; i < sizeB; i++){
                for (int j = i + 1; j < sizeB; j++)
                {
                    if(arr2[i] > arr2[j]){
                        temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }
            printf("Array elements after sorting in ascending order: \n");
            for(int i = 0; i < sizeB; i++){
                printf("%d, ", arr2[i]);
            }
            printf("\n");
            break;
        
        case 11:
            for (int i = 0; i < sizeA; i++){
                arr3[i] = arr1[i];
            }
            for (int i = 0; i < sizeB; i++){
                arr3[sizeA + i] = arr2[i];
            }
            printf("Array 3 elements are: \n");
            for (int i = 0; i < sizeA+sizeB; i++){
                printf("%d, ",arr3[i]);
            }
            printf("\n");
            break;

        default:
            printf("Incorrect Input!!!!");
            break;
        }
    }
    
    return 0;
}