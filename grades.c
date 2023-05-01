#include <stdio.h>
#include <math.h>

// This program prompts the user for their grades, then calculates and displays the total of grades and the average score.

int main()

{
    /*var: 5 num add av*/
    float num1, num2, num3, num4, num5, add, avr;
    /*input: 5 numbers*/
    printf("Calculates the sum and average of 5 grades. \n");
    printf("Insert your first grade: \n");
    scanf("%f", &num1);
    printf("Insert your second grade: \n");
    scanf("%f", &num2);
    printf("Insert your third grade: \n");
    scanf("%f", &num3);
    printf("Insert your fourth grade: \n");
    scanf("%f", &num4);
    printf("Insert your fifth grade: \n");
    scanf("%f", &num5);

    /*output: addition  and average*/
    add = num1 + num2 + num3 + num4 + num5;
    avr = add / 5;
    printf("Total: %.2f \n", add);
    printf("Average: %.2f/10", avr);

    return 0;
}