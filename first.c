
#include<stdio.h>

void main ()
{
    int a, d, c;
    printf("Enter value of 3 numbers ");
    scanf("%d %d %d", &a, &d, &c);

    if (a > d && a > c)
        {
            printf("A is largest");
        }
    else  if (d > a && d > c){ 
                  printf("B is largest");
                  printf("%d", d);
            } else{
                printf("C is largest");
                } 
    }

   