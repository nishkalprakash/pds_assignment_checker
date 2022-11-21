/*Calculating the roots of a quadratic equation*/
#include <stdio.h>
#include <math.h>

int main()
{
	printf("Enter a, b and c of the quadratic equation ax^2+bx+c \n");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);	//Takes the coefficients of the quadratic equation as input
	double d=b*b-4*a*c;		//Calculates the discriminant
	if(d<0)
		printf("The roots of the equation are imaginary\n");
	else
	{
		double s=sqrt(d);
		double e=(-b+s)/(2*a), f=(-b-s)/(2*a);		//Sridharacharya's formula
		printf("The roots of the quadratic equation ax^2+bx+c are %lf and %lf \n",e,f);
	}
	return 0;	
}
