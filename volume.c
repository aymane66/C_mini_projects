#include <stdio.h>
#include <math.h>

int main()

{
    /*var radius Volume Pi*/
    float r, v, pi;
    /*input radius*/
    printf("Calcuate the sphere volume.\n");
    printf("Insert radius: \n");
    scanf("%f", &r);
    /*process*/
    pi = 3.14;
    v = (4 * pi * pow(r, 3)) / 3;
    /*output volume*/
    printf("Sphere volume is: %.2f", v);

    return 0;
}