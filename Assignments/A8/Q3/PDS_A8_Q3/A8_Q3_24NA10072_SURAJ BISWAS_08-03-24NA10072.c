#include<stdio.h>

int main()
{	
	//take the size of input
	int n;
	scanf("%d",&n);
	
	// taking input in array
	int A[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	//modifying the array
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[j]>A[i])
			{
				int temp=A[j];
				A[j]=A[i];
				A[i]=temp;
			}
			
		}
	}
 //printing sorted array
	 for(int i=0;i<n;i++)
	{
		printf(" %d",A[i]);
	}
	
	return 0;
	return 0;
}
