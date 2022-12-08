/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 5
Description : Sum of first n terms of the given series
*/
#include<stdio.h>
int fact(int n)		//declaring function
{
int i,fac=1;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;

}
int power(int x, int n)		//declaring function
{
	int p=1;
	for(int i=1;i<=n;i++)
	{
	  p=p*x;
	}
	return p;

}
int main()
{
int x,n;

printf("Enter x and n\n");
scanf("%d %d",&x,&n);
float sum=0;


	for(int i=0;i<n;i++)
	{
	 sum=sum+(float)(power(x,i))/(fact(i)); 	//calling of function

	}
	printf("%f",sum);
	return 0;
}
