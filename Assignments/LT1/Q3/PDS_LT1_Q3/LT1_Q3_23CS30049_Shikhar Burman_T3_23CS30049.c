// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>

int main()
{
    int s, n;
    // Input from user
    do
    {
        printf("Enter scale factor: ");
        scanf("%d", &s);
        printf("Enter number of lines: ");
        scanf("%d", &n);
        if (s < 1 || s > 6)
            printf("Please make sure that the scale factor is in [1,6].\n");
        if (n < 1 || n > 10)
            printf("Please make sure that number of lines is in [1,10].\n");

    } while (s < 1 || s > 6 || n < 1 || n > 10);

    int a = 1;

    // Printing pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            if (a == (3 + s))
            {
                a = 1;
                continue;
            }
            a++;
        }
        printf("\n");
    }
}