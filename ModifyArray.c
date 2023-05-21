#include <stdio.h>

int main ()
{
    int size;
    printf("Insert size of your array: ");
    scanf("%d", &size);

    printf("-- Fill up your array -- \n");
    int i;
    int N[size];
    for(i = 0; i < size; i ++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &N[i]);
    }
    
    printf("-- Lets modify your array -- \n");

    int pos, M;
        printf("Modified position: ");
        scanf("%d", &pos);
        printf("Modified value: ");
        scanf("%d", &M);

    if (pos <= 0 || pos > size + 1)
    {
        printf("Error. ");
    }
    else 
    {
   for(i = size; i <= pos; i -- )
   {
    N[i] = N[i - 1];
     } 
    N[pos - 1] = M;
    size ++;

   printf("Modified  array:\n");
    for(i = 0; i < size - 1; i ++)
    {
        printf("%d \t", N[i]);
    }

    }
    return 0;
}