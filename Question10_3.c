/*
Use recursive function calls to evaluate the following series: 
x - (x^3/3!) + (x^5/5!) - (x^7/7!) + …
*/

#include<stdio.h>
#include<math.h>

long calculateFactorial(int val){
    if(val == 1) return 1;
    return val * calculateFactorial(val-1);
}

double calculate(int val){
    double result = 0;
    for(int i = 0; i <= val/2; i++){
        if(i%2 == 0){
            result = result + ( pow(val, ( (2*i) + 1 )) / calculateFactorial(2*i+1) );
        } else {
            result = result - ( pow(val, ( (2*i) + 1 )) / calculateFactorial(2*i+1) );
        }
    }
    return result;
}

void main(){
    int xValue;
    double result;
    printf("Enter the value of x in the series(series will continue till (x^x)/x!): ");
    scanf("%d", &xValue);
    result = calculate(xValue);
    printf("The result is: %f", result);

}
