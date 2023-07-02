#include <stdio.h>

ascending(int n)
{
    if (n != 0)
    {
        ascending(n - 1);
        printf("%d ", n);
    }
}

descending(int n)
{
    if (n != 0)
    {
        printf("%d ", n);
        descending(n - 1);
    }
}

int main()
{
    int n;
    printf("insert a number: ");
    scanf("%d", &n);

    descending(n);
    printf("\n");
    ascending(n);

    return 0;
}