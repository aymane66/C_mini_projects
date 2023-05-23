#include <stdio.h>

int main()
{
    int size;
    printf("Array size: ");
    scanf("%d", &size);

    printf("Insert %d numbers of your choice: \n", size);
    int i, N[size];
    for (i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &N[i]);
    }

    int j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (N[i] < N[j])
            {
                int tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
        }
    }

    printf("Result: Array categorized from biggest to smallest number: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d \t", N[i]);
    }

    return 0;
}