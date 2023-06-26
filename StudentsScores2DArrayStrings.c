#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // User input
    char *names[4];
    char name[4][100];

    printf("Type in the names of the students: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("Student %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        names[i] = malloc(strlen(name[i]) + 1);
        strcpy(names[i], name[i]);
    }

    float score1[4];
    float score2[4];
    printf("Type in the scores of students in exam 1 and 2:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Score 1 for %s: ", names[i]);
        scanf("%f", &score1[i]);
        printf("Score 2 for %s: ", names[i]);
        scanf("%f", &score2[i]);
    }

    // Display input
    printf("\n---------- Students scores ----------\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Student %s: \n", names[i]);
        printf("Score 1: %.2f | Score 2: %.2f \n", score1[i], score2[i]);
    }

    printf("\n---------- Average scores ----------\n");
    // Average calculation
    float average[4];
    for (int i = 0; i < 4; i++)
    {
        average[i] = (score1[i] + score2[i]) / 2;

        // Display results
        printf("Average score for %s is : %.2f\n\n", names[i], average[i]);
    }

    // Free allocated memory
    for (int i = 0; i < 4; i++)
    {
        free(names[i]);
    }
    return 0;
}