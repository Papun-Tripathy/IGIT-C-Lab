#include<stdio.h>
#include<math.h>
int main(){
    typedef float decimal;
    typedef int integer;
    integer principle, time;
    // SI = P * ROI * t
    // CI = P * (1+ROI)^t - P
    decimal ROI,SI, CI;

    printf("Enter the Principle Value: ");
    scanf("%d", &principle);
    printf("Enter the Rate of Intrest: ");
    scanf("%f", &ROI);
    printf("Enter the time value: ");
    scanf("%d",&time);
    ROI = ROI/100;
    printf("%d %f %d", principle, ROI, time);

    SI = principle * ROI * time;
    CI = ( principle * pow(1 + ROI, time) ) - principle;

    printf("The Simple Intrest is: %0.2f \n", SI);
    printf("The Compound Intrest is: %0.2f \n", CI);

    return 0;
}