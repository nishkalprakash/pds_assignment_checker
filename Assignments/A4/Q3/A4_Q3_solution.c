// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print the digts in reverse in words

#include <stdio.h>

int main()
{
    int digit; // digit = last digit
    long N;    // Note how N is long to accomodate the last input
    printf("Enter N: ");
    scanf("%ld", &N);
    while (N > 0) // We just loop uptil N = 0
    {
        digit = N % 10; // Extracting last digit
        switch (digit)  // Switch Case based on the last ditig
        {
            case 0:
                printf("Zero  ");
                break;
            case 1:
                printf("One  ");
                break;
            case 2:
                printf("Two  ");
                break;
            case 3:
                printf("Three  ");
                break;
            case 4:
                printf("Four  ");
                break;
            case 5:
                printf("Five  ");
                break;
            case 6:
                printf("Six  ");
                break;
            case 7:
                printf("Seven  ");
                break;
            case 8:
                printf("Eight  ");
                break;
            case 9:
                printf("Nine  ");
                break;
        }
        N = N / 10; // dividing the number by 10
    }
    return 0;
}
