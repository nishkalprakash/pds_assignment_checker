/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 6-2
Description : To test a pair of number if they are coprime or not.
*/
#include<stdio.h>
void coprime(int a,int b,int gcd)					//checking coprime
{
	if(gcd==1)
	printf("(%d %d)\n",a,b);
	
}
int gcd(int m,int n)							//checking gcd
{
	int min=0,i,j,gcd;
	if(m>n)
	min=n;
	else
	min=m;
	for(i=1;i<=min;i++)						//storing gcd
	{	
		if(m%i==0 && n%i==0)
		gcd=i;
	}
	
	coprime(m,n,gcd);
}
int main()
{
	int n,i,j;
	printf("Enter the number of elements:\n");			//write
	scanf("%d",&n);							//read
	int Arr[n];
	printf("Enter the elements\n");					//write
	for(i=0;i<n;i++)
	{
		scanf("%d",&Arr[i]);
	}
	printf("Co prime pairs:\n");					//write
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		gcd(Arr[i],Arr[j]);
	}
}

