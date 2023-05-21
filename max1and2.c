#include <stdio.h>

int main()
{
    int N[10];
    printf("Insert 10 numbers of your choice: \n");

    int i;
    for(i = 0; i < 10; i ++)
    {
    printf("Number %d:", i + 1);
    scanf("%d", &N[i]);
    }
    
    int max1 = N[0], max2 = N[0];
    for(i = 0; i < 10; i ++)
    {
        if(max1 < N[i])
        {
            max2 = max1;
            max1 = N[i];
        }

        if(max2 < N[i] && max1 > N[i])
        {
            max2 = N[i];
        }
    }

    printf("Maximmum number is:  %d \n", max1);
    printf("Followed by number:  %d \n", max2);

    return 0;
}