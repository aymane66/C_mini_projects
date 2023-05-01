#include <stdio.h>

// This program prompts the user for a number then displays its divisors

int main()

{
    int n, d;

    printf("Insert a number: ");
    scanf("%d", &n);

    for (d = 1; d <= n; d++)
    {

        if (n % d == 0)
        {
            printf("%d\n", d);
        }
    }

    return 0;
}