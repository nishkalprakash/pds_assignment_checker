// Program to calculate sum of first n terms of a series
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
int gcd(int a,int b) // defining gcd function
{
	if(a==b)
	return a; //if they are equal, they are not co prime
	int gcd=1;
	for(int i=2;i<=((a<=b)?a:b);i++)
	{
		if((a%i==0)&&(b%i==0)) // by definition of gcd
		{
			gcd=i;
			break;
		}
	}
	return gcd;
}
void CoPrime(int a,int b)
{
	if(gcd(a,b)==1)
	printf("%d and %d are Co-Prime\n",a,b);
}

void pair(int a[])
{
	int count=0;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			CoPrime(a[i],a[j]);
			if(gcd(a[i],a[j])==1)
			count++; //to display msg incase none of them are coprime
		}
	}
	if(count==0)
	printf("No Co-Prime found\n");
}
int main()
{
	int num[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	pair(num);
	return 0;
}

