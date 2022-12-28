/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:6
Question no:2
description:coprime*/


#include <stdio.h>
int gcd(int m,int n)//calculate gcd
{
	if(m==n)//base case
	return m;
	else if(m>n)
	{
	    return gcd((m-n),n);//recursive call
	}
	else
	return gcd(m,(n-m));//recursive call
}
void coprime(int a,int b)
{
	int flag;flag=gcd(a,b);
	if(flag==1)
	printf("(%d %d)",a,b);
}
void pair(double a[],int size)
{
	int i;int x;int y;int value;//value stores gcd
	int flag=0;int j;
	for(i=0;i<size;i++)
	{
	    if(a[i]<=0)
	    {printf("Invlaid Input:negative Integer\n");flag=1;break;}//condition for invlaid input
	}
	if(flag==0)
	for(i=0;i<size;i++)//check for prime
	{
	    for (j=i;j<size;j++)
	    {
	       y=(int)a[i];x=(int)a[j];
	       coprime(x,y);//call coprime
	    }
	}
}
int main()
{
	int n;int i;
        printf("Enter n:");
	scanf("%d",&n);//Enter no of elements
	double arr[n];//decalration of array
        printf("Enter elements:");
	for(i=0;i<n;i++)
	{
	     scanf("%lf",&arr[i]);//Input elements
	}
	pair(arr,n);//call pair
	return 0;
}
