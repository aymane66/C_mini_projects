#include <stdio.h>
#include <math.h>

// This program calculates the Euclidean distance between two points

int main()

{
    float Xa, Ya, Xb, Yb, AB;

    // Input a:
    printf("Insert the X coodrinate of A: ");
    scanf("%f", &Xa);
    printf("Insert the Y coodrinate of A: ");
    scanf("%f", &Ya);

    // Input b:
    printf("Insert the X coodrinate of B: ");
    scanf("%f", &Xb);
    printf("Insert the Y coodrinate of B: ");
    scanf("%f", &Yb);

    // Calculation :
    AB = sqrt(pow((Xb - Xa), 2) + pow((Yb - Ya), 2));

    // output:
    printf("The distance between A and B is: %.2f", AB);

    return 0;
}