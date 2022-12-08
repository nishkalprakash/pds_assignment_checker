#include <stdio.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 5
Description : 
*/

const int A_size=5;

int gcd(int a, int b)
{
	int d,ds,temp;
	if (a!=0 && b!=0)
	{
		(a>b)? (d=a,ds=b):(d=b,ds=a);
		while(1) 
		{
			if (d%ds==0) temp=(d/ds);
			else d=ds,ds=(d%ds);
		}
		return temp;
	}
	
}

void CoPrime(int a, int b)
{
	if (gcd(a,b)==1) printf("%d and %d are CoPrime",a,b);

}

int main()

{
	
	int A[A_size],i=0;

	while (i<A_size)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&A[i]); 
		i++;
	}

	for (int k=0;k<A_size;k++)
	{
		for (int j=0;j<A_size;j++)
		{	
			if (k!=j) 
			{
				CoPrime(A[k],A[j]);
			}
		}
	}




return 0;

}