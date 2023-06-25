#include <stdio.h>

int main()
{

    // Input
    int table[4][3];
    int *P = table;
    printf("Fill in this 4x3 table: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Row %d | Column %d : ", i + 1, j + 1);
            scanf("%d", P + i * 3 + j);
        }
    }

    // Display input
    printf("\n---------- Inserted table ----------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(P + i * 3 + j));
        }
        printf("\n");
    }

    // Check if Hollow
    int zerocount = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(P + i * 3 + j) == 0)
            {
                zerocount++;
            }
        }
    }

    printf("\n---------- Check summary ----------\n");
    if (zerocount > (4 * 3) / 2)
    {
        printf("This is a Hollow Matrix.\n");
    }
    else
    {
        printf("This is NOT a Hollow Matrix.\n");
    }

    return 0;
}