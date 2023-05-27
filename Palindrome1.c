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

    int c = 0;
    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] == r[i])
        {
            c++;
        }
    }

    if (c == strlen(t))
    {
        printf("This word is palindrome. \n");
    }
    else
    {
        printf("This word is NOT a palindrome. \n");
    }

    return 0;
}