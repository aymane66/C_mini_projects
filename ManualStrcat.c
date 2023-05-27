#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    puts("Insert the first word: ");
    fgets(s, sizeof(s), stdin);

    char t[50];
    puts("Insert the second word: ");
    fgets(t, sizeof(t), stdin);

    char *PS = s;
    char *PT = t;

    PS += strlen(s);

    while (*PT != '\0')
    {
        *PS = *PT;
        PS++;
        PT++;
    }
    *PS = '\0';

    printf("Result: %s", s);

    return 0;
}