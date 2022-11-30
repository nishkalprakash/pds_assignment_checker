//displays an approximate root of  cubic polynomial
#include <stdio.h>
int main()
{
	int c0,c1,c2,c3;
	double a=0.0,b=0.0,c,pa,pb,pc;
	do
	{
		printf("enter coefficient of x^0: ");
		scanf("%d",&c0);
		printf("enter coefficient of x^1: ");
		scanf("%d",&c1);
		printf("enter coefficient of x^2: ");
		scanf("%d",&c2);
		printf("enter coefficient of x^3: ");
		scanf("%d",&c3);
	}while(c0>5||c0<-5||c1>5||c1<-5||c2>5||c2<-5||c3>5||c3<-5||c3==0);
	do
	{
		a--;
		b++;
		pa=c3*a*a*a+c2*a*a+c1*a+c0;
		pb=c3*b*b*b+c2*b*b+c1*b+c0;
	}while(pa*pb>=0.0);
	c=a;
	do
	{
		c=(-pa)*(b-a)/(pb-pa)+a;
		pc=c3*c*c*c+c2*c*c+c1*c+c0;
		if(pc*pa>=0.0)
			a=c;
		if(pc*pb>=0.0)
			b=c;
		pa=c3*a*a*a+c2*a*a+c1*a+c0;
		pb=c3*b*b*b+c2*b*b+c1*b+c0;
	}while(pc>=0.001||pc<=-0.001);
	printf("Root of the polynomial: %lf",c);
} 	
		
