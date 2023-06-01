#include <stdio.h>

// This program displays the sum of two 2D arrays.

int main()
{

    // Fill in the arrays
    int table1[4][5];
    printf("Fill in the first table with numbers: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Insert number %d in %d: ", j + 1, i + 1);
            scanf("%d\t", &table1[i][j]);
        }
        printf("\n");
    }

    int table2[4][5];
    printf("Fill in the second table with number: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Insert number %d in %d: ", j + 1, i + 1);
            scanf("%d\t", &table2[i][j]);
        }
        printf("\n");
    }

    // Display Array 1 and 2.
    printf("------ Content of table 1 ------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", table1[i][j]);
        }
        printf("\n");
    }

    printf("------ Content of table 2 ------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", table2[i][j]);
        }
        printf("\n");
    }

    // Calculation and display of array 3.
    int table3[4][5];
    printf("------ Sum of table 1 & 2 ------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            table3[i][j] = table1[i][j] + table2[i][j];
            printf("%d\t", table3[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------\n");

    return 0;
}