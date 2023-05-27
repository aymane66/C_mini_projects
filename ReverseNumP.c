#include <stdio.h>

// With the use of pointers only, This program prompts the user for x numbers, then reverse them //

int main()
{
    int n;
    int *P1 = &n;
    printf("How many numbers do you want to insert? \n");
    scanf("%d", P1);

    int N[n];
    int *P2 = N;
    printf("Insert %d numbers: \n", *P1);

    for (P2 = N; P2 < N + *P1; P2++)
    {
        printf("Number %d: ", P2 - N + 1);
        scanf("%d", P2);
    }

    int *P3 = N;
    int tmp;
    for (P2 = N, P3 = N + (n - 1); P2 < P3; P2++, P3--)
    {
        tmp = *P2;
        *P2 = *P3;
        *P3 = tmp;
    }

    printf("Reversed numbers are: \n");
    for (P2 = N; P2 < N + *P1; P2++)
        printf("%d  ", *P2);

    return 0;
}