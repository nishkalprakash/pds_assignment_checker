// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int n, count = 0;
    while (1)
    {
        printf("enter number: ");
        scanf("%d", &n);

        // program terminates if negative number is entered
        if (n < 0)
        {
            printf("terminated\n");
            break;
        }

        if (n == 5)
        {
            count++;
            continue;
        }

        if (count == 1)
        {
            if (n == 1)
                count++;
            else
                count = 0;
            continue;
        }

        if (count == 2)
        {
            count++;
            continue;
        }

        if (count == 3)
            if (n == 7)
            {
                printf("pattern found\n");
                break;
            }
    }
}