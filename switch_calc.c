#include <stdio.h>
void main()
{
    int op, a, b, r;
    printf("Enter value of two numbers");
    scanf("%d%d", &a, &b);
    printf("Enter 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for modulus ");
    scanf("%d", &op);

    switch (op)
    {

    case 1:
        r = a + b;
        printf("Answer is  %d", r);
        break;
    case 2:
        r = a - b;
        printf("Answer is  %d", r);
        break;
    case 3:
        r = a * b;
        printf("Answer is  %d", r);
        break;
    case 4:
        r = a / b;
        printf("Answer is  %d", r);
        break;
    case 5:
        r = a % b;
        printf("Answer is  %d", r);
        break;

    default:
        printf("Invail input");
        break;
    }
}