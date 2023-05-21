#include <stdio.h>


int main()
{
    int size;
    printf("Insert the array size: ");
    scanf("%d", &size);

    printf("Insert array values: \n");
    int i, N[100];
    for(i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &N[i]);
    }

    int pos;

    printf("Insert position to be deleted: ");
    scanf("%d", &pos); 
    
    if(pos <= 0 || pos > size)
    {
        printf("ERROR. ");
    }
    else
    {
        for(i = pos; i < size; i ++)
        {
            N[i - 1] = N[i];
        }
        size --;
    printf("Modified Array after deletion: \n");
        for(i = 0; i < size; i ++)
        {
            printf("%d \t", N[i]);
        }

    }

    return 0;
}