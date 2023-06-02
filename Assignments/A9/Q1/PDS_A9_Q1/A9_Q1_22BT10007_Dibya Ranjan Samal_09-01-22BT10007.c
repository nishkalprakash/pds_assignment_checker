#include<stdio.h>

#include <stdio.h>


// Function to check if a number is a perfect square

int isPerfectSquare(int n) {

    int root = 0;

    while (root * root <= n) {

        if (root * root == n) {

            return 1;

        }

        root++;

    }

    return 0;

}


// Function to check if a number is a Fibonacci number

int isFibonacci(int n) {

    // A number is a Fibonacci number if and only if 5n^2 + 4 or 5n^2 - 4 is a perfect square

    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);

}


// Function to find the nearest Fibonacci number to a given number

int findNearestFibonacci(int n) {

    int prev = 0;

    int curr = 1;

    int next = 1;


    while (next <= n) {

        prev = curr;

        curr = next;

        next = prev + curr;

    }


    // Check if the difference between n and curr is smaller than the difference between next and n

    if (n - curr <= next - n) {

        return curr;

    } else {

        return next;

    }

}


int main() {

    int num;


    printf("Enter a positive integer: ");

    scanf("%d", &num);

   if(num<0){printf("Value of n: %d\nPlease give a positive number",num);}

  else{

    if (isFibonacci(num)) {

        printf("%d is a Fibonacci number.\n", num);

    } else {

        int nearestFibonacci = findNearestFibonacci(num);

        printf("Value of n: %d\nNearest Fibonacci number: %d.\n", num, nearestFibonacci);

    }


    return 0;

}
}



