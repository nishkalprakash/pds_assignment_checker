// Program to calculate sum of first n terms of a series
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
int fact(int n) // defining factorial function
{
	int product=1;
	for(int i=1;i<=n;i++)
	{
		product=product*i;
	}
	return product;
}
double power(int x,int n)
{
	double sum=0,term=1;
	for(int i=1;i<=n;i++)
	{
		if(i!=1)
		term=(term*x); // calculating power of x
		sum=sum+term/fact(i-1); // calculating sum after each iteration
	}
	return sum;
}
void main()
{
	int n,x;
	scanf("%d %d",&x,&n);
	printf("%lf",power(x,n));
}

