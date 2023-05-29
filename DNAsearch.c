#include <stdio.h>
#include <string.h>

/* This program has in its storage of DNA code of five people
 * that might be involved in a crime. A detective has found a part of this code
 * and now she is going to search in the 5 codes to see who is the criminal.
 */

int main()
{
    char Amal_DNA[] = "CAGTCCTGGGACAGACGACTTTACGTAGCTGACTGCATGGC";
    char Sara_DNA[] = "AGTACCCCTAGGACTACGTACCGACTTCCGACCTCGTATGAC";
    char Anir_DNA[] = "TCAGACCTAGGCTGACGATCGGATGTAGGCTACGACTGAGGA";
    char Lina_DNA[] = "GACGTTCCACAGGTGGCTAGTGACAGCTAGCTAGGCTAGCTG";

    char DNA_sample[] = "GCTAGC";

    if (strstr(Amal_DNA, DNA_sample) != 0)
    {
        printf("Result: DNA sample matches Amal. ");
    }
    else if (strstr(Sara_DNA, DNA_sample) != 0)
    {
        printf("Result: DNA sample matches Sara. ");
    }
    else if (strstr(Anir_DNA, DNA_sample) != 0)
    {
        printf("Result: DNA sample matches Anir. ");
    }
    else if (strstr(Lina_DNA, DNA_sample) != 0)
    {
        printf("Result: DNA sample matches Lina. ");
    }
    else
    {
        printf("Result: DNA sample does not match any of the individuals in the database. ");
    }

    return 0;
}