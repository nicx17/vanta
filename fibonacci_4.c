#include <stdio.h>

int main()
{
    int i, a = 0, b = 1, show = 0, num_terms;

    printf("Enter the number of terms of Fibonacci series to be printed: ");
    scanf("%d", &num_terms);

    printf("%d %d ", a, b);

    for (i = 3; i <= num_terms; i++)
    {
        show = a + b;
        a = b;
        b = show;
        printf("%d ", show);
    }

    return 0;
}
