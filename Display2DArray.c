#include <stdio.h>

int main()
{

    int table[3][6];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            table[i][j] = 0;
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}