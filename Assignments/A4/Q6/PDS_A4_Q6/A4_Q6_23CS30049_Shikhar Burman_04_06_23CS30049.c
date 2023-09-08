// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, x, sum_of_digits = 0, min_sum_of_digits = 999999, min_n;

    for (int i = 1; i <= 20; i++)
    {
        n = (5000 + rand() % 1000);
        x = n;
        while (x > 0)
        {
            sum_of_digits = sum_of_digits + x % 10;
            x = x / 10;
        }
        if (sum_of_digits < min_sum_of_digits)
        {
            min_sum_of_digits = sum_of_digits;
            min_n = n;
        }
        printf("%d, Sum of digits = %d\n", n, sum_of_digits);
        sum_of_digits = 0;
    }
    printf("Number with smallest sum of digits = %d\n", min_n);
}