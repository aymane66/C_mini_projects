#include <stdio.h>

/* This program prompts the user to insert two numbers A and B
 * If the two numbers inserted have the same sign, the program displays
 * the reverse.
 * If the two numbers have different signs, the program displays
 * the sum and the product of A and B.
 */

void calc(int *n1, int *n2)
{
    int *P1 = n1;
    int *P2 = n2;

    if ((*P1 > 0 && *P2 > 0) || (*P1 < 0 && *P2 < 0))
    {
        int u;
        u = *P1;
        *P1 = *P2;
        *P2 = u;
        printf("A = %d \nB = %d ", *P1, *P2);
    }

    else
    {
        *P1 = *P1 + *P2;
        printf("A = %d\n", *P1);
        *P2 = -*P2 * *P1;
        printf("B = %d", *P2);
    }
}

int main()
{
    int n1, n2;
    int *P1 = &n1;
    int *P2 = &n2;

    printf("Insert the value of A: ");
    scanf("%d", P1);
    printf("Insert the value of B: ");
    scanf("%d", P2);

    calc(P1, P2);

    return 0;
}