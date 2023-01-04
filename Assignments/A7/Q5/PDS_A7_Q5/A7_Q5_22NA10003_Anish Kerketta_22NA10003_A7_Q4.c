/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 7-4
Description:The check how many elements are out of order*/
#include <stdio.h>
void main()
{
	int i,n,count=0,end=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int A[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=1;i<n;i++)
		{
		if(A[i]<=A[i+1] && A[i]>=A[i-1])
		{
		
		}
		else
		{count++;
		if(end==0)
		end=i;
		}
		}
	if(end==0)
	printf("Out of order=%d\n",count);
	else
	printf("Out of order=%d\n",n-end);
}

