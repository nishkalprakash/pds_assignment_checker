/* Program to calculate total distance travelled by a bouncing ball */

#include <stdio.h>								// Standard IO library
#include <math.h>								// Math library for the pow() function

int main()
{

	float g = 9.87;
	int n;										// Variable storing number of bounces
	float y, velocity, tot;						// y is height, velocity is velocity and tot is the total distance
	
	printf("Enter the Distance Y - ");
	scanf("%f", &y);							// Getting the height
	printf("Enter n - ");
	scanf("%d", &n);							// Getting number of bounces

	tot = y + y * 2/3 * (1 - 1/pow(4,n-1));		// Calculating for the first bounce

	printf("Total distance = %f\n", tot);		// Printing Total distance
	return 0;

}