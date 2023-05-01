#include <stdio.h>

// Simple program to move a character up, downm left or right.

int main()

{
    char n;

    printf("Move: ");
    scanf(" %c", &n);

    switch (n)
    {
    case '6':
        printf("Character moves right.");
        break;
    case '4':
        printf("Character moves left.");
        break;
    case '8':
        printf("Character moves up.");
        break;
    case '2':
        printf("Character moves down.");
        break;
    default:
        printf("Error. Character does not move.");

        return 0;
    }
}