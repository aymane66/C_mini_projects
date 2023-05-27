#include <stdio.h>
#include <string.h>

// This program manually does the job of the function Strlen.

int main()
{
    char C[100];
    puts("Insert a word of your choice: ");
    fgets(C, sizeof(C), stdin);

    int n = 0;
    for (int i = 0; C[i] != '\0'; i++)
    {
        n++;
    }

    printf("The input has %d characters \n", n);
    // Check using strlen
    printf("The input has %d characters", strlen(C));

    return 0;
}