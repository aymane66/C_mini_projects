#include <stdio.h>
#include <stdlib.h>

// This program prompts the user for 2 numbers then reverse the two values

int main()

{
    float a, b;

    printf("insert A: ");
    scanf("%f", &a);

    printf("Insert B: ");
    scanf("%f", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Result: \n A = %.2f \n B = %.2f", a, b);

    return 0;
}