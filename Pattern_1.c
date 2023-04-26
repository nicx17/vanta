#include <stdio.h>
void main()
{
    int i, j, k, a;
    printf("Enter n for no of lines");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = i; j < a; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}