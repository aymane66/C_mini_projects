#include <stdio.h>

int main()
{
int r, c;
// Rectangle 

printf("Insert the value of culumns: ");
scanf("%d", &c);

printf("Insert the value of rows: ");
scanf("%d", &r);

for(int i = 0; i < r; i++)
{
    
    for(int j = 0; j < c; j++)
    {
        printf("* ");
    }
printf(" \n");
}

    return 0;
}