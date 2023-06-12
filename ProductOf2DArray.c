#include <stdio.h>

int main()
{

    // Display array 1 and 2
    int table1[3][4];
    printf("Insert numbers for table 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Number %d in %d: ", j + 1, i + 1);
            scanf("%d\t", &table1[i][j]);
        }
        printf("\n");
    }

    int table2[4][2];
    printf("Insert numbers for table 2:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Number %d in %d: ", j + 1, i + 1);
            scanf("%d\t", &table2[i][j]);
        }
        printf("\n");
    }

    // Display arrays from 1 to 3
    printf("------ Content of table 1 ------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", table1[i][j]);
        }
        printf("\n");
    }

    printf("------ Content of table 2 ------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", table2[i][j]);
        }
        printf("\n");
    }

    // Product of array 1 and 2
    printf("----- Product of table 1&2 -----\n");
    int table3[3][2];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            int P = 0;
            for (int k = 0; k < 4; k++)
            {
                P = P + table1[i][k] * table2[k][j];
                table3[i][j] = P;
            }
        }
    }

    // Display result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", table3[i][j]);
        }
        printf("\n");
    }

    return 0;
}