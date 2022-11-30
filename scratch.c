/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Checks whether the time entered by the user is valid and prints it if it is valid
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a1,b1,c,d;
	/*printf("The general cubic equation is ax^3+bx^2+cx+d. Note all coefficients in this program should lie between -5 and 5 and a should not be zero\n");
	printf("Enter the coefficient of x^0:");
	scanf("%d", &d);
	printf("Enter the coefficient of x^1:");
	scanf("%d", &c);
	printf("Enter the coefficient of x^2:");
	scanf("%d", &b1);
	printf("Enter the coefficient of x^3:");
	scanf("%d", &a1);*/
	//fflush(stdin);
	scanf("%d%d%d%d", &d, &c,&b1, &a1);
	printf("Hi");
	// if(a1==0 || a1<-5 || a1>5 || b1<-5 || b1>5 || c<-5 || c>5 || d<-5 || d>5)
	// {
	// 	printf("Wrong Input!!!!\n");
	// 	return 0;
	// }
	double a,b;
	a=-2.00,b=2.00;
	while((a1*a*a*a+b1*a*a+c*a+(double)(d))>0)
		a*=2.0;
	while((a1*b*b*b+b1*b*b+c*b+(double)(d))<0)
		b*=2.0;
	double Pa=a1*a*a*a+b1*a*a+c*a+(double)(d),Pb=a1*b*b*b+b1*b*b+c*b+(double)(d);
	double c0=(a*Pb-b*Pa)/(Pb-Pa);
	while(abs((a1*c0*c0*c0+b1*c0*c0+c*c0+(double)d))>.001)
	{
		double Pa=a1*a*a*a+b1*a*a+c*a+(double)(d),Pb=a1*b*b*b+b1*b*b+c*b+(double)(d);
		double c0=(a*Pb-b*Pa)/(Pb-Pa);
		double Pc=a1*c0*c0*c0+b1*c0*c0+c*c0+(double)(d);
		if(Pc<0)
			a=c0;
		else
			b=c0;
	}
	printf("The root of the polynomial %dx^3+%dx^2+%dx+%d is %lf \n", a1, b1, c, d, c0);
	return 0;
}