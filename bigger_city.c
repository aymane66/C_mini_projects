#include <stdio.h>
#include <math.h>

/* This program displays the number of years necessary
 * for a city Agadir to become bigger in terms of population than
 * city Rabat.
 */

int main()
{
    float Agadir, Rabat, year;

    Agadir = 500000; // you can modify the value here.
    Rabat = 1000000;
    year = 0;

    while (Agadir < Rabat)
    {
        Agadir += Agadir * 0.08;
        Rabat += 50000; // you can modify the value here.
        year++;
    }

    printf("%.2f", year);

    return 0;
}
