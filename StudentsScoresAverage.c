#include <stdio.h>

int main()
{

    float scores[5][3];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insert the score of student %d in the subject %d:  ", i + 1, j + 1);
            scanf("%f", &scores[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        float Sum = 0;
        for (int j = 0; j < 3; j++)
        {
            Sum += scores[i][j];
        }
        float Av = Sum / 3;
        printf("The average of student %d is: %.2f\n", i + 1, Av);
    }

    return 0;
}
