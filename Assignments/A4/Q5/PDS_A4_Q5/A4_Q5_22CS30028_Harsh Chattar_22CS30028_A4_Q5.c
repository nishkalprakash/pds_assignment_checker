/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 4
Description :  finding and printing a root of a cubic polynomial
*/




#include <stdio.h>  //including the header file

int main(){
	double a,b,c,pa,pb,pc;
	int x1,x0,x2,x3;      //declaring variables
	printf("Enter coefficient of x^0 : ");      //taking coefficients as inputs
	scanf("%d",&x0); 
	printf("Enter coefficient of x^1 : ");
	scanf("%d",&x1);
	printf("Enter coefficient of x^2 : ");
	scanf("%d",&x2);
	printf("Enter coefficient of x^3 : ");
	scanf("%d",&x3);
	

	printf("Enter value of a : ");    //taking input of a and b
	scanf("%lf",&a); 			//root will be checked in the range [a,b]
	printf("Enter value of b : ");
	scanf("%lf",&b);
	while(1)   //using an infinite loop
	{	
	pa = x0 + a*(x1) + a*a*(x2) + a*a*a*(x3);    //calculating p(a)
	pb = x0 + b*(x1) + b*b*(x2) + b*b*b*(x3);	//calculating p(b)
	c = (pb*(a-b))/(pb - pa) + b;    		//calculating c
	pc = x0 + c*(x1) + c*c*(x2) + c*c*c*(x3); 	//calculating p(c)
	if(pc < 0.001 && pc > -0.001) 		//checking if p(c) is within error limit
	{
		printf("Root of the polynomial : %lf ",c);   //printing root 
		break;  //terminating loop
	}
	if ( (pa > 0 && pc > 0) || (pa < 0 && pc < 0) ) 
	{
		a = c ;  //changing values of a
	}
	else b = c;    //otherwise changing value of b
		
	}
	
	return 0;
}
