#include <stdio.h>

int main()
{
    int table[3][2][2];
    printf("Fill up this 3D array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Table[%d][%d][%d]", i, j, k);
                scanf("%d", &table[i][j][k]);
            }
        }
    }

    printf("\nHere is your 3D array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\t", table[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}