#include <stdio.h>
#include <stdlib.h>

int main()

{
    char g;
    float age;

    printf("M or F?: ");
    scanf("%c", &g);
    printf("Age: ");
    scanf("%f", &age);

    if (((g == 'M') && (age >= 20)) || ((g == 'F') && ((age >= 18) && (age <= 35))))
        printf("Taxable");
    else
        printf("Non-taxable");

    return 0;
}