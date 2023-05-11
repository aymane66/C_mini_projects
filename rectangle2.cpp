#include <stdio.h>

int main()
{
    int c, r;

    printf("Type the rows value: ");
    scanf("%i", &r);
    printf("Type the columns value: ");
    scanf("%i", &c);

    // op
    int i, j;
    for(i = 0; i < c; i ++)
    {

        for(j = 0; j < r; j ++)
        {
            if (j == 0 || j == r - 1 || i == 0 || i == c - 1)
            {
                printf("* ");
            }
            else
             {
                printf("  ");
            }
        }

       printf(" \n");
    }

    return 0;
}