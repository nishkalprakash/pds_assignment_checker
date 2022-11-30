/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no 4
Description : Program to find the approximate root of a given cubic polynomial
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int p,q,r,s,x,p(x);
	double a,b;    //Please enter coefficients in the range [-5,5]
	printf("Enter coefficient of x^0 :");    
	printf("Enter coefficient of x^1 :");
	printf("Enter coefficient of x^2 :");
	printf("Enter coefficient of x^3(not equal to zero) :");
	scanf("%d%d%d%d",&s,&r,&q,&p);
	p(x) = p*(x^3) + q*(x^2) + r*(x^1) + s*(x^0);
	printf("Enter values of a and b :");   //Please enter values such that a<b
	scanf("%lf%lf",&a,&b);
	
	
