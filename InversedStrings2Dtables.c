#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // user input
    char *text[4];
    char sentence[100];

    printf("Type in 4 sentences (100 characters max): \n");

    for (int i = 0; i < 4; i++)
    {
        printf("Sentence %d: ", i + 1);
        fgets(sentence, sizeof(sentence), stdin);
        text[i] = malloc(strlen(sentence) + 1);
        strcpy(text[i], sentence);
    }

    // Input display
    printf("\n---------- Inserted data ----------\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%s", text[i]);
    }

    // Display inversed input
    printf("\n---------- Inverted sentences ----------\n");
    for (int i = 3; i >= 0; i--)
    {
        printf("%s", text[i]);
    }

    // Free allocated memory
    for (int i = 0; i < 4; i++)
    {
        free(text[i]);
    }

        return 0;
}