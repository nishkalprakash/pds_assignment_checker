// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, random;
    n = 20;
    int max = rand() % 100;
    printf("%d\n", max);

    // for loop to print random numbers and calculating the maximum
    for (int i = 1; i <= 19; i++)
    {
        random = rand() % 100;
        printf("%d\n", random);
        if (random > max)
            max = random;
    }

    // Outputs the maximum number
    printf("\n Maximum number generated = %d\n", max);
}