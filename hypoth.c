#include <stdio.h>
#include <math.h>

// This program prompts the user for two values then calculates the Pythagorean theorem.

int main()

{
    int a, b, c;

    printf("Value of A: ");
    scanf("%d", &a);
    printf("Value of B: ");
    scanf("%d", &b);

    c = sqrt((a * a) + (b * b));

    printf("C = %d", c);
}