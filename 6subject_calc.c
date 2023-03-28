#include <stdio.h>
void main()
{
    float a, b, c, d, e, f, g;

    printf("Enter marks scored by student in six subjects \n");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    g = (a + b + c + d + e + f) / 6;
    if (g >= 80 && g <= 100)
    {
        printf("Honors");
    }
    else if (g >= 60 && g <= 79)
    {
        printf("1st division");
    }

    else if (g >= 40 && g <= 59)
    {
        printf("2nd division");
    }

    else if (g >= 20 && g <= 39)
    {
        printf("3rd division");
    }
}