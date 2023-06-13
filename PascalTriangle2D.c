#include <stdio.h>

// This program prompts the user for the value of N
// Then it displays Pascal triangle.

int main()
{
    int n;
    int table[10][10];
    do
    {
        printf("Insert the value of n (Max 10): ");
        scanf("%d", &n);
    } while (n > 10 || n < 0);

    for (int i = 0; i <= n; i++)
    {
        table[i][0] = 1;
        table[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            table[i][j] = table[i - 1][j] + table[i - 1][j - 1];
        }
    }

    printf("\nPascal triangle degree %d:\n", n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}