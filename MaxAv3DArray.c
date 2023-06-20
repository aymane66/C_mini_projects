#include <stdio.h>

int main()
{
    // Input
    int table[3][5][2];
    printf("Fill in this table:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Class %d | Student %d | Score %d | : ", i + 1, j + 1, k + 1);
                scanf("%d", &table[i][j][k]);
            }
        }
    }

    // Display
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

    // average
    printf("\n--------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        float average = 0;
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum += table[i][j][k];
            }
        }
        average = (float)sum / 10.00;
        printf("Average score of class %d is: %.2f\n", i + 1, average);
    }

    // Max
    printf("\n--------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        int max = table[i][0][0];
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (max < table[i][j][k])
                {
                    max = table[i][j][k];
                }
            }
        }
        printf("The max score in class %d is: %d\n", i + 1, max);
    }

    return 0;
}