#include <stdio.h>

void display(int table[], int n)
{
    if (n != 0)
    {
        display(table, n - 1);
        printf("%d ", table[n - 1]);
    }
}

int main()
{
    int n = 5;
    int table[5];

    for (int i = 0; i < n; i++)
    {
        printf("Row %d: ", i + 1);
        scanf("%d", &table[i]);
    }

    display(table, n);

    return 0;
}