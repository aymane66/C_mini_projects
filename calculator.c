#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

printf("---------- Calculator: ---------- \n");
printf("\n");

char again = 'y';

do
{
// Menu
printf("1- Addition. \n");
printf("2- Substraction.\n");
printf("3- Multiplication.\n");
printf("4- Division.\n");
printf("5- Division remainder.\n");
printf("6- Power.\n");

// operator
int operator = -1;

while (operator > 6 || operator < 1)
{
    printf("Choose type of operation (1-6): \n");
    scanf("%i", &operator);
    if (operator > 6 || operator < 1)
    {
      printf("Wrong input. Try again.\n");  
    }
    
}

// input
float a = 0;
printf("Type the first number: \n");
scanf("%f", &a);


float b = 0;
printf("Type the second number: \n");
scanf("%f", &b);

// operation
float sum = 0;
switch (operator) {
case 1:
{
    sum = a + b;
    break;
}
case 2:
{
    sum = a - b;
    break;
}
case 3:
{
    sum = a * b;
    break;
}
case 4:
{
    if (b != 0)
    {
        sum = a / b;
    break;
    }
    else
    {
        printf("This operation is impossible. \n");
        break;
    }
}
case 5:
{
    sum = fmod(a, b);
    break;
}
case 6:
{
    sum = pow(a, b);
    break;
}
}

//total
printf("Result is: %.2f \n", sum);

//one more operaion

printf("Do you want to perform another operation? Enter 'y' for yes or 'n' for no. \n");
scanf(" %c", &again);
}

while (again == 'Y' || again == 'y');

return 0;
}
