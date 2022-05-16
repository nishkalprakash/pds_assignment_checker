/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int maxIterations = 20;
	int i = 1;
	double x0, x1, e, fx, fx1, err;
	x0 = 5.0;
	e = 0.00005;
    printf("Iteration    x0        x1       Error\n");      //space given for formatting output
	do {
		fx = pow(x0, 3) - 25;
		fx1 = 3 * pow(x0, 2);
		x1 = x0 - (fx/fx1);
		err = fabs(x1 - x0);
		printf("    %d     %lf  %lf  %lf\n", i, x0, x1, err);
		x0 = x1;
		i++;
	} while(i <= maxIterations && err > e);
	printf("The square root is %lf\n", x0);
	return 0;
}