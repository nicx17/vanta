#include <stdio.h>
void main()
{
    int i, j, a;
    char k = 'A';
    printf("Enter n for no of lines");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++, k++)
        {
            printf("%c", k);
        }

        printf("\n");
        k = 'A';
    }
}