#include <stdio.h>

int main()
{
    // Fill in the table
    int table[5][5];
    printf("Fill in this table:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Number %d of %d: ", j + 1, i + 1);
            scanf("%d\t", &table[i][j]);
        }
        printf("\n");
    }

    // Display table
    printf("-------- Inserted Array --------\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    // Calculate
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int temp = table[i][j];
            table[i][j] = table[j][i];
            table[j][i] = temp;
        }
    }

    // Display result
    printf("------------ Result ------------\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}