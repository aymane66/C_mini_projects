#include <stdio.h>
#include <math.h>

int main()

{
    float R1, R2, R3;
    float Rs, Rp;

    printf("Insert R1: ");
    scanf("%f", &R1);
    printf("Insert R2: ");
    scanf("%f", &R2);
    printf("Insert R3: ");
    scanf("%f", &R3);

    Rs = R1 + R2 + R3;
    Rp = (R1 * R2 * R3) / (R1 * R2 + R1 + R3 + R2 * R3);

    printf("Resistors in series: %.2f\n", Rs);
    printf("Resistors in parallel: %.2f", Rp);

    return 0;
}