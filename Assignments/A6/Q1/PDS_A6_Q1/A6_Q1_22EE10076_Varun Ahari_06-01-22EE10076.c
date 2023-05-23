#include <stdio.h>
#include <time.h>

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}

float pow(float x, int n) {
    if (n == 0) {
        return 1;
    } else {
        float result = 1;
        for (int i = 0; i < n; i++) {
            result *= x;
        }
        return result;
    }
}

double i_sin(double x) {
    double result = 0;
    int n = 0;
    int sign = 1;
    while (n <= 20) { 
        result += sign * pow(x, 2*n+1) / fact(2*n+1);
        sign *= -1;
        n++;
    }
    return result;
}

double r_sin_helper(double x, int n, double term, int sign) {
    if (n == 0) {
        return term;
    } else {
        term *= (x * x) / ((2*n) * (2*n+1));
        return r_sin_helper(x, n-1, term, -sign) + (sign * term);
    }
}

double r_sin(double x) {
    return r_sin_helper(x, 20, x, -1);
}

int main() {
    double x;
    printf("Enter the value of x in degree: ");
    scanf("%lf", &x);
    x = x * 3.14159 / 180; // converting degree to radian

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    double sin_iterative = i_sin(x);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Iterative sin(%lf) = %lf\n", x, sin_iterative);


    start = clock();
    double sin_recursive = r_sin(x);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Recursive sin(%lf) = %lf\n", x, sin_recursive);


    printf("Time difference: %lf seconds\n", cpu_time_used - cpu_time_used);

    return 0;
}
