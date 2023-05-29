#include <stdio.h>
#include <stdlib.h>

// This program calculates the sum of odd numbers from 1 up to the given input.

int main()
{
    int *n = malloc(sizeof(int));
    printf("Insert a number: ");
    scanf("%d", n);

    int *s = malloc(sizeof(int));
    *s = 0;
    for (int i = 1; i <= *n; i += 2)
    {
        *s += i;
    }

    printf("Total of odd numbers from 1 to %d is: %d ", *n, *s);

    free(n);
    free(s);

    return 0;
}