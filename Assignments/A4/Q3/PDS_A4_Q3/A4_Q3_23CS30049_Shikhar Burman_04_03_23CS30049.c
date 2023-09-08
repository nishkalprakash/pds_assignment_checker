// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int n, a, reverse;
    reverse = 0;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    a = n;

    // Computing reverse
    while (a > 0)
    {
        reverse = reverse * 10 + a % 10;
        a = a / 10;
    }

    // Checking and outputing condition of palindrome
    if (reverse == n)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
}