#include <stdio.h>
#include <math.h>

int main()

{
    int n, s, i;

    printf("Insert a number: ");
    scanf("%d", &n);

    s = 0;

    for (i = 1; i <= (n + n); i += 2)
    {

        s += pow(i , 2);
    }
    printf("%d", s);

    return 0;
}