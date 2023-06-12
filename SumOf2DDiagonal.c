#include <stdio.h>

int main()
{

    // Fill in the table
    int table[4][4];
    printf("Fill in this array: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Number %d in %d: ", j + 1, i + 1);
            scanf("%d\t", &table[i][j]);
        }
        printf("\n");
    }

    // Display inserted array
    printf("--------------------------------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of the diagonal
    int S = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                S = S + table[i][j];
            }
        }
    }

    printf("--------------------------------\n");
    printf("Sum of the diagonal is: %d", S);

    return 0;
}