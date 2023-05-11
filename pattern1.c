#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Insert number of lines: ");
    scanf("%d", &x);

    int i, j;
    for(i = 0; i < x; i ++)
    {

        for(j = 0; j < x - i; j ++)
        {
            printf("  ");
        }
        for(j = 0; j < x; j ++)
        {
            printf("* ");
        }   
        printf("\n"); 
    }

    return 0;
}