#include <stdio.h>
void main()
{
    int op;
    float lr, br, rc, ar;
    printf("Enter 1 for area of circle\nEnter 2 for area of rectangle ");

    scanf("%d ", &op);

    switch (op)
    {
    case 1:
        printf("Enter radius of circle");
        scanf("%f", &rc);
        ar = 3.14 * rc * rc;
        printf("Area of circle is %f", ar);
        break;
    case 2:
        printf("Enter length and breath of rectangle");
        scanf("%f%f", &lr, &br);
        ar = lr * br;
        printf("Area of rectangle is %f", ar);
        break;

    default:
        printf("Invalid input");
        break;
    }
}