/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 11
 Description : write a print the sum of harmonic series

 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long
float sum=0;int i=0,n;
void func(int i,int n)
{
	if(i==n)
	{
		sum=sum+1/(float)(n);
	}
	else
	{
		sum=sum+1/(float)(i);
		func(i+1,n);
	}

}
int main()
{
	scanf("%d",&n);
	func(1,n);
	printf("%f",sum);
	return 0;
}
