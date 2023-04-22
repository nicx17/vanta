#include <stdio.h>
void main()
{

    int rev = 0, org, rem, n;
    printf("\nEnter value ");
    scanf("%d", &n);
    org = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == org)
    {
        printf("\n%d is a palindrome ", rev);
    }
    else
    {
        printf("\nNot a Pallindrome");
    }
}