/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 5
Description :  finding Co primes
*/

#include <stdio.h>  //including the header file

int gcd(int a,int b)
{
	int r=a%b;
	while(r!=1 || r!=0)
	{
	r=a%b;
	a=b;
	b=r;
	}
	return r;
}

void CoPrime(int a, int b)
{
	int g;
	if(b>a) g=gcd(b,a);
	else g=gcd(a,b);
	if(g==1)
	{
	printf("%d and %d are Co-prime",a,b);
	}
	
}

int main(){

	int arr[5];
	for(int i=0;i<5;i++)
	{
		int temp;
		scanf("%d",&temp);
		arr[i]=temp;
	}

	for(int i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
		if(j!=i)
		{
			
			CoPrime(arr[i],arr[j]);
		}
		}
	}

return 0;
}
