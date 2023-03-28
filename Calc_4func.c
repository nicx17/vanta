#include <stdio.h>
void main()
{
    int a, b, c, d;

    printf("Enter value of 2 numbers ");
    scanf("%d%d", &a, &b);
    printf("Enter value to perform function\n");
    printf("1 for addition \n");
    printf("2 for subtraction \n");
    printf("3 for multiplication \n");
    printf("4 for division\n");
    scanf("%d", &c);

    if (c == 1)
    {
        d = a + b;
        printf("Answer is %d", d);
    }
    else if (c == 2)
    {
        d = a - b;
        printf("Answer is %d", d);
    }
    else if (c == 3)
    {
        d = a * b;
        printf("Answer is %d", d);
    }
    else if (c == 4)
    {
        d = a / b;
        printf("Answer is %d", d);
    }
}