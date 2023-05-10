#include <stdio.h>
#include <stdlib.h>

int main()

{

    float pr, vatA, vatB, vatC;
    char cat;
    printf("Price (without tax): ");
    scanf("%f", &pr);
    printf("Category: ");
    scanf(" %c", &cat);

    if (cat == 'A')
    {
        vatA = pr + pr * 0.07;
        printf("Price with VAT is: %.2f", vatA);
    }

    else if (cat == 'B')
    {
        vatB = pr + pr * 0.2;
        printf("Price with VAT is: %.2f", vatB);
    }

    else if (cat == 'C')
    {
        vatC = pr + pr * 0.25;
        printf("Price with VAT is: %.2f", vatC);
    }

    else
        printf("Error in caegory type. Please choose A, B or C");

    return 0;
}
