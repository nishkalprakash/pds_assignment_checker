/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to find all co-primes
*/

#include <stdio.h>

int flag = 0;

int gcd(int a,int b)

	{
		int k,min,gcd;
		gcd = 1;
		if (a>b)
			min = b;
		else
			min = a;
		for (k=2;k<=a;k++)
		{
			if ( (a%k==0)&&(b%k==0))
			{
				if (k>gcd)
					gcd = k;
			}
		}
		return gcd;
	}
	
void CoPrime(int a,int b)

	{
		if (gcd(a,b) == 1)
		{	
			printf("%d and %d are Co-Prime\n",a,b);
			flag++;
		}	
	}
	
const int ASIZE = 5;	

void pair(int a[])
	{
		int i,j,hold,pair;
		for (j = 0; j < ASIZE ; j++)
		{
			hold = a[j];
			for (i=(j+1);i<ASIZE;i++)
			{
				pair = a[i];
				CoPrime(hold,pair);	
			}
		}
	}


int main()
{	
	int arr[5];
	int i;
	for (i=0;i<5;i++)
	{	
		printf("Enter integer: ");
		scanf("%d",&arr[i]);
	}
	
	pair(arr);
	if (flag==0)
		printf("No Co-Prime found");
	return 0;
}




