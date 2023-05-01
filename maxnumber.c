#include <stdio.h>
#include <math.h>

// This program prompts the user for 2 numbers then displays the bigger number

int main()

{
    int A, B;

    printf("First number: ");
    scanf("%d", &A);
    printf("Second number: ");
    scanf("%d", &B);

    if (A >= B)
    {
        printf("Biggest number is: %d", A);
    }
    else
    {
        printf("Biggest number is: %d", B);
    }

    return 0;
}