/* Print the following structure
  4 3 2 1 2 3 4   
    3 2 1 2 3
      2 1 2
        1

*/

#include<stdio.h>

int main(){
    int isNotRepeating = 1, num, totalChar, disNum, i = 0, spaces, row, space = 0;

    // printf("Enter the number: ");
    // scanf("%d", &num);
    num = 4;
    spaces = 1;
    for(row = num; row>0; row--){
        // for loop for spaces
        for(int k = 0;k<spaces;k++){    //
            printf(" ");
        }
        isNotRepeating = 1;
        space = 0;
        totalChar = row * 4;
        disNum = row;

        for(i = 1; i< totalChar; i++){
            if(i %2 ==0){
                printf("%d", disNum);
                space = 0;
            } else{
                printf(" ");
                space = 1; 
            }
            if(isNotRepeating && disNum != 1) {
                space ? 0 :
                disNum-- ; 
            } else {
                space ? 0 :
                disNum++ ;
                isNotRepeating= 0;
            }
        }
        spaces = spaces + 2; //
        printf("\n");
    }

    return 0;
}

// This is called efficient coding remember it!!!!.... from past papun tripathy 3/22/2022 2:56PM
/*
#include<stdio.h>

int main(){
    
    for(int i = 4; i >= 1; i--){
        for(int k = 4; k > i; k--){
            printf("  ");
        }
        for(int j = i; j > 1; j--){
            printf("%d ",j);
        }
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
*/