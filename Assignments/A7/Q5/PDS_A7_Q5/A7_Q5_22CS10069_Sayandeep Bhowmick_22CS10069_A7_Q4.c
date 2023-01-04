/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 7
	Description : CHecks the number of elements which are out of order
*/
#include <stdio.h>

int order(int A[],int i,int n)
{
	for (int j = 0; j < i; ++j)
		if (A[j]>A[i])
			return 0;
	for (int k = n-1; k>i ; --k)
		if (A[k]<A[i])
			return 0;
	return 1;
}

int main()
{
	int n,count=0;
	printf("Enter the number of elements(0<n<=10) : ");
	scanf("%d",&n);
	if (n<1 || n>10)
	{
		printf("Wrong Input!!!!\n");
		return 0;
	}
	int A[10];
	printf("Enter the %d elements of the array : ",n);
	for (int i = 0; i < n; ++i)
		scanf("%d",A+i);
	for (int i = 0; i < n; ++i)
		if (!(order(A,i,n)))
			count++;
	printf("Out of order : %d\n",count);
	return 0;
}