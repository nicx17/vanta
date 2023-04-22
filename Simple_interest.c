#include <stdio.h>
void main()
{
    float pri, irate, dur, siest;
    printf("Enter principle amount ");
    scanf("%f", &pri);
    printf("Enter rate of intrest ");
    scanf("%f", &irate);
    printf("Enter duration in years ");
    scanf("%f", &dur);
    siest = (pri * irate * dur) / 100;
    printf("Simple intrest is  %f ", siest);
}