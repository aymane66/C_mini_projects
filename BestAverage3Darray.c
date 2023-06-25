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

        float max = 0;
        int num = 0;
        for (int j = 0; j < 5; j++)
        {
            float sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum += table[i][j][k];
            }

            // Max
            average = (float)sum / 2;

            if (average > max)
            {
                max = average;
                num = j;
            }
        }

        printf("The best average of class %d is %.2f/20 by student %d. \n", i + 1, max, num + 1);
    }

    return 0;
}