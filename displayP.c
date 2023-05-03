#include <stdio.h>

/* This program prompts the user for x numbers then displays the numbers, using merely pointers
 */

int main()
{
    int v;
    int *p = &v;
    printf("How many numbers do you want to insert? \n");
    scanf("%d", p);

    int N[v];
    int *P = N;
    printf("Insert %d numbers: \n", *p);
    for (P = N; P < N + *p; P++)
    {
        printf("Number %d: ", P - N + 1);
        scanf("%d", P);
    }

    printf("The numbers you inserted are: ");
    for (P = N; P < N + *p; P++)
    {
        printf("%d   ", *P);
    }

    return 0;
}