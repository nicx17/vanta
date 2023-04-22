#include <stdio.h>
void main()
{
    float celc, farh, conv;
    printf("Enter temperature in farenheit ");
    scanf("%f", &farh);
    celc = (farh - 32) / 1.8;

    printf("Temperature is %f ℃\n", celc);
    printf("Enter temperature in celcius ");
    scanf("%f", &celc);
    conv = (celc * 9 / 5) + 32;
    printf("Temperature is %f ℉ ", conv);
}