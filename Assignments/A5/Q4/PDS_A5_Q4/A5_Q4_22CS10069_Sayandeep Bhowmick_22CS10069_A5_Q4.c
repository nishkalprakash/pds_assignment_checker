/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Divides the array elements as per their intervals
*/
#include <stdio.h>

int top(double d)
{
	if(d==(double)((int)d))
		return d;
	else
		return ((int)d+1);
}

int main()
{
	int n, b;
	printf("Enter the number of elements in the array and the number of bins to be created respectively : ");
	scanf("%d%d",&n,&b);
	int A[n];
	printf("Enter %d elements of the array : ",n);
	for(int i=0; i<n; i++)
		scanf("%d",&A[i]);
	int max=A[0],min=A[0];
	for(int i=0; i<n; i++)
	{
		max=(max>A[i])?max:A[i];
		min=(min<A[i])?min:A[i];
	}
	for(int i=0; i<b; i++)
	{
		int count=0;
		printf("bin%d-> ",i+1);
		for(int k=0; k<n; k++)
		{
			for(int j=(min+top(((double)((i)*(max-min))/b))); j<(min+top(((double)((i+1)*(max-min))/b))); j++)
			{
					if(A[k]==j)
					{
						count++;
						printf("%d,",j);
				}
			}
		}
		if(i==(b-1))
		{
			printf("%d,\tNumber of elements is %d\n", max, count+1);
			return 0;
		}
		printf("\tNumber of elements is %d\n", count);
	}
	return 0;
}
