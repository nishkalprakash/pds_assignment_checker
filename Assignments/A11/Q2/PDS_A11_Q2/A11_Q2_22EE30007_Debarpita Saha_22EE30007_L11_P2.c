/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 11
* Description : Program to check if a number follows the fibonacci sequence
*/
#include <stdio.h>


int fibonacci(int n, int prev1, int prev2) {

    if (n == 0)

    return prev1;

    if (n == 1)

    return prev2;

    return fibonacci(n - 1, prev2, prev1 + prev2);

}


int main() {

    int n, num;

    printf("Enter a number: ");

    scanf("%d", &num);

    for (n = 0; fibonacci(n, 0, 1) < num; n++);

    if (fibonacci(n, 0, 1) == num)

        printf("Yes\n");

    else

        printf("No\n");

    return 0;

}



