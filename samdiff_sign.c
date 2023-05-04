#include <stdio.h>

int main()

{
    int A, B, C, D, E;

    printf("Insert first number: ");
    scanf("%d", &A);
    printf("Insert second number: ");
    scanf("%d", &B);

    if ((A >= 0 && B >= 0) || (A <= 0 && B <= 0))
    {
        C = A;
        A = B;
        B = C;
        printf("A = %d \n", A);
        printf("B = %d", B);
    }

    else if (A * B <= 0)
    {

        D = A + B;
        E = A * B;
        printf("A = %d\n", D);
        printf("B = %d", E);
    }

    return 0;
}