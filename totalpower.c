#include <stdio.h>
#include <math.h>
int main()

{
    int n, r, s;

    printf("Insert a number: ");
    scanf("%d", &n);
    for (r = 0; r <= n; r ++)
{
s += pow(10,r);
}

printf("%d", s);
    return 0;
}