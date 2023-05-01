#include <stdio.h>

// This program calcilates the sum, product, division, and substraction of two numbers.

int main()
{
    int n1, n2;
    int *P1 = &n1;
    int *P2 = &n2;
    printf("Insert two numbers: \n");
    printf("Number 1: ");
    scanf("%d", P1);
    printf("Number 2: ");
    scanf("%d", P2);

    printf("Total of %d and %d is: %d\n", *P1, *P2, *P1 + *P2);
    printf("Difference between %d and %d is: %d\n", *P1, *P2, *P1 - *P2);
    printf("Product of %d and %d is: %d\n", *P1, *P2, *P1 * *P2);
    if (*P2 != 0)
    {
        printf("Division of %d and %d is: %.2f\n", *P1, *P2, (float)*P1 / *P2);
    }
    else
        printf("The division by 0 is impossible. ");

    return 0;
}
