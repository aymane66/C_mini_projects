#include <stdio.h>

int main()
{
    int n, i, U, Ui;

    printf("Insert the value of n: ");
    scanf("%d", &n);

    U = 6;

    for (i = 0; i < n; i++)
    {
        Ui = 4 * U + 10;
        U = Ui;
    }

    printf("%d", Ui);

    return 0;
}
