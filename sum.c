#include <stdio.h>

int main()

{
    int n, i, r;

    printf("Insert a number: ");
    scanf("%d", &n);

    while (n < 1)
    {
        printf("Number is small.\nPlease insert a number: ");
        scanf("%d", &n);
    }
    r = 0;
for (i = 1; i <= n; i ++)
{
    r = r + i;
}

printf("%d", r);

return 0;
}