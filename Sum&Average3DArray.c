#include <stdio.h>

int main()
{
    // Fill in the 3D table

    int table[3][5][2];
    printf("Fill in this table: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Class %d | Student %d | Subject %d | : ", i + 1, j + 1, k + 1);
                scanf("%d", &table[i][j][k]);
            }
        }
    }

    // Display the 3D table
    printf("\n--------------------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\t", table[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n--------------------------------------\n");

    // Averages
    printf("Average scores of the classes:\n");
    for (int i = 0; i < 3; i++)
    {
        float average = 0;
        float sum = 0;
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum += table[i][j][k];
            }
        }
        average = sum / 10.00;
        printf("Average score of Class %d is : %.2f\n", i + 1, average);
    }

    return 0;
}