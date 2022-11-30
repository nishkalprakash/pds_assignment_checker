/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 4
 Description : Program that finds an approximate root of a cubic polynomial.
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	int f=0;							//declaring a flag variable
	double x0,x1,x2,x3;						//declaring variables to store the coefficients of the cubic polynomial entered by the user      
	double a,b,c,pa,pb,pc;						//declaring variables to store limit values' abcissa and their f(abcissa) values
	printf("Enter coefficient of x^0: ");					//prompting the user to enter the coefficient of x^0
	scanf("%lf",&x0);							//taking input from the user
	printf("Enter coefficient of x^1: ");					//prompting the user to enter the coefficient of x^1
	scanf("%lf",&x1);							//taking input from the user
	printf("Enter coefficient of x^2: ");					//prompting the user to enter the coefficient of x^2
	scanf("%lf",&x2);							//taking input from the user
	printf("Enter coefficient of x^3: ");					//prompting the user to enter the coefficient of x^3
	scanf("%lf",&x3);							//taking input from the user
 	if(x0<-5||x0>5||x1<-5||x1>5||x2<-5||x2>5||x3<-5||x3>5){f=1;}		//assigning c=1 if user enters a number beyond the bounds [-5,5]
	a=-200;
	b=-199;
	pa=x3*(a)*(a)*(a)+x2*(a)*(a)+x1*(a)+x0;					//assigning pa with p(a)
	pb=x3*(b)*(b)*(b)+x2*(b)*(b)+x1*(b)+x0;					//assigning pb with p(b)
	if(f==0)
	{
		while(pa*pb>0)							//searching the value of b when p(a)*p(b)<0
		{
			b++;
			pb=x3*(b)*(b)*(b)+x2*(b)*(b)+x1*(b)+x0;
		}
		c=((double)(a*pb-b*pa))/((double)(pb-pa));			//computing c based on (a,p(a)) and (b,p(b))
		pc=x3*(c)*(c)*(c)+x2*(c)*(c)+x1*(c)+x0;				//assigning pc with p(c)
		while(pc>=0.001||pc<=-0.001)					//searching for the root untill absolute value of p(root) is less than 0.001 where root=c
		{
			if(pa*pc>0)
			{
				a=c;
				pa=x3*(a)*(a)*(a)+x2*(a)*(a)+x1*(a)+x0;
			}
			else if(pb*pc>0)
			{
				b=c;
				pb=x3*(b)*(b)*(b)+x2*(b)*(b)+x1*(b)+x0;
			}
			c=((double)(a*pb-b*pa))/((double)(pb-pa));
			pc=x3*(c)*(c)*(c)+x2*(c)*(c)+x1*(c)+x0;
		}
		printf("Root of the polynomial: %0.4lf\n",c);
	}
	if(f==1){printf("Invalid input\n");}					//printing Invalid input if user enters a number beyond the bounds [2,10]
	return 0;								//the int main() will return 0
}
