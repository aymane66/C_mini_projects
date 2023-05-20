#include <stdio.h>

int main()
{
    int A[6];
    printf("-- Insert 6 numbers: -- \n");

    int i;
    for(i = 0; i < 6; i ++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    int B[6];

    for(i = 0; i < 6; i ++)
    {
        B[5 - i] = A[i];
    }

    printf("-- Reversed Array -- \n");
    for(i = 0; i < 6; i ++)
    {
        printf("Number %d: %d \n", i + 1, B[i]);
    }
    
    return 0;
}