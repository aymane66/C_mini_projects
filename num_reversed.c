#include <stdio.h>

int main()
{

int n;
printf("Insert a number: ");
scanf("%i", &n);

// Op

int reverse = 0;
do
{
reverse = (reverse * 10) + (n % 10);
n = n / 10;
} while (n !=0);

//output
printf("Reversed input: %i", reverse);



    return 0;
}