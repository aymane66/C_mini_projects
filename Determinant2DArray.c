#include <stdio.h>

int main()
{
    // User input
    int table[2][2];
    printf("Fill in this 2x2 matrix: \n");
    for (int i = 0; i < 2; i ++)
    {
        for (int j = 0; j < 2; j ++)
        {
            printf("Number %d in %d: ", j + 1, i + 1);
            scanf("%d", &table[i][j]);
        }
    }

    // Display input
for (int i = 0; i < 2; i ++)
{
    for (int j = 0; j < 2; j ++)
    {
        printf("%d\t", table[i][j]);
    }
    printf("\n");
}

    // Calculation

int deter = table[0][0] * table[1][1] - table[0][1] * table[1][0];
for (int i = 0; i < 2; i ++)
{
    for (int j = 0; j < 2; j++)
    {
        
    }
}

// Result
    printf("Determinant = %d\n", deter);


    return 0;
}