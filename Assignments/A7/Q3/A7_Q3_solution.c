// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check for anagarm
#include <stdio.h>
#include<stdlib.h>
#define inf '-'

void na(){
    printf("\nNOT ANAGRAM");
    exit(0);
}

int main()
{
    char A[100],B[100]; // A[],B[] = Char Arrays to store the words
    int i,j,la,lb;      // Loop variables
    printf("\nEnter A: ");
    scanf("%s", A);
    printf("\nEnter B: ");
    scanf("%s", B);

    for (la = 0; A[la]!='\0'; la++);    // Finding the length of word in A
    for (lb = 0; B[lb]!='\0'; lb++);    // Finding the length of word in B
    if(la!=lb)                          // If Word lengths dont match, exit
        na();
    
    for (i = 0; A[i]!='\0'; i++)
    {
        for (j = 0; B[j]!='\0'; j++) // inf is set to max value for integer to skip elements that are already counted
            if (B[j]!=inf && B[j] == A[i]) // checking the same character
            {
                B[j] = inf; // Setting already visited element to inf to skip next time
                break;
            }
        printf("\n\t%s",B);
        if (B[j]=='\0') na();
    }
    printf("\nANAGRAM");

    return 0;
}