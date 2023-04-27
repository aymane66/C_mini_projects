#include <stdio.h>
#include <math.h>

/* This program solves quadratic equations using a discrimant*/
int main()

{
    float a, b, c, d, e, f, g, h;

    printf("Insert value of a: ");
    scanf("%f", &a);
    printf("Insert value of b: ");
    scanf("%f", &b);
    printf("Insert value of c: ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    if (d < 0)
        printf("No solution in R");
    else if (d == 0)
    {
        e = (-b) / (2 * a);
        printf("Solution: %.2f", e);
    }

    else
    {
        g = ((-b - sqrt(d)) / (2 * a));
        h = ((-b + sqrt(d)) / (2 * a));
        printf("Solution 1: %.2f \nSolution 2: %.2f", g, h);
    }

    return 0;
}