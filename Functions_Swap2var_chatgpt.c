#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int p, q, r, s;
    
    printf("Enter two variables: ");
    scanf("%d %d", &p, &q);
    
    swap(&p, &q); // swap p and q
    
    r = p; // assign swapped value of p to r
    s = q; // assign swapped value of q to s
    
    printf("Swapped values are %d and %d\n", r, s);
    
    return 0;
}

void swap(int *x, int *y)
{
    int c = *x;
    *x = *y;
    *y = c;
}
