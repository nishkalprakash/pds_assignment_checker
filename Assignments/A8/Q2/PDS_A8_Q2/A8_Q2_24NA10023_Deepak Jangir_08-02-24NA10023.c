#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	int m;
	printf("m is : ");
	scanf("%d", &m);
	
	int A[101], temp;
	
	for(int i=0; i<n; i++)
	{
		printf("Enter number : ");
		scanf("%d", &A[i]);	
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(A[i]>A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
		printf("%d ", A[i]);
	}
	
	return 0;
}
