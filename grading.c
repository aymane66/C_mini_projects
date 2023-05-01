#include <stdio.h>

// This program prompts the user for 3 exam scores, then displays the average and a remark based on the average.

int main()

{
    float M1, M2, M3, Av;

    printf("First mark: ");
    scanf("%f", &M1);
    printf("Second mark: ");
    scanf("%f", &M2);
    printf("Third mark: ");
    scanf("%f", &M3);

    if (((M1 >= 0) && (M1 <= 20)) && ((M2 >= 0) && (M2 <= 20)) && ((M3 >= 0) && (M3 <= 20)))
    {

        // Average
        Av = (M1 + M2 + M3) / 3;
        printf("Your average is: %.2f\n", Av);
        // Remarks
        if ((Av >= 18) && (Av <= 20))
            printf("Excellent");
        else if ((Av >= 15) && (Av < 18))
            printf("Very good");
        else if ((Av >= 12) && (Av < 15))
            printf("Good");
        else if ((Av >= 10) && (Av < 12))
            printf("Average");
        else if ((Av >= 0) && (Av < 10))
            printf("Insufficient");
        else
            printf("Invalid number. \nChoose from 0 to 20");
    }

    else
        printf("Invalid input.\nYour input should be between 0 and 20.");

    return 0;
}