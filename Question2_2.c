// calculate the simple intrest and compound intrest 

#include<stdio.h>
#include<math.h>

int main(){
    int principle, time;
    // SI = P * ROI * t
    // CI = P * (1+ROI)^t - P
    float ROI, SI, CI;

    printf("Enter the Principle Value: ");
    scanf("%d", &principle);
    printf("Enter the Rate of Intrest: ");
    scanf("%f", &ROI);
    printf("Enter the time value: ");
    scanf("%d",&time);

    ROI = ROI/100;

    SI = principle * ROI * time;
    CI = ( principle * pow(1 + ROI, time) ) - principle;

    printf("The Simple Intrest is: %0.2f \n", SI);
    printf("The Compound Intrest is: %0.2f \n", CI);

    return 0;
}