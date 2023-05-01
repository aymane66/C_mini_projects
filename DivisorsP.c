#include <stdio.h>

// This program prompts the user to insert a number, then displays the number´s ivisors.

int main()
{
    int n;
    int *P = &n;

    do
    {
        printf("Insert a number: ");
        scanf("%d", P);
    } while (*P <= 0);

    printf("Divisors of %d are: \n", *P);
    for (int i = 1; i <= *P; i++)
    {
        if (*P % i == 0)
        {
            printf("%d  ", i);
        }
    }

    return 0;
}