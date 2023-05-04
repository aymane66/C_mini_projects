#include <stdio.h>

int main ()

{
    int n, i, e, t;
e = 1;
    printf("Insert a number: ");
    scanf("%d", &n);


    for (i = 2; i <= n/2; i ++)
    {
   if (n % i == 0)
{
    e = 0;
    break; 
}
    }

    if (e == 1)   
    {
  printf("%d is a prime number", n);
    } 

    else
    {
        printf("%d is NOT a prime number", n);
    }

    return 0;
}