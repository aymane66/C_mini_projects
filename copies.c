#include <stdio.h>

/* This program prompts the user for the number of
 * copies they want to print, then calculates the sum based on the number
 * of papers printed.
 */

int main()

{
    int N;
    float P;

    printf("Quantity of copies: ");
    scanf("%d", &N);

    // Pricing scheme: //

    // If the customer prints less than 10 papers, they pay 0.30 MAD for each.
    if (N <= 10)
    {
        P = N * 0.30;
        printf("Total: %.2f MAD", P);
    }

    /* If the customer prints more than 30 papers:
     * - The first 10 papers cost 0.30 MAD each.
     * - The next 20 papers cost 0.25 MAD each.
     * - Any additional papers beyond that cost 0.20 MAD each.
     */
    else if (N >= 30)
    {

        P = N * 0.30 + 20 * 0.25 + (N - 30) * 0.20;
        printf("Total: %.2f MAD", P);
    }

    /* If the customer wants to print between 10 and 30 papers:
     * - The first 10 papers cost 0.30 MAD each.
     * - Any additional papers beyond that cost 0.25 MAD each.
     */
    else
    {

        P = N * 0.30 + (N - 10) * 0.25;
        printf("Total: %.2f MAD", P);
    }

    return 0;
}