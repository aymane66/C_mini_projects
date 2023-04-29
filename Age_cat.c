#include <stdio.h>
#include <stdlib.h>

// A program that categorizes people based on their age group.

int main()

{
    float A;

    printf("Age: ");
    scanf("%f", &A);

    if (A <= 1)
        printf("Infant");
    else if ((A <= 12) && (A > 1))
        printf("Child");
    else if ((A >= 12) && (A < 18))
        printf("Adolescent");
    else if ((A >= 18) && (A < 65))
        printf("Adult");
    else if (A >= 65)
        printf("Older adult");
    return 0;
}