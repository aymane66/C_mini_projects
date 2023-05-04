#include <stdio.h>
#include <math.h>

int main()

{
    float le, wi, ar, pe;

    printf("This program calculates the area and perimeter of a rectangle. \n");
    printf("Insert the length of your rectangle: \n");
    scanf("%f", &le);
    printf("Insert the width of your rectangle: \n");
    scanf("%f", &wi);

    ar = le * wi;

    pe = 2 * (le + wi)

                 printf("The area of the rectangle is: %.2f cm \n", ar);
    printf("The perimeter of the rectangle is: %.2f cm", pe);

    return 0;
}