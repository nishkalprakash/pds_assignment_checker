#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, D;

	//getting value of coefficents from user

	printf("enter the coefficents of the quadratic equation a, b and c respectively\n");
	scanf("%f%f%f", &a, &b, &c);
	printf("the coefficents of the equation are a=%f, b=%f, c=%f\n", a, b , c);

	//calculating the discriminant value

	D = pow(b,2) - 4*a*c;

	// checking wether roots are imaginary

	if (D < 0) printf("roots are imaginary\n");

	else
	{
		//Evaluating both the roots of the equation

		double r1, r2;
		r1 = (-b + sqrt(D)) / (2*a);
		r2 = (-b - sqrt(D)) / (2*a);

		//checking if roots are equal or not as if D=0 roots are equal
		//also printing the value of roots

		if (D == 0) printf("The roots of the equation are %lf and %lf.\nAnd the roots are equal.\n", r1, r2);

		else
		{
			printf("roots of the quadratic equation are %lf and %lf.\n", r1, r2);
		}
	}
}