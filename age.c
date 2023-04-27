#include <stdio.h>
#include <math.h>

// This program prompts the user for their year of birth, then displays the age of the user.

int main()

{
    int datbir, cur_y, age;
    cur_y = 2023; // This is to be updated to the current year.

    printf("This program counts your age based on your date of birth. \n");
    printf("Insert your year of birth: \n");
    scanf("%d", &datbir);

    age = cur_y - datbir;

    printf("Your age is: %d", age);

    return 0;
}