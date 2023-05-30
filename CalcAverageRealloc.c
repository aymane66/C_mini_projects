#include <stdio.h>
#include <stdlib.h>

/*
    This program calculates the average of an array, and allows
    the user to add more input to the array and re-calculate
    the average.
*/

// Function to calculate the average of an array
float averagearr(int size, float *arr)
{
    float total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    float average = total / (float)size;

    printf("Average: %.2f \n", average);
    return average;
}

int main()
{
    // Array size
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);

    // Fill in the array
    float *arr = calloc(size, sizeof(float));
    printf("Fill in the array with %d numbers: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%f", arr + i);
    }

    // Average of array
    averagearr(size, arr);

    // Ask to add to array
    char answer;
    do
    {
        printf("Do you want to increment more numbers? (y/n) \n");
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y')
        {
            int increment;
            printf("Numbers to add to the array: \n");
            scanf("%d", &increment);

            // Array resize
            size += increment;
            arr = realloc(arr, size * sizeof(float));

            // Fill in new numbers
            for (int i = 0; i < size - increment; i++)
            {
                printf("Number %d: %.2f\n", i + 1, *(arr + i));
            }

            printf("Add %d numbers to the array: \n", increment);
            for (int i = size - increment; i < size; i++)
            {
                printf("Number %d: ", i + 1);
                scanf("%f", &arr[i]);
            }

            // Calculate average
            averagearr(size, arr);
        }

    } while (answer == 'y' || answer == 'Y');

    free(arr);

    return 0;
}
