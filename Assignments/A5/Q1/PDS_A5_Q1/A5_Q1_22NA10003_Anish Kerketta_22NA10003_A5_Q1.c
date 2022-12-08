/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 5-1
Description : Find the sum of first n terms with int power(int x,int n) and int fact(n).
*/
#include<stdio.h>
int power(int x, int n)								//funtion to calculate the power
{
	int a=1;
	while(a<n)
	{
		x=x+x;
		a++;		
	}
	if(n==1)
	x=0;
	return x;
}
int fact(int n)									//Function to calculate factorial
{
	int a=n-1;
	while(a>0)
	{
		n=n*a;
		a--;
	}
	return n;
}
int main()
{
	int x,n;							
	float p,f,s=0;								//Write
	printf("Enter the value of x and n");
	scanf("%d %d",&x ,&n);							//Read
	float add=0,sum=1;
	if(n>1)	
	sum=sum+x;
	for(int i=1;i<n;i++)							//Calculating sum
	{
		p=power(x,i);
		f=fact(i);
		s=(p/f);
		sum=sum + (p/f);
	}
	printf("The sum is %f\n",sum);						//Write
}
