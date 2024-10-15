#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	int A[99], temp;
	
	for(int i=0; i<n; i++)
	{
		printf("Enter number : ");
		scanf("%d", &A[i]);	
	}
	
	return 0;
}
