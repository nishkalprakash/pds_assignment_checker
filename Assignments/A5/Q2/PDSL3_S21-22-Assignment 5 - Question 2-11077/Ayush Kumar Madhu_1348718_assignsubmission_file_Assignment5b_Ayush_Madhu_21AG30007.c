// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <stdlib.h>

// Main Function - The program starts from here
int main()
{
    // Defining variables
    int n, bins, temp = 0;
    int *ptr;

    // Taking Inputs
    printf("Enter the number of array elements : ");
    scanf("%d", &n);

    // Using Dynamic Allocation (malloc)
    ptr = (int *)malloc(n * sizeof(int));

    // Taking array elements as input
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Finding the range [r1,r2]
    int r1 = ptr[0], r2 = ptr[0];
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] < r1)
        {
            r1 = ptr[i];
        }
        if (ptr[i] > r2)
        {
            r2 = ptr[i];
        }
    }

    int count = 0, x = 1;
    printf("Enter the number of bins : ");
    scanf("%d", &bins);

    // temp stores the difference according to bins
    temp = ((r2 - r1) + 1) / bins;

    for (int i = r1; i <= r2; i += temp)
    {
        printf("bin%d -> ", x);
        for (int j = 0; j < n; j++)
        {
            if (ptr[j] < i + temp && ptr[j] != -1)
            {
                printf("%d ", ptr[j]);
                ptr[j] = -1;
                count += 1;
            }
        }

        printf("\nNumber of elements in bin%d = %d\n", x, count);
        count = 0;
        x += 1;
    }

    return 0;
}