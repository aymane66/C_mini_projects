#include <stdio.h>
#include <string.h>

// This program checks if a word is palindrome or not.

int main()
{
    char t[20];
    puts("Insert a word: ");
    fgets(t, sizeof(t), stdin);

    char r[20];
    strcpy(r, t);
    strrev(r);

    if (strcmp(r, t) == 0)
    {
        printf("This word is palindrome. \n");
    }
    else
    {
        printf("This word is NOT a palindrome. \n");
    }

    return 0;
}