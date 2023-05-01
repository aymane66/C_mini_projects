#include <stdio.h>

// This program prompts the user to insert a number then calculates its factorial

int main()

{
    int n, f, v;

    printf("Insert a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Insert a positive number.");
    }

    else if (n == 0)
    {
        printf("The answer is: 1");
    }

    else
    {
        f = 1;
        for (v = 1; v <= n; v++)
        {
            f *= v;
        }
        printf("The factorial of %d is %d", n, f);
    }

    return 0;
}