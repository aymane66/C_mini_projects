#include <stdio.h>

// A simple program that promps the user for 10 numbers then displays them

int main()

{
    int n, i, r;
    printf("Insert a number: ");
    scanf("%d", &n);
    i = 0;

    do
    {
        i++;
        r = i + n;
        printf("%d\n", r);
    }

    while (i <= 10);

    return 0;
}