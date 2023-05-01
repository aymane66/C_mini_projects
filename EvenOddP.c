#include <stdio.h>
// This program prompts the user for a number then display whether it is even or odd number.

int main()
{
    int n;
    int *P = &n;
    printf("Insert a number: ");
    scanf("%d", P);

    if (*P % 2 == 0)
    {
        printf("Number %d is an EVEN number.", *P);
    }
    else
        printf("Number %d is an ODD number.", *P);

    return 0;
}