#include <stdio.h>

int main()
{
    int i;
    printf("Insert a number: ");
    scanf("%i", &i);

    int reverse = 0;
    int n = i;
    do
    {
    reverse = (reverse * 10) + (n % 10);
    n = n / 10;
    } while (n !=0);


if (i == reverse)
{
    printf("This number is a palindrome ");
}

else 
{
    printf("This number is NOT a palindrome ");
}


    return 0;
}