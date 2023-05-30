#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Size of numbers you want to insert: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));
    printf("Insert %d numbers: \n", n);

    if (arr == NULL)
    {
        printf("Error in memory.");
        exit(0);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Number %d: ", i + 1);
            scanf("%d", arr + i);
        }

        int min = *arr;
        for (int i = 0; i < n; i++)
        {
            if (min > *(arr + i))
            {
                min = *(arr + i);
            }
        }

        printf("The smallest number in the list is: %d \n", min);

        free(arr);
    }

    return 0;
}