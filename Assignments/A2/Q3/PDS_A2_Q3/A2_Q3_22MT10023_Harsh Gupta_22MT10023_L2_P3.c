#include <stdio.h>                               //including the standard input output library
#include <math.h>                                //including the math library

int main()
{
	int a,b,c;                               //declaring three variables to store the coefficients
	double p,q;                              //declaring floating variables for the roots
	scanf("%d%d%d",&a,&b,&c);                //taking the coefficients as input
	p=(-b+sqrt((b*b)-(4*a*c)))/(2*a);        //evaluating the first root
	q=(-b-sqrt((b*b)-(4*a*c)))/(2*a);        //evaluating the second root
	printf("%lf %lf",p,q);                   //printing the roots
	return 0;                                //the int main() will return 0
}
