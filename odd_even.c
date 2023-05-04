#include <stdio.h>

int main()

{
    int n;

    printf("Insert a number: ");
    scanf("%d", &n);

    if (n % 2 == 1)
        printf("Odd");

    else
        printf("Even");

    return 0;
}
