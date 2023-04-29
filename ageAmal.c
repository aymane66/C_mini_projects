#include <stdio.h>

/* In this progarm, you insert the age of a person, then you get
 * the total amount of money she has in her bank account if she gets
 * 500 MAD a year plus 3 MAD each year.
 */

int main()

{
    int a, i, s;

    printf("Insert the age of Amal: "); // Here you can edit the name.
    scanf("%d", &a);

    s = 0;

    for (i = 1; i <= a; i++)
    {
        s = s + (500 + (i * 3));
    }

    printf("Amal has %d MAD in her bank account.", s); // you can edit the currency from here.

    return 0;
}
