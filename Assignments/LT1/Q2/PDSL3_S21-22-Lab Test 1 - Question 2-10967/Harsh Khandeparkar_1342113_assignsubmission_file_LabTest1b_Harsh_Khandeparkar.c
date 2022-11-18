/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	LabTest: 1(b)
*/

#include <stdio.h>
#include <math.h>

// writing the function and its derivatve
// as c functions

// f(x) = x^3 - 25
float f(float x) {
	return x * x * x - 25;
}

// dervative of f
// f'(x) = 3x^2
float f_d(float x) {
	return 3 * x * x;
}

int main() {
	// inputs
	float x0, epsilon;
	int max_iterations;

	printf("Enter the value of x0: ");
	scanf("%f", &x0);

	printf("Enter the value of epsilon: ");
	scanf("%f", &epsilon);

	printf("Enter the maximum number of iterations allowed: ");
	scanf("%d", &max_iterations);

	// iteration number
	int i = 1;

	// print the table header
	printf("Iteration    x0       x1      Error\n");
	while (i <= max_iterations) {
		// calculate the next x
		// here x1 represents xn+1 and x0 represents xn
		// xn+1 = xn - f(xn) / f'(xn)
		float x1 = x0 - f(x0) / f_d(x0);

		// calculate error
		// error = |xn+1 - xn|
		float error = fabs(x1 - x0);

		// print the table entries
		printf("   %-3d     %f %f %f\n", i, x0, x1, error);

		// the x1 in this iteration is x0 for the next iteration
		x0 = x1;

		// if desired accuracy is reached, break
		if (error < epsilon) break;

		i++;
	}

	printf("The root is %f\n", x0);

	return 0;
}