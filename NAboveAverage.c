#include <stdio.h>


int main()

{
    float S[10];
    printf("Insert Students scores: \n");

    int i;
    for(i = 0; i < 10; i ++)
    {
        printf("Score %d: ", i + 1);
        scanf("%f", &S[i]);
    }

    float AV;
    for(i = 0; i < 10; i ++)
    {
        AV = AV + S[i] / 10; 
    }

    printf("Average score is: %.2f \n", AV);

    int x = 0;
    for(i = 0; i < 10; i ++)
    {
        if(S[i] > AV)
        {
            x ++;
        }
    }

    printf("Total scores above average are: %d", x);

    return 0;
}