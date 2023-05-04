
#include <stdio.h>
#include <math.h>

int main()

{
    /*Variables*/
    int x, y;
    double z;

    /*User input: insert value of X and Y*/
    printf("This program calculates the power of given numbers.\n");
    printf("Number: \n");
    scanf("%d", &x);
    printf("Power: \n");
    scanf("%d", &y);

    /*Program output: z is the total of the operation*/
    z = pow(x, y);
    printf("Result: %.2f", z);

    return 0;
}