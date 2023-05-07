#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*var*/
    int is, h, m, os, v;

    /*input*/
    printf("Insert Seconds: \n");
    scanf("%d", &is);

    /*program*/
    h = is / 3600;
    v = is % 3600;
    m = v / 60;
    os = v % 60;

    /*output*/
    printf(" Time is: %d Hours, %d Minutes, %d Seconds.", h, m, os);

    return 0;
}