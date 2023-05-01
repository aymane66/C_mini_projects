#include <stdio.h>

/* With the use of pointers, this code prompts the user for 10 numbers then
 * identifies the smallest number using p.
 */

void min(int *arr)
{
    int *P = arr;
    int min = *P;

    for (P = arr; P < arr + 10; P++)
    {
        if (*P < min)
        {
            min = *P;
        }
    }
    printf("Smallest number is: %d", min);
}

int main()
{
    int arr[10];
    int *P = arr;
    printf("Insert 10 numbers: \n");
    for (P = arr; P < arr + 10; P++)
    {
        printf("Number %d: ", P - arr + 1);
        scanf("%d", P);
    }

    min(arr);
}