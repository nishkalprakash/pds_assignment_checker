/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 4-5
Description : Program to enter date and month as inputs and print out which day it is.
*/
#include <stdio.h>
void main()
{	
	double a,b,c,k,pa,pb,pc=0;					//Declaring
	int x0,x1,x2,x3;						//Declaring
	printf("Enter the interval [a,b]\n");				//Print
	printf("Enter the value of a:\n");				//Print
	scanf("%lf",&a);						//Read
	printf("Enter the value of b:\n");				//Print
	scanf("%lf",&b);						//Read
	if(a<b)								//Condition for a must be less than b
	{
	printf("Enter coefficient of x^0:");				//Instructions for the user
	scanf("%d",&x0);
	printf("Enter coefficient of x^1:");
	scanf("%d",&x1);
	printf("Enter coefficient of x^2:");
	scanf("%d",&x2);
	printf("Enter coefficient of x^3:");
	scanf("%d",&x3);
	if(x3!=0)			//Condition:coefficient of x^3 cannot be 0
	{
	if((x0>=-5 && x0<=5) &&(x1>=-5 && x1<=5)&&(x2>=-5 && x2<=5)&&(x3>=-5 && x3<=5))	//Conditions : Coefficients of the integers must be withing the range [-5,5]
	{pa=x3*a*a*a + x2*a*a + x1*a + x0;				//Calculations for polynomials
	pb=x3*b*b*b + x2*b*b + x1*b + x0;	
	if((pa>0 && pb>0)||(pa>0 && pb<0) )
	{
	k=(pa-1)/(pb-1);
	c=(a+k*b)/(1+k);
	pc=x3*c*c*c + x2*c*c + x1*c + x0;
	if(pc>0.001)		//Condition: P(c)>0.001
	{
	while(pc>0.001)		
	{
	if((pa>0 && pc>0)||(pa<0 && pc<0))				//Checking the sign 
	{
	a=c;
	}
	else
	{
	b=c;
	}
	pa=x3*a*a*a + x2*a*a + x1*a + x0;
	pb=x3*b*b*b + x2*b*b + x1*b + x0;
	k=(pa-1)/(pb-1);
	c=(a+k*b)/(1+k);
	pc=x3*c*c*c + x2*c*c + x1*c + x0;
	}
	}
	else
	{}
	}
	else
	printf("One or more of the coefficients are out of the given range of [-5,5]");		//print
	}
	else
	printf("The leading coefficient (coefficient of x^3) cannot be zero. Enter a different value");		//print
	}
	
	}
	else
	printf("The value of polynomial of a and b must be of opposite signs, please enter other values of a and b");
		else
	printf("The value of [a=%lf] must be less than [b=%lf]",a,b);

	printf("Root of the polynomial: %lf\n",pc);
}
