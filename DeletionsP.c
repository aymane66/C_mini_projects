#include <stdio.h>

/* This program prompts the user for X numbers, then asks them which number
 * they want to delete.
 * The program then displays the inserted numbers with the number
 * selected deleted.
 */

int main()
{
    int v;
    int *p = &v;
    printf("How many numbers you want to choose? \n");
    scanf("%d", p);

    int N[v];
    int *P1 = N;
    printf("Insert %d numbers: \n", *p);
    for (P1 = N; P1 < N + *p; P1++)
    {
        printf("Number %d: ", P1 - N + 1);
        scanf("%d", P1);
    }

    int D;
    int *P2 = &D;
    printf("What number you want to delete from the list? \n");
    scanf("%d", P2);

    int *T1 = N;
    int *Q = N;
    for (T1 = N; T1 < N + *p; T1++)
    {

        if (*T1 != *P2)
        {
            *Q = *T1;
            Q++;
        }
    }

    for (Q = N; Q < N + (*p - 1); Q++)
    {
        printf("%d  ", *Q);
    }

    return 0;
}