#include <stdio.h>

int main()

{
    int N[8];

    printf("Insert 8 numbers of your choice: \n");
    int i, j;
    for(i = 0; i < 8; i ++)
    {
        printf("Number %d: ",i + 1);
        scanf("%d", &N[i]);
    }


    int frq[8];
    for(i= 0; i < 8; i ++)
    {
        frq[i] = -1;
    }
    
  
    for(i = 0; i < 8; i ++)
    {
        int C = 1;
        for(j = i + 1; j < 8; j++)
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

printf("Unique numbers in the array are: \n");
    for(i = 0; i < 8; i ++)
    {

        if(frq[i] == 1)
        {
          printf("%d \n", N[i]);  
        }

    }
    

    return 0;
}