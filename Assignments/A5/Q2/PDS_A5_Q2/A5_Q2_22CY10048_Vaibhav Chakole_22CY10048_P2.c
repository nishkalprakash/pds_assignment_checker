/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 5
Description : check whether pair of numbers is co-prime
*/
#include<stdio.h>
const int array_size=5;
int l=0;
int gcd(int ,int );		//declaring functions
void CoPrime(int ,int );	//declaring functions
void pair(int a[]);		//declaring functions
int gcd(int a,int b)		//defining function
{
 int f;
	if(a>b)
	{
	f=a;
	a=b;	
	b=f;
	}
	while((b%a)!=0)
	{		
	f=b%a;
	b=a;
	a=f;
	}	
return a;
}
void CoPrime(int a, int b)		//defining function
{
if(gcd(a,b)==1)
{
printf("%d and %d are coprime\n",a,b);
l=1;
}
}

void pair(int a[])		//defining function
{
	for(int i=0;i<=4;i++)
	{
	for(int j=i+1;j<=4;j++)
	CoPrime(a[i],a[j]);
	}
}
int main()
{
	int nums[array_size];
	for(int i=0;i<=4;i++)
	{
	scanf("%d",&nums[i]);
	}
	pair(nums);
	if(l==0)
	printf("No coprime found");
	return 0;
}

