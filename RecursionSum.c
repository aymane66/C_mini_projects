#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
        return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Insert a number: ");
    scanf("%d", &n);

    printf("The sum of numbers from 1 to %d is: %d", n, sum(n));

    return 0;
}