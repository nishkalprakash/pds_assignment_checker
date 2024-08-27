/*3.	Write a C program that takes four integers as input and prints "YES" if exactly two of them are equal, "NO" otherwise.

Note: The program should not use any loop or array.

Test cases:
 
#	INPUT	OUTPUT
1	a = 3, b = 3, c = 5, d = 7	YES
2	a = 3, b = 4, c = 5, d = 6	NO
3	a = 2, b = 2, c = 2, d = 3	NO
4	a = 1, b = 2, c = 3, d = 1	YES
*/


// Program to check if exactly two of four integers are equal
// Code Creator: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>

int main() {
    int a, b, c, d;
    int count = 0;

    // Input 4 numbers
    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // Check for pairs
    if (a == b) count++;
    if (a == c) count++;
    if (a == d) count++;
    if (b == c) count++;
    if (b == d) count++;
    if (c == d) count++;

    // printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    // Print "Yes" if exactly 1 pair is equal
    if (count == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
