#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char login[10];
    printf("Enter your user name: ");
    scanf("%s", login);
    char *users[] = {"Robert", "Jennifer", "Mark", "Michael", "Chris", "Karl"};

    int found = 0;

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(login, users[i]) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Welcome again %s.\n", login);
    }
    else
    {
        printf("This user does not exist.\n");
    }

    return 0;
}