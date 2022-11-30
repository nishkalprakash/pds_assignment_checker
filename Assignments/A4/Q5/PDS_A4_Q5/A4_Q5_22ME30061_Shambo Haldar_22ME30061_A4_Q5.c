/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 4
Description : Program to find out the approximate root of a cubic polynomial
*/

#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,root;
	int p,q,r,s;
	printf("Enter the interval in which the root exists: ");
	scanf("%lf %lf",&a,&b);
	printf("Enter coefficient of x^0: ");
	scanf("%d",&p);
	printf("Enter coefficient of x^1: ");
	scanf("%d",&q);
	printf("Enter coefficient of x^2: ");
	scanf("%d",&r);
	printf("Enter coefficient of x^3: ");
	scanf("%d",&s);

	printf("Root of the polynomial: %lf",root);
	return 0;
}

