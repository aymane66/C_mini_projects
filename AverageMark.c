#include <stdio.h>

int main()

{
    float marks[5] = {};
    int i;
    for(i = 0; i < 5; i ++)
    {
        printf("Insert mark %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    float T;
    for(i = 0; i < 5; i++)
    {
        T += marks[i];
    }

    float AV = T / 5;

    printf("The average mark for the class is: %.2f", AV);

    return 0;
}