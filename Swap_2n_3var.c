#include <stdio.h>
void main()
{

    int a, b, c;
    printf("Enter value of two numbers to swap ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a=%d  b=%d", a, b);
}
