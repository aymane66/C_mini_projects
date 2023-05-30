#include <stdio.h>
#include <stdlib.h>

void ascending(int size, int *arr)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("Ascendingly: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }

    printf("\n");
}

void descending(int size, int *arr)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("Descendingly: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}

int main()
{
    // Array size
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);

    // Array fill in
    int *arr = calloc(size, sizeof(int));
    printf("Insert %d numbers: \n", size);

    for (int i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", arr + i);
    }

    // Function to order ascending
    ascending(size, arr);

    // Function to order descending
    descending(size, arr);

    free(arr);

    return 0;
}