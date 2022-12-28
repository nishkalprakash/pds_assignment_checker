/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 6
	Description : Program to find co prime pairs
*/

#include <stdio.h>

int n  ;
 
int gcd (int m , int n )
{
	if (m%n==0)
		return n;
	else
		return (gcd(n,m%n));
}

void CoPrime (int a , int b)
{
	if (gcd(a,b)==1)
		printf(" (%d , %d) ", a , b);
}

void pair(float a[])
	{
		int i,j,hold,pair;
		for (j = 0; j < n ; j++)
		{
			hold = (int)a[j];
			for (i=(j+1);i<n;i++)
			{
				pair = (int)a[i];
				CoPrime(hold,pair);	
			}
		}
	}



int main()
{
	int flag = 0 , i ; 
	
	printf("Enter number of numbers:");
	scanf("%d",&n);
	
	float arr[n];

	printf("Enter %d numbers: ",n);
	
	for (i = 0 ; i < n ; i++)
	{
		scanf("%f",&arr[i]);
	}

	for ( i = 0 ; i < n ; i++ )
	{
		if ((int)(arr[i])!=arr[i])
			flag++;	
	}
	
	if (flag!=0)
	{
		printf("Invalid entries: All should be integers");
		return 0;
	}

	for ( i = 0 ; i < n ; i++)
	{
		if (arr[i]<0)
		{
			printf("Invalid entries: All should be positive numbers");
			return 0;
		}
	}

	printf("Co-prime pairs:\n");
	
	pair(arr);
	
	return 0;	

}

