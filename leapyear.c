#include <stdio.h>

// This program prompts the user for the year, then displays whether if it is a leap year or an ordinary year

int main()

{
    int y;

    printf("Year: ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        printf("Leap year");
    else
        printf("Ordinary year");

    return 0;
}