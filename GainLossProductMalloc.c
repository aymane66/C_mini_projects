#include <stdio.h>
#include <stdlib.h>

 // This program prompst the user for the price of a product,
 // and how much he sold it for, then displays whether you made a profit or not.


int main()
{
    float *price = malloc(sizeof(float));
    printf("Product value: ");
    scanf("%f", price);

    float *sale = malloc(sizeof(float));
    printf("Sale Price: ");
    scanf("%f", sale);


    float *v = malloc(sizeof(float));

    if (*sale > *price)
    {
        *v = *sale - *price;        
        printf("You gained %.2f MAD. ", *v);
    }
    else
    {
        *v = *price - *sale;
        printf("You lost %.2f MAD.", *v);
    }

    free(price);
    free(sale);
    free(v);


    return 0;
}