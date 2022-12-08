/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to find sum of n terms of series
*/

#include <stdio.h>

int main()
{
	int power(int x, int n)
	{
		int prod = 1;
		int i;
		for (i=1;i<=n;i++)
		{
			prod = prod*x;
		}
		return prod;
	}
	
	int fact(int n)
	{
		int prod = 1;
		int j;
		if (n==0)
			return 1;
		else
		{
			for (j=1;j<=n;j++)
			{
				prod = prod*j;
			}
			return prod;
		}
	}

	int x,n;

	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Enter value of n(<=10): ");
	scanf("%d",&n);

	float sum = 0;
	int i;
	
	for (i=0;i<=(n-1);i++)
	{
		sum = sum + (float)(power(x,i))/(float)(fact(i));
	}
	
	printf("Sum of series is: %f",sum);
	
	return 0;
}




	

