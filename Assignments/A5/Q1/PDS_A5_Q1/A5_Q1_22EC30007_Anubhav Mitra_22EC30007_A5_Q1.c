/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 4
Description: Program to print Taylor expansion of e^x upto n terms. Separate functions have been created to compute x^n and n factorial. Note that this is redundant, by using x^(n-1) and (n-1) factorial a loop can easily be created to multiply by x/n at each step and get the next term to be added.
*/

#include <stdio.h>

int fact (int n) { // factorial function
        int factorial = 1; // initialising for n == 0 || n == 1
        for (int i = 2; i <= n; i++) {
                factorial *= i; // multiplying successive terms
        }
	return factorial; // returning answer
}

int power (int x, int n) {
        int power = 1; // initialising for n == 0
        for (int i = 1; i <= n; i++) {
                power *= x; // multiplying for next powers
        }
        return power; // returning final answer
}

int main() {
        int x, n; // initialising variables
        float sum = 0; // initialising sum
        printf("Enter value of x: \n");
        scanf("%d", &x); // taking value of x from user
        printf("Enter value of n: \n");
        scanf("%d", &n); // taking value of n from user
        for (int i = 0; i < n; i++) { // running a loop upto n
                sum += (float) power(x, i) / fact(i); // incrementing successive terms
        }
        printf("The sum is: %f\n", sum); // printing final sum
        return 0;
}


