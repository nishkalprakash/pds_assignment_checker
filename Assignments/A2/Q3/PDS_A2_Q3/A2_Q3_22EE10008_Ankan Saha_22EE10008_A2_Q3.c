/* Calculate roots from the values of a, b and c */

#include <stdio.h>
#include <math.h>

int main()
{

	int a, b, c;										// Declaring variables
	float d, r1, r2;

	scanf("%d %d %d", &a, &b, &c);						// Inputting values

	d = pow(pow(b,2) - 4*a*c, 0.5);						// Calculations
	r1 = (-b + d)/2*a;
	r2 = (-b - d)/2*a;

	printf("Root 1 = %f\nRoot 2 = %f\n", r1, r2);		//Printing the values
	return 0;

}