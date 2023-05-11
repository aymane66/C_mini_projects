#include <stdio.h>
#include <stdlib.h>

int main()
{

int c;
printf("Insert value of c: ");
scanf("%d", &c);

int i, j;
int p = 1;
for(i = 1; i <= (2*c-1); i ++)
{
    
    for(j = 1; j <= p ; j ++)
    {
        
        printf("*   ");
    }
        if(i < c)
        {
            p++;
            
        }
        else
        {
            p--;
            
        }

printf("\n"); 

       
}
    
    return 0;
}