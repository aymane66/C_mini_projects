#include <stdio.h>

int main()
{
    // Matrix user input
    int table[4][4];
    printf("Fill in this 4x4 matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Number %d in %d: ", j + 1, i + 1);
            scanf("%d", &table[i][j]);
        }
    }

    // Display the matrix
    printf("----------- Display Array -----------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    // user input
    printf("-------------------------------------\n");
    int x;
    printf("Insert a number: ");
    if (scanf("%d", &x) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculation
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (table[i][j] == x)
            {
                c++;
            }
            else
            {
            }
        }
    }

    // Print result
    if (x == 0)
    {
        printf("The number you inserted does not exist in the matrix");
    }
    else
    {

        printf("The number %d is mentioned %d times in the matrix.\n", x, c);
    }

    return 0;
}