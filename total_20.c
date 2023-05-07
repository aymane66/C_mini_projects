#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i, t;
    t = 0;
    for (i = 1; i <= 20; i++)
    {
        t = t + i;
    }

    printf("The total of first 20 numbers is: %d", t);

    return 0;
}