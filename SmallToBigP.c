#include <stdio.h>

/* This prorgam prompts the user for x numbers, then the program
 * displays the numbers inserted from the smallest to the biggest.
 */

int main()
{
    int n;
    int *P0 = &n;
    printf("How many numbers do you want to insert?  ");
    scanf("%d", P0);

    int N[n];
    int *P1 = N;
    printf("Insert %d numbers: \n", *P0);

    for (P1 = N; P1 < N + *P0; P1++)
    {
        printf("Number %d: ", P1 - N + 1);
        scanf("%d", P1);
    }

    int tmp;
    int *P2, *P3;
    for (P2 = N; P2 < N + *P0 - 1; P2++)
    {

        for (P3 = P2 + 1; P3 < N + *P0 - 1; P3++)
        {

            if (*P2 > *P3)
            {
                tmp = *P2;
                *P2 = *P3;
                *P3 = tmp;
            }
        }
    }

    printf("Numbers sorted from smallest to biggest: \n");
    for (P1 = N; P1 < N + *P0; P1++)
    {
        printf("%d ", *P1);
    }

    return 0;
}
