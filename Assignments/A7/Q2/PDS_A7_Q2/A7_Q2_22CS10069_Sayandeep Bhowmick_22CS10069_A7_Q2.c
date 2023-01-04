/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 7
	Description : Prints the numbers which occurs m times in a given array
*/
#include <stdio.h>


int main()
{
	int n, m;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int A[n];
	printf("Enter the %d elements of the array : ",n);
	for (int i = 0; i < n; ++i)
		scanf("%d",A+i);
	for (int i = 0; i < n; ++i)					//Bubble sort. Equal elements come side by side
	{
		for (int j = 0; j < n-1-i; ++j)
		{
			if(A[j]<A[j+1])
			{
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("Enter the value of m : ");
	scanf("%d",&m);
	int k=A[0];
	int count=1,flag=0;								//flag keeps track whether atleast one number appears m times
	for (int i = 1; i < n; ++i)
	{
		if(k==A[i])
			count++;
		if(i==n-1)
			if(m==count)
			{
				printf("%d ",A[i]);
				flag=1;
			}
		else
		{
			if(m==count)
			{
				printf("%d ",A[i-1]);				//count stores the number of times A[i-1] appears in this part
				flag=1;
			}
			count=1;								//We initialize count as 1 as the first time a new number appears count++ is not evaluated
			k=A[i];
		}
	}
	if(flag)										//Different outputs as per the case
		printf("appears %d times\n", m);
	else
		printf("No number appears %d times \n",m );
	return 0;
}