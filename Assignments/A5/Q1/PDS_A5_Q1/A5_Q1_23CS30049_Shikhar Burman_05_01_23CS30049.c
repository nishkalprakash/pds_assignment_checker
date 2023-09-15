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
            a[i] = 10 + (rand() % 91);
            printf("%d\t", a[i]);
        }

        int interchanges = 0, temp = 0;

        // Interchanging values
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] > a[i + 2])
            {
                temp = a[i];
                a[i] = a[i + 2];
                a[i + 2] = temp;
                interchanges++;
            }
        }

        // Outputing new array and number of interchanges
        printf("\n\nNew array:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n\nNumber of interchanges = %d\n", interchanges);
    }
}