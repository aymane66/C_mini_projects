#include <stdio.h>

int sum(int table[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return table[n - 1] + sum(table, n - 1);
    }
}

int main()
{
    int n = 5;
    int table[n];
    printf("Insert 5 numbers: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &table[i]);
    }

    printf("Sum of the numbers: %d", sum(table, n));

    return 0;
}