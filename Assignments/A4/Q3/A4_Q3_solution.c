#include <stdio.h>

int main() {
    int n, reversedN = 0, originalN, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;  // Store the original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalN == reversedN) {
        printf("%d is a palindrome.\n", originalN);
    } else {
        printf("%d is not a palindrome.\n", originalN);
    }

    return 0;
}
