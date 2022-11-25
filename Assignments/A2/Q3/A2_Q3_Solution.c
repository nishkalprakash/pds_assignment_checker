// A3_Q3_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to calcuate the roots of a quadratic equation

#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;								// Input the coefficients (User Defined)
	double s;
	printf("Enter the co-efficients: ");
	scanf("%d%d%d",&a,&b,&c);				// Assuming roots to always be real
	s=sqrt(b*b-4*a*c);						// Sqrt of Discriminant
	printf("Quadratic Roots: %lf, %lf\n",(-s-b)/(2*a),(s-b)/(2*a));
	
	return 0;	
}
