#include <stdio.h>

int combinations(int n, int balls)
{
    if (n == balls)
    {
        return 1;
    }
    else if (n == 1)
    {
        return balls;
    }
    else
    {
        return combinations(n - 1, balls - 1) + combinations(n, balls - 1);
    }
}

int main()
{
    int balls;
    printf("Total number of balls in the box: ");
    scanf("%d", &balls);

    int n;
    printf("Balls picked at once: ");
    scanf("%d", &n);

    printf("The number of combinations of %d balls in picks of %d at once: %d", balls, n, combinations(n, balls));

    return 0;
}
