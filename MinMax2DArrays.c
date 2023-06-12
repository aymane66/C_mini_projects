#include <stdio.h>

int main()
{

    // input
    int table[4][4];
    printf("Insert 4 numbers to fill up this table: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Number %d in %d: ", j + 1, i + 1);
            scanf("%d\t", &table[i][j]);
        }
        printf("\n");
    }

    // display input
    printf("-------- Inserted Array --------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    // calculate and result
    printf("\n----------- Min & Max row -----------\n");
    for (int i = 0; i < 4; i++)
    {
        int maxR = table[i][0];
        int minR = table[i][0];

        for (int j = 1; j < 4; j++)
        {
            if (maxR < table[i][j])
            {
                maxR = table[i][j];
            }
            if (minR > table[i][j])
            {
                minR = table[i][j];
            }
        }
        printf("The maximum number in Row %d is: %d\n", i, maxR);
        printf("The minimum number in Row %d is: %d\n", i, minR);
    }

    printf("\n---------- Min & Max column ----------\n");
    for (int i = 0; i < 4; i++)
    {
        int minC = table[0][i];
        int maxC = table[0][i];
        for (int j = 0; j < 4; j++)
        {
            if (minC > table[j][i])
            {
                minC = table[j][i];
            }
            if (maxC < table[j][i])
            {
                maxC = table[j][i];
            }
        }
        printf("The maximum number in Column %d is: %d\n", i, maxC);
        printf("The minimum number in Column %d is: %d\n", i, minC);
    }

    return 0;
}