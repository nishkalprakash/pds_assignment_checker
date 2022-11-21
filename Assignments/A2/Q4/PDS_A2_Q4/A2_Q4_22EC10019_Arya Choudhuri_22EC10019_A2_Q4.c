# include <stdio.h>
# include <math.h>

int main()
{	
	printf("Speed of light is calculated by the formula: c = 1/sqrt(u0e0) \n");
		
	long double u0;	//variable to store u0
	
	printf("Enter value of u0:\n");
	scanf("%Lf",&u0);

	long double e0;	//variable to store e0
	
	printf("Enter value of e0:\n");
	scanf("%Lf",&e0);

	double c;		//variable to store speed of light
	c = 1/(sqrt(u0*e0));

	printf("Value of c is %e", c);
}

	
	
