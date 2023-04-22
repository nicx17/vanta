#include <stdio.h>
int main()
{
    int fact = 1, n;
    printf("Enter number ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("\n Factorial = 1");
    }
    else
    {
        while (n > 0)
        {
            fact = fact * n;
            n--;
        }
        printf("\n Factorial = %d", fact);
    }
}