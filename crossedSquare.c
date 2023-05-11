#include <stdio.h>

int main()
{
    int x;
    printf("Enter square side value: ");
    scanf("%i", &x);

    int i,j;
   
    for(i = 1; i <= x; i ++)
    {

        for(j = 1; j <= x; j ++)
        {
            if(i == 1 || i == x || j == 1 || j == x || i == j 
            || j == x - i + 1)
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
