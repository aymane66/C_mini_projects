#include <stdio.h>

int main()
{
    // User input
    int table[5][3];
    int *P = table;
    printf("Fill in this table: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Row %d | Column %d : ", i + 1, j + 1);
            scanf("%d", P + i * 3 + j);
        }
    }

    // Display input
    printf("\n--------------------------------------\n");
    printf("Initial table: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(P + i * 3 + j));
        }
        printf("\n");
    }

    // Reverse table
    int reversed[5][3];
    int *R = reversed;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            reversed[4 - i][2 - j] = table[i][j];
        }
    }

    // Display reversed table
    printf("\n--------------------------------------\n");
    printf("Reversed table : \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(R + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}