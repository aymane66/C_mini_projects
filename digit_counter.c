#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    long n;

    printf("Insert a number: ");
    scanf("%ld", &n);
    
    int k;
    int r = 0;
    do
    {
        n = n / 10;
        r++;
    }
    while (n != 0);
    
    printf("Number of digits in your number is: %d", r);

return 0;
}