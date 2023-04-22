#include <stdio.h>
void main()
{
    float a;
    printf("Enter number ");
    scanf("%f", &a);
    if (a == 0)
    {
        printf("Number entered is zero");
    }
    else
    {
        printf("Entered number is not zero");
    }
}