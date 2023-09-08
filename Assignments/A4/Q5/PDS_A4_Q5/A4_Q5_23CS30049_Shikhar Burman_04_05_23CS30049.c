// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int n, sum_of_digits = 0, largest_digit = 0, second_largest_digit = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", n);

    // while loop to calculate sum of digits, largest digit and second largest digit
    while (n > 0)
    {
        sum_of_digits = sum_of_digits + n % 10;
        if (n % 10 > largest_digit)
            largest_digit = n % 10;
        if (n % 10 > second_largest_digit && n % 10 < largest_digit)
            second_largest_digit = n % 10;
        n = n / 10;
    }

    // Outputs in proper format
    printf("Sum of digits = %d\n", sum_of_digits);
    printf("Largest = %d\tSecond Largest = %d\n", largest_digit, second_largest_digit);
}