#include <stdio.h>

int main()
{
    int x, y, z, i;

    printf("x*y  | ");
    for (i = 1; i <= 10; i++)
    {
        printf("%d  ", i);
    }
    printf("\n");
    for (i = 1; i <= 35; i++)
    {
        printf("-");
    }
    printf("\n");

    for (i = 1; i <= 10; i++)
    {
        printf("  %d", i);
        for (int v = 1; v <= 10; v++)
        {
            z = v * i;
            printf("  %d", z);
        }
        printf("\n");
    }

    return 0;
}
