#include <stdio.h>
#include <stdlib.h>

int main()

{
    int A, B;

    printf("insert the first number: ");
    scanf("%d", &A);
    printf("insert the second number: ");
    scanf("%d", &B);

    if (A >= 0 && B >= 0)
        printf("%d and %d are positive", A, B);
    else if (A <= 0 && B <= 0)
        printf("%d and %d are negative", A, B);

    else
        printf("The two umbers do not have the same sign.");

    return 0;
}