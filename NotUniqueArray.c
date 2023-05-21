#include <stdio.h>

int main()
{
    int size;
    printf("Insert size of your array: ");
    scanf("%d", &size);

    int N[size], i;
    for(i = 0; i < size; i ++)
    {
        printf("Number %d: ",i + 1);
        scanf("%d", &N[i]);
    }

    int frq[size];
    for(i = 0; i < size; i++)
    {
        frq[i] = -1;
    }

    int j;
    for(i = 0; i < size;i ++)
    {
        int C = 1;
        for(j = i + 1; j < size; j ++)
        {
            if(N[i] == N[j])
            {
                C ++;
                frq[j] = 0; 
            }
        }
 if(frq[i] != 0)
    {
        frq[i] = C;
    }

    }
   

printf("Numbers that are NOT unique in the array are: \n");

    for(i = 0; i < size; i ++)
    {
        if(frq[i] >= 2)
        {
            printf("%d \n", N[i]);
        } 
    }
   

    return 0;
}