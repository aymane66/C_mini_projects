#include <stdio.h>

int main()

{
     float n;

     printf("Insert a number: ");
     scanf("%f", &n);

     while (n < 10 || n > 20)
     {
        if (n < 10)

{        printf("Too small\nInsert a number: ");
        scanf("%f", &n); }
        else if (n > 10)

{        printf("Too big\nInsert a number: ");
        scanf("%f", &n); }

     }


        printf("Correct number.");

return 0;
}