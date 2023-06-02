#include <stdio.h>

// Function to check if a number is a Fibonacci number
int isFibonacci(int num) {
    int a = 0, b = 1, c;

    while (a <= num) {
        if (a == num) {
            return 1; // Number is a Fibonacci number
        }

        c = a + b;
        a = b;
        b = c;
    }

    return 0; // Number is not a Fibonacci number
}

// Function to find the nearest Fibonacci number
int findNearestFibonacci(int num) {
    int a = 0, b = 1, c;

    while (1) {
        c = a + b;

        if (c >= num) {
            int diff1 = num - b;
            int diff2 = c - num;

            if (diff1 <= diff2) {
                return b; // Return the smaller difference Fibonacci number
            } else {
                return a; // Return the larger difference Fibonacci number
            }
        }

        a = b;
        b = c;
    }
}

int main() {
    int n;

    printf("Value of n : ");
    scanf("%d", &n);
    //checks whether n is positive or not
    while(n<0){
        printf("Please give positive number");
        scanf("%d",&n);
        }

    if (isFibonacci(n)) {
        printf("%d is a Fibonacci number.\n", n);
    } else {
        int nearestFibonacci = findNearestFibonacci(n);
        printf("%d is not a Fibonacci number. Nearest Fibonacci number: %d\n", n, nearestFibonacci);
    }

    return 0;
}
