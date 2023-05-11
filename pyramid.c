#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Insert the value of x: ");
    scanf("%d", &x);

    int i, j;
    for(i = 0; i <= x; i ++)
    {

        for(j = 0; j <= x - i; j ++)
        {
            printf("  ");    
        }

        for(j = 0; j <= (2 * i); j ++)
        {

            if(i == x || j == 0 || j == (2 * i))
            {
                printf("* ");
            }
            else
            printf("  ");   
  
        }
      printf("\n");
        
    }



    return 0;
}