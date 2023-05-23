#include <stdio.h>

/* This program prompts the user to fill up two arrays.
 * Then the program mix up the two arrays in one single array.
 */

int main()
{
    int n1;
    int *p1 = &n1;
    printf("How many numbers do you want to insert in array A? ");
    scanf("%d", p1);

    int A[n1];
    int *P1 = A;
    printf("Insert %d numbers for Array A: \n", *p1);
    for (P1 = A; P1 < A + *p1; P1++)
    {
        printf("Number %d: ", P1 - A + 1);
        scanf("%d", P1);
    }

    int n2;
    int *p2 = &n2;
    printf("How many numbers do you want to insert in array B? ");
    scanf("%d", p2);

    int B[n2];
    int *P2 = B;
    printf("Insert %d numbers for Array B: \n", *p2);
    for (P2 = B; P2 < B + *p2; P2++)
    {
        printf("Number %d: ", P2 - B + 1);
        scanf("%d", P2);
    }

    for (P1 = A + n1, P2 = B; P2 < B + n2; P1++, P2++)
    {
        *P1 = *P2;
    }
    *p1 = *p1 + *p2;

    printf("Result: \n");
    for (P1 = A; P1 < A + n1; P1++)
    {
        printf("%d  ", *P1);
    }

    return 0;
}
