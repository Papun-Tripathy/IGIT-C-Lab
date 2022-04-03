#include<stdio.h>

int main(){
    int math, physics, chemistry, total;

    printf("Enter the marks of mathematics: ");
    scanf("%d", &math);

    printf("Enter the marks of physics: ");
    scanf("%d", &physics);

    printf("Enter the marks of physics: ");
    scanf("%d", &chemistry);

    total = math + physics + chemistry;

    if(math >= 60 && physics >= 50 && chemistry >= 40 && total >= 200){
        printf("Admitted");
    } else {
        printf("Not Admitted");
    }

    return 0;
}