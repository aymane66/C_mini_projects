#include <stdio.h>

int main()
{
    int v;

    printf("Insert the value of v: ");
    scanf("%d", &v);

    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}