#include <stdio.h>

int main()
{
    int N[10];

    printf("-- Insert 10 numbers -- \n");

    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &N[i]);
    }
    
    int S;
    printf("Insert a number you are looking for: ");
    scanf("%d", &S);


    int x= 0;
    for(i = 0; i < 10; i++)
    {
        if(S == N[i])
        {
           x ++; 
        }

    }
        if (x == 0)
        printf("This number does NOT exist in the list.");
        else
        printf("This number exists in the list.");
        
        


    return 0;
}