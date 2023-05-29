#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Insert the size of the array:\n");
    scanf("%d", &n);

    int *Pn = calloc(n, sizeof(int));

if (Pn == NULL)
{
    printf("The memory is insufficient.\n");
    exit(0);
}
else
{
    printf("Insert %d numbers: \n", n);
    
    for (int i = 0; i < n; i ++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", (Pn + i));
    }

    int total = 0;;
    for (int i = 0; i < n; i ++)
    {
        total += *(Pn+ i);
    }
    printf("Total:  %d\n", total);

    float average = (float)total / n;
    printf("Average: %.2f\n", average);
}

    return 0;
}