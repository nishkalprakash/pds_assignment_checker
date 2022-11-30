#include <stdio.h>
#include <stdlib.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 5
	Description : Root of cubic polynomial
*/


int main()

{
	int A,B,C,D;												// Declaring variables
	double a,b,c,pa,pb,pc;										

	printf("Enter coefficient of x^0 : ");						// taking Input from User
	scanf("%d",&D);

	printf("Enter coefficient of x^1 : ");						// taking Input from User
	scanf("%d",&C);

	printf("Enter coefficient of x^2 : ");						// taking Input from User
	scanf("%d",&B);

	printf("Enter coefficient of x^3 : ");						// taking Input from User
	scanf("%d",&A);

	
	printf("Enter a : ");										// taking Input from User
	scanf("%lf",&a);

	printf("Enter b : ");										// taking Input from User
	scanf("%lf",&b);

	while(1)
	{
		pa=A*a*a*a + B*a*a + C*a + D;

		pb=A*b*b*b + B*b*b + C*b + D;

		if ((pa*pb)>=0) printf("Invalid a,b");

		c= a + ((a-b)*pa)/(pb-pa);
		pc=A*c*c*c + B*c*c + C*c + D;

		if (abs(pc)<0.001) 										// Converging towards the root
			{
				printf("Root = %lf\n",c); 
				break;
			}
		else if (pa*pc>0) a=c;
		else b=c;

	}

	return 0;
}
