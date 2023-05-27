#include <stdio.h>
#include <string.h>

/* This program prompts the user for a word, then it displays
 * its reverse.
 */

int main()
{
    int t[50];
    puts("Insert a word: ");
    fgets(t, sizeof(t), stdin);

    for (int i = strlen(t) - 1; i >= 0; i--)
    {
        printf("%c", t[i]);
    }

    return 0;
}