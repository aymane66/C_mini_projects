#include <stdio.h>
#include <string.h>

// This program prompts the user for a word and a letter to be removed
// The program displays the word inserted without the letter chosen.

void delete(char *s, char d)
{
    char t[50];
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != d)
        {
            t[j] = s[i];
            j++;
        }
    }
    t[j] = '\0';
    strcpy(s, t);
}

int main()
{
    char s[50];
    puts("Insert a word: ");
    fgets(s, sizeof(s), stdin);

    char d;
    puts("Character to be deleted from the word: ");
    scanf("%c", &d);

    delete (s, d);
    printf("Result: %s\n", s);

    return 0;
}