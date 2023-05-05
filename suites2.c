#include <stdio.h>

int main()

{
    int n, i, U, Uj, Ui;

    printf("Insert a number bigger than 2: ");
    scanf("%d", &n);

if (n <= 2)
{
    printf("Please insert a number bigger than 2.");
}

else

{
    Ui = 0;
    Uj = 1;
printf("U1 = %d\n", Uj);
    for (i = 2; i <= n; i ++)
    {
        U = Uj + Ui;
        Ui = Uj;
        Uj = U;
printf("U%d = %d\n",i, U);
    }

}

 

    return 0;
}