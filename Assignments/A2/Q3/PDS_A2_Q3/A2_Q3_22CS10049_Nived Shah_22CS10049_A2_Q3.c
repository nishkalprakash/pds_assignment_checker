/* A program to find the roots of a quadratic equation */

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Assume you have a quadratic equation of the form \nax^2+bx+c. \nEnter the coefficients a, b and c successively.");
	
	scanf("%d%d%d", &a, &b, &c); // entering the coefficients
	
	int D;
	D=(b*b - (4*a*c));  // calculation of the discriminant
	
	float f1, f2;
	f1= (-b+sqrt(D))/(2*a);  // calculation of root 1
	f2= (-b-sqrt(D))/(2*a);	 // calculation of root 2

	printf("Roots are: \n%f \n%f", f1, f2); // displaying the roots
	
	return 0;
}
