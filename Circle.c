#include <stdio.h>
#include <math.h>

void draw_circle(int radius)
{
    int x = 0;
    int y = radius;
    int d = 1 - radius;

    while (x <= y) {
        printf(" ");
        for (int i = 0; i <= 2 * radius; i++) {
            if (i == x + radius || i == -x + radius ||
                i == y + radius || i == -y + radius) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");

        if (d < 0) {
            d = d + 2 * x + 3;
        } else {
            d = d + 2 * (x - y) + 5;
            y--;
        }
        x++;
    }
}

int main()
{
    int radius;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    draw_circle(radius);

    return 0;
}

