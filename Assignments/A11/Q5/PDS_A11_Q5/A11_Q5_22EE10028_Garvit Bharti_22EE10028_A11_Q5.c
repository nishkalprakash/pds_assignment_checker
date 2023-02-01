#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum=0;
	printf("Enter N: ");
	scanf("%d",&n);
	int *arr1=(int *)malloc(n*n*sizeof(int));
	int *arr2=(int *)malloc(n*n*sizeof(int));
	int *arr3=(int *)malloc(n*n*sizeof(int));
	int i,j;
	printf("Enter %d numbers for M1:",2*n);
	for(i=0;i<n;i++)
	{
		for(j-0;j<n;j++)
		{
			scanf("%d",&*(arr1+i+n+j));
		}
	}
	printf("Enter %d numbers for M2:",2*n);
	for(i=0;i<n;i++)
	{
		for(j-0;j<n;j++)
		{
			scanf("%d",&*(arr2+i+n+j));
		}
	}
	printf("the matrix M1*M2 is :")
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = sum + (*(arr1+i+n+j))*(*(arr2+i+n+j));
		}
		(*(arr3+i+n+j))=sum;
		sum=0;
	}
	for(i=0;i<n;i++)
	{
		for(j-0;j<n;j++)
		{
			printf("%d",*(arr3+i+n+j));
		}
	}
}
