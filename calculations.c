#include <stdio.h>

int main()
{
    float N[5];

    printf("Insert 5 numbers: \n");

    int i;
    float T = 0, P = 1, AV;
    for(i = 0; i < 5; i ++)
    {
        printf("Number %d: ", i + 1);
        scanf("%f", &N[i]);
        
        T += N[i]; 
        P *= N[i];
    }

    
    printf("Total: %.2f \n", T);
    printf("Product: %.2f \n", P);
    AV = T / 5; 
    printf("Average: %.2f", AV);

    return 0;
}