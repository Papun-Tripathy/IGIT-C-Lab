#include<stdio.h>

int main(){
    char name[50];
    float units, price =0;
    printf("Enter the name of the Consumer: ");
    scanf("%[^\n]s", &name);

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if(units <= 200){
        price =price +( 0.8 * units);
    } else if(units <= 300){
        price =price + (0.8 * 200);
        units = units - 200;
        price = price + (1.3 * units);
    } else{
        price = price + (0.8 * 200);
        units = units - 200;
        price = price+ (1.3 * 100);
        units = units - 100;
        price = price + (2 * units);
    }
    //meter charge +100
    price = price + 100;
    if(price > 400){
        price = price + (0.15 * price);
    }
    printf("The Consumer %s is charged ammount of: %f", name, price);

    return 0;
}