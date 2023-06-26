#include <stdio.h>

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Insert a number: ");
    scanf("%d", &n);

    printf("Result:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}