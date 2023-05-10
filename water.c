#include <stdio.h>

int main()

{
    float deg;

    printf("Water temperature:");
    scanf("%f", &deg);

    if (deg < 0)
        printf("Ice");

    else if (deg > 100)
        printf("Vapor");

    else
        printf("Liquid");

    return 0;
}