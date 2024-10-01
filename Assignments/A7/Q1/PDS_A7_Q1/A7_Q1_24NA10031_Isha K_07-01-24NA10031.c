#include<stdio.h>
//Creating function power
int power(int x,int n)
{
	int term = 1;
	for(int i=1;i<n;i++){
	int sum= sum+term;
	term= term*x/i;}
	return term;
	}
//Creating function factorial	
int fact(int n)
{
	int product=1;
	for(int p=1;p<=n;p++){
	product=product*p;}
	return product;
	}
int main()
{
	int n,x;
	double s=0;
	printf("Enter x,n= ");
	scanf("%d%d",&n,&x);
	for(int r=0;r<n;r++){
	s+=power(x,n)/fact(n);
	}
	printf("%lf",s);
	return 0;
	}
	
