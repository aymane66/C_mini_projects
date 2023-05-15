#include <stdio.h>

int main()

{
    char vowels[5] = {'A', 'E', 'I', 'O', 'U'};

    printf("Vowels in English language are: \n");

    int i;
    for(i = 0; i < 5; i ++)
    {
        printf("Vowel %d : %c \n", i + 1, vowels[i]);
    }


    return 0;
}