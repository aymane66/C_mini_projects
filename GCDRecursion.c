#include <stdio.h>

int gcd(int n1, int n2) // gcd = Greatest common divisor
{
    if (n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2);
}

int main()
{
    int n1, n2;
    printf("Insert number 1: ");
    scanf("%d", &n1);

    printf("Insert number 2: ");
    scanf("%d", &n2);

    printf("The GCD of %d and %d is: %d", n1, n2, gcd(n1, n2));

    return 0;
}