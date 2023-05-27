#include <stdio.h>
#include <string.h>

int main()
{   
    char name[100]; 
    puts("Insert a sentence: ");
    gets(name);

    puts("You inserted: ");
    puts(name);

    return 0;
}