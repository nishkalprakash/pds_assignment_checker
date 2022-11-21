#include <stdio.h>
#include <math.h>

int main()
{
	printf("The quadratic is ax^2 + bx + c \n");
	int a,b,c;	//variables to stores coefficients as integers
	
	printf("Enter value of a: \n");
	scanf("%d",&a);		//takes the integer as input from user
	
	printf("Enter value of b: \n");
	scanf("%d",&b);

	printf("Enter value of c: \n");
	scanf("%d",&c);

	float D,r1,r2 ; 	//variables to store discriminant and roots of quadratic
	D = (b*b-4*a*c);
	
	if (D<0)
		printf("ERROR: Imaginary roots");
	else
		r1 = (-b+sqrt(D))/(2*a);	// calculates the roots
		r2 = (-b-sqrt(D))/(2*a);
		printf("The roots of the quadratic are %f and %f",r1,r2);
}
	
