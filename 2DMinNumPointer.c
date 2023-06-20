#include <stdio.h>

int main()
{
    // Fill in the matrix
    int table[3][4];
    int *P = table;

    printf("Fill ip this 3x4 table:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Row: %d | Column: %d: ", j + 1, i + 1);
            scanf("%d", P + i * 4 + j);
        }
    }

    // Display matrix
    printf("\n-------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", *(P + i * 4 + j));
        }
        printf("\n");
    }

    // Min number calc
    int min = table[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (min > *(P + i * 4 + j))
            {
                min = *(P + i * 4 + j);
            }
        }
    }

    // Display result
    printf("-------------------------------\n");
    printf("The smallest number in the matrix is: %d", min);

    return 0;
}