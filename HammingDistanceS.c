#include <stdio.h>
#include <string.h>

// This program checks the Hamming Distance of two words

int main()
{
    char M1[100], M2[100];

    puts("Insert two words that have the same number of letters.");

    // Prompting the user
    do
    {
        puts("Insert the first word: ");
        fgets(M1, sizeof(M1), stdin);

        puts("Insert the second word");
        fgets(M2, sizeof(M2), stdin);

    } while (strlen(M1) != strlen(M2));

    // Calculation
    int r = 0;
    for (int i = 0; i < strlen(M1); i++)
    {
        if (M1[i] != M2[i])
        {
            r++;
        }
    }

    // Display result
    printf("Hamming Distance is: %d ", r);

    return 0;
}