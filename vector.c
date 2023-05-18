#include <stdio.h>

int main()
{
    float U[3];
    float V[3];

    
    int i;
    for(i = 0; i < 3; i ++)
    {
        printf("Insert the value of U %d: ", i + 1);
        scanf("%f", &U[i]);
    }

    for(i = 0; i < 3; i ++)
    {
        printf("Insert the value of V %d: ", i + 1);
        scanf("%f", &V[i]);
    }

    float Z;
    for(i = 0; i < 3; i ++)
    {
        Z = Z + U[i] * V[i];
    }
    
    printf("Result: %.2f", Z);
    
    return 0;
}