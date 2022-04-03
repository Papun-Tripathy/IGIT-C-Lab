/* print the following structure
          *
        * * *
      * * * * *
    * * * * * * *
*/
#include<stdio.h>

int main(){
    int spaces = 5, stars = 0;
    for (int i = 0; i < 4 ; i++){
        // for the spaces before the stars
        printf(" ");
        for(int k = 0; k <= spaces; k++){
            printf(" ");
        }
        spaces = spaces -2;
        for(int j = 0; j <= stars; j++){
            printf("* ");
        }
        stars = stars + 2;
        printf("\n");
    }

    return 0;
}