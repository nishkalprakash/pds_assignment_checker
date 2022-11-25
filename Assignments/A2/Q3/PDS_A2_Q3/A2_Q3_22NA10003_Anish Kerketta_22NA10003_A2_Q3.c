#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c; //Declaring variable
	printf("Enter the coefficients of a quadratic equation starting from the highest power  of x \n"); 
	scanf("%d %d %d",&a,&b,&c); //Read
	int s1 = ((b*b)-(4*a*c)); //Calculations
	float s2;
	s2=sqrt(s1);
	float r1,r2;
	r1=((-b)+s2)/(2*a);
	r2=(-b-s2)/(2*a);
	printf("The roots of the equation are %lf and %lf",r1,r2); //Print
	return 0;
}

