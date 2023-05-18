#include <stdio.h>

int main()
{
    int N[10];
    
    printf("-- Insert 10 numbers -- \n");
    int i;
    for(i = 0; i < 10; i ++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &N[i]);
    }

    int min = N[0];
    for(i = 0; i < 10; i++)
    {
        if(min > N[i])
        min = N[i];
    }

    printf("Smallest number is: %d", min);
    
    return 0;
}