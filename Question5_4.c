// 1 - (2/3!) + (3/4!) - (4/5!) + (5/6!) - ........ +/- (n/(n+1)!)
#include<stdio.h>

// long factorialCalculator(int number){
//     long result = 1;
//     for (int i = 2; i <= number; i++){
//         result = i * result;
//     }
//     return result;
// }

int main(){
    int num;
    double sum = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++ ){
        long result = 1;
        for (int j = 2; j <= i+1; j++){
            result = j * result;
        }
        if(i%2 == 0){
            sum = sum - ((float)i/result);
        }else{
            sum = sum + ((float)i/result);
        }
    }
    printf("The sum is: %lf", sum);
    return 0;
}