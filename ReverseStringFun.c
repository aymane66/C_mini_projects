#include <stdio.h>
#include <string.h>

int main()
{
    char t[50];
    puts("Insert a word: ");
    fgets(t, sizeof(t), stdin);

    printf("%s", strrev(t));

    return 0;
}