#include <stdio.h>

// I could not do this exercise
// this program is supposed to receive the number of prime numbers
// the user want to output 


int main()
{
//input
int N;
printf("Insert the number of prime number you want to see: \n");
scanf("%d", &N);

//prime number op
int P[N];
int i, j, c = 0;

for(i = 2; c < N; i ++)
{
    int prime = 1;
    for(j = 2; j < i; j ++)
    {
    if(i % j == 0)
    {
        prime = 0;
        break;
    }
    if(prime == 1)
    {
        P[c] = i;
        c ++;
    } 
    }  
}

//Output
printf("The first %d prime numbers are: \n", N);
for(i = 0; i < N; i ++)
{
    printf("%d \n", P[i]);
}

    return 0;
}