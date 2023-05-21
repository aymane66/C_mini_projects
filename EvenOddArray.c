#include <stdio.h>

int main()
{
    int size;
    printf("Size of your array: ");
    scanf("%d", &size);

    int N[size];
    printf("Insert %d numbers of your choice: \n", size);
    int i;
    for(i = 0; i < size; i ++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &N[i]);
    }

int even[size], odd[size];
int evenC, oddC;

for(i = 0; i < size; i ++)
{
    
    if(N[i] % 2 == 0)
    {
        even[evenC] = N[i];
        evenC ++;
    }
    else
    {
        odd[oddC] = N[i];
        oddC ++;
    }
     
}

printf("------ Result: ------ \n");
printf("Even Numbers: ");
for(i = 0; i < evenC; i ++)
{
    printf("%d \t", even[i]);
}
printf("\n");
printf("Odd Numbers: ");
for(i = 0; i < oddC; i ++)
{
    printf("%d \t", odd[i]);
}

    return 0;
}