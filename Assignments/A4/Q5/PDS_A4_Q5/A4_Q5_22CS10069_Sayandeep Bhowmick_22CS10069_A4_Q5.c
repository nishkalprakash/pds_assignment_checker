/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Calculates the roots of a cubic polynomial
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double a1,b1,c,d;
	printf("The general cubic equation is ax^3+bx^2+cx+d. Note all coefficients in this program should lie between -5 and 5 and a should not be zero\n");
	printf("Enter the coefficient of x^0:");
	scanf("%lf", &d);
	printf("Enter the coefficient of x^1:");
	scanf("%lf", &c);
	printf("Enter the coefficient of x^2:");
	scanf("%lf", &b1);
	printf("Enter the coefficient of x^3:");
	scanf("%lf", &a1);
	if(a1==0 || a1<-5 || a1>5 || b1<-5 || b1>5 || c<-5 || c>5 || d<-5 || d>5)			//checks whether the input is correct
	{
		printf("Wrong Input!!!!\n");
		return 0;
	}
	double a,b;
	a=-2.00,b=2.00;
	while((a1*a*a*a+b1*a*a+c*a+d)>0)						//takes a and b and multiplies them by 2 till Pa<0 and Pb>0.This gives a better interval at the first instance
		a*=2.0;
	while((a1*b*b*b+b1*b*b+c*b+d)<0)
		b*=2.0;
	double Pa=a1*a*a*a+b1*a*a+c*a+d,Pb=a1*b*b*b+b1*b*b+c*b+d;
	double c0=(a*Pb-b*Pa)/(Pb-Pa);
	double Pc=a1*c0*c0*c0+b1*c0*c0+c*c0+d;
	while(Pc>.001 || Pc<-.001)
	{
		Pa=a1*a*a*a+b1*a*a+c*a+d;
		Pb=a1*b*b*b+b1*b*b+c*b+d;
		c0=(a*Pb-b*Pa)/(Pb-Pa);
		Pc=a1*c0*c0*c0+b1*c0*c0+c*c0+d;					//calculates the values and does operations as mentioned in the question
		if(Pc<0)
			a=c0;
		else
			b=c0;
	}
	printf("The root of the polynomial %1.0lfx^3+%1.0lfx^2+%1.0lfx+%1.0lf is %1.5lf \n", a1, b1, c, d, c0);
	return 0;
}
