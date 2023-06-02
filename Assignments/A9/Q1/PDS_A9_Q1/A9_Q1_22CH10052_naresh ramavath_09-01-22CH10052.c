#include <stdio.h>
#include <math.h>


int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


int nearest_fibonacci(int n) {
    int lower_bound = 0;
    int upper_bound = 1000000000;

    while (lower_bound < upper_bound) {
        int mid_point = (lower_bound + upper_bound) / 2;

        if (fibonacci(mid_point) < n) {
            lower_bound = mid_point + 1;
        } else {
            upper_bound = mid_point;
        }
    }

    int nearest_fibonacci;

    if (fabs(fibonacci(lower_bound) - n) < fabs(fibonacci(upper_bound) - n)) {
        nearest_fibonacci = fibonacci(lower_bound);
    } else {
        nearest_fibonacci = fibonacci(upper_bound);
    }

    return nearest_fibonacci;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
            printf("Value of n:%d\n",n);
        printf("Please give positive number\n");
    } else {
        printf("Value of n: %d\n", n);

  printf("%d is a Fibonacci number\n", n);

        if (fibonacci(n) == n) {
            printf("%d is a Fibonacci number\n", n);
        } else {

            int nearestfibonacci = nearest_fibonacci(n);
            printf("Nearest Fibonacci number: %d\n", nearestfibonacci);
        }
    }

    return 0;
}
