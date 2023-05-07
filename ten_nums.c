#include <stdio.h>

int main()

{
    int n, t, r;

printf("Insert a number: ");
scanf("%d", &n);


for (t=1;t<=10;t++)
{
    r = t + n;
printf("%d\n", r);
    }



return 0;

}