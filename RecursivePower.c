#include <stdio.h>

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * power(n, p - 1);
    }

}

int main()
{
    int n, p;
    printf("Insert a number: ");
    scanf("%d", &n);
    printf("Insert power: ");
    scanf("%d", &p);

    printf("The power of %d by %d is: %d\n", n, p, power(n, p));

    return 0;
}