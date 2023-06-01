#include <stdio.h>

int main()
{
    int table[4][6];

    printf("Insert numbers for table 1: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Insert number %d in %d: ", j + 1, i + 1);
            scanf("%d", &table[i][j]);
        }
    }

    printf("\n");

    int tableRev[6][4];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tableRev[i][j] = table[j][i];
        }
        printf("\n");
    }

    printf("------------------------------------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------------\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", tableRev[i][j]);
        }
        printf("\n");
    }

    return 0;
}