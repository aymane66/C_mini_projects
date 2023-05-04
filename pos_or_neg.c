#include <stdio.h>
#include <math.h>

int main()

{
    float num;

    printf("Insert a number: ");
    scanf("%f", &num);

    if (num > 0)
        printf("This number is positive.");
    else if (num == 0)
        printf("This number is nul.");
    else
        printf("This number is negative.");

    return 0;
}