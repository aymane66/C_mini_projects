#include <stdio.h>
#include <string.h>

/* This program prompts the user for a sentnece/ paragraph,
 * then the program displays the most repeated character in
 * the string.
 */

int main()
{
    char t[100];
    puts("Insert a sentence (Max 100 characters): ");
    fgets(t, sizeof(t), stdin);

    int freq[100];
    for (int i = 0; i < strlen(t); i++)
    {
        freq[i] = -1;
    }

    int i, j;
    int counter;
    for (i = 0; i < strlen(t); i++)
    {
        counter = 1;

        for (j = i + 1; j < strlen(t); j++)
        {
            if (t[i] == t[j])
            {
                counter++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0)
        {
            freq[i] = counter;
        }
    }

    int max = freq[0];
    int index_max = 0;
    for (i = 1; i < strlen(t); i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            index_max = i;
        }
    }

    printf("The most reapeated character is: %c\n", t[index_max]);
    printf("The character %c is reapeated %d times.\n", t[index_max], max);

    return 0;
}