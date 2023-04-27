#include <stdio.h>

// A basic program that displays 10 numbers a user inserted

int main()

{
    int n, i, r;

    printf("Insert a number:");
    scanf("%d", &n);
    i = 0;
    while (i <= 10)
    {
        i++;
        r = n + i;
        printf("%d\n", r);
    }
    return 0;
}