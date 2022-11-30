/*
Section 14
Name: Nived Shah
Roll No. : 22CS10049
Assignment No: 4
Description: Program to calculate root of a cubic polynomial.
*/

#include <stdio.h>
#include <math.h> 	//included for use of power function.

int main(){
	double a, b;		
	int ce1, ce2, ce3, ce4;	//integer coefficients.
	
	printf("Enter coefficient of x^0:");
	scanf("%d", &ce1);
	printf("Enter coefficient of x^1:");
	scanf("%d", &ce2);
	printf("Enter coefficient of x^2:");
	scanf("%d", &ce3);
	printf("Enter coefficient of x^3:");
	scanf("%d", &ce4);	
	
	int n;
	n=1;
	//this loops ensures that we get 2 points between which a root definitely lies.
	while(n!=0){	
		printf("Enter 2 input values for polynomial, a and b, so that signs of polynomial value are opposite: ");
		scanf("%lf %lf", &a, &b);
		if( (ce1+(ce2*a)+(ce3*pow(a,2))+(ce4*pow(a,3)))*(ce1+(ce2*b)+(ce3*pow(b,2))+(ce4*b*b*b))<0)
			n=0;	
	}
	double temp;
	//this is to make 'a' always less than 'b'.
	if(a>b){
		temp=b;
		b=a;
		a=temp;
	}
	

	double v1, v2, v3, slope, c;
	int count;
	count=1;
	while(count!=0){
		//subsequent declarations are done within loop because a and b can have variable values so as to converge near a root.
	
		v1=ce1+(ce2*a)+(ce3*pow(a,2))+(ce4*pow(a,3)); 
		v2=ce1+(ce2*b)+(ce3*pow(b,2))+(ce4*pow(b,3));

		slope=(v2-v1)/(b-a);

		c= b-(v2/slope);

		v3=ce1+(ce2*c)+(ce3*pow(c,2))+(ce4*pow(c,3));
	
		if((v3>=-0.001)&&(v3<=0.001)){
			printf("Root of the polynomial: %0.4lf", c);
			count=0;
		}
		else if((v1*v3)>0)
			a=c;
		else if((v1*v3)<0)
			b=c;
	}
	return 0;
}
	
	
		

