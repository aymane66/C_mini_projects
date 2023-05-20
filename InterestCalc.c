#include <stdio.h>

int main()
{
    float S = 1000;
    int i;
    float C[20];
    
    for(i = 0; i < 20; i ++)
    {
    S += S * 0.02;
    C[i] = S;
    printf("Total ammount of money in year %d: %.2f \n", i + 1, C[i]);
    }


    return 0;
}