// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, a[50];
    printf("Enter number of integers to be entered(max 50): ");
    scanf("%d", &n);

    if (n > 50)
        printf("Maximum limit is 50. Terminating.\n");
    else
    {
        printf("\nOriginal array:\n");

        // Generating array
        for (int i = 0; i < n; i++)
        {
            a[i] = 10 + (rand() % 41);
            printf("%d\t", a[i]);
        }

        printf("\n\nValid triples and their corresponding values: \n");

        // Checking condition using three nested loops
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] <= 60)
                    {
                        printf("Index: (%d, %d, %d)\tValue: (%d, %d, %d)\n", i, j, k, a[i], a[j], a[k]);
                    }
                }
    }
}