// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
/*
The trigonometric function sin(x) where the value of x lies in the range 0 to 360 better can be expressed by the Taylor series expansion, which is given below.
                      
where k = 0, 1, 2, 3 …
Note that a term in the above Taylor series expansion can be written as                   
As this is an infinite series, the value of sin(x) can be approximated up to a certain value of n (for which your computer allows the calculation of the factorial value of n (i.e., n!).

Given a value of x (say in degree), you are to evaluate the value of sin(x). Do the following:
(a)	Write a recursive function int fact(int n) to calculate the factorial value of n, that is, n!. You are encourage to define the function so that it can run a factorial calculation for a largest possible value of n. 
(b)	Write another recursive function float pow(float x, int n) to calculate the value of xn.
(c)	Write a function double i_sin(double x) to calculate the value of sin(x) with an iterative function. 
(d)	Write another function double r_sin(double x) to calculate the value of sin(x) with a recursive function.
(e)	Call the two functions from the function main(). Also, calculate the CPU times require to execute both the functions and display the time difference between the two.

Note: Following hint is for calculating the CPU time of the execution of a part of program.

*/
#include <stdio.h>
#include <time.h>

#define PI 3.1415926535
#define MAX_ITER 80
#define EPSILON 1e-15
// Function to calculate the factorial of a number using recursion
long long int fact(long long int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

// Function to calculate the power of a number using recursion
double pow(double x, int n)
{
    if (n == 0)
        return 1;
    else if (n > 0) // for positive powers
        return x * pow(x, n - 1);
    else    // for negative powers
        return 1 / pow(x, -n);
}

// Function to calculate the value of sin(x) using iterative method
double i_sin(double x)
{
    double r0, r1=x;    // r0 = previous term, r1 = current term
    int i=1;    // i = current iteration
    do{
        r0 = r1;   // update the previous term
        r1 = r0 + pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1); // calculate the current term
        i++;   // update the iteration
    } while (i<MAX_ITER && fabs(r1 - r0) >= EPSILON); // check the condition for convergence or max iteration limit
    sleep(1);   // Adding this here to check that the clock() function is working properly
    // without this on a laptop with 4.2 GHz CPU, the CPU time difference is 0 milli seconds
    // #Sufferring_from_success :p
    return r1;
}

// Helper function to calculate |x| or modulus of x
double fabs(double x)
{
    return (x < 0) ? -x : x;   // if x is negative, return -x else return x
}   


// Function to calculate the value of sin(x) using recursive method
double r_sin(double x)
{
    static int i = 1;   // i = current iteration (static so that it doesn't get reset to 1 every time the function is called)
    static double r0, r1;  // r0 = previous term, r1 = current term (static so that it doesn't get reset to 0 every time the function is called)
    if (i == 1) // for the first iteration
        r1 = x; // current term = x
    r0 = r1;  // update the previous term
    r1 = r0 + pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1); // calculate the current term
    i++;  // update the iteration
    if (i>MAX_ITER || fabs(r1 - r0) < EPSILON){ // check the condition for convergence or max iteration limit
        sleep(1);   // Adding this here to check that the clock() function is working properly
        return r1;
    }
    return r_sin(x); // call the function recursively
}

int main() {

    double deg, rad, sin_x_iterative, sin_x_recursive;
    double iter_time, rec_time, diff_time;
    printf("Enter the deg in degrees [0,360]: ");
    scanf("%lf", &deg);
    printf("Degrees = %lf\n", deg);
    // Check if the input is valid
    if (deg < 0 || deg > 360)
        return printf("Error: angle should be between 0 & 360\n");

    // Convert degrees to rad
    rad = deg * PI / 180;

    // Calculate sin(x) using the iterative function
    printf("### Iterative Method ###\n");
    clock_t start = clock();
    sin_x_iterative = i_sin(rad);
    clock_t end = clock();
    printf("\tsin(%.4lf) = %.9lf\n", deg, sin_x_iterative);
    iter_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\tCPU time: %.9lf seconds\n", iter_time);

    // Calculate sin(x) using the recursive function
    printf("\n### Recursive Method ###\n");
    start = clock();
    sin_x_recursive = r_sin(rad);
    end = clock();
    rec_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\tsin(%.4lf) = %.9lf\n", deg, sin_x_recursive);

    printf("\tCPU time: %.9lf seconds\n", rec_time);

    // Calculate the difference in CPU time
    diff_time = iter_time - rec_time;
    (diff_time > 0)? printf("Recursive"): printf("Iterative");
    printf(" method is faster by %.9lf seconds\n", fabs(diff_time));

    return 0;
}
