//C Program to sort out all negative number to left
#include<stdio.h>

int main()
{
	int arr[100];
	int n,j=0;
	//take input
	printf("Enter no of input");
	scanf("%d",&n);
	
	if(n>100)
		printf("Error:n>100");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Original Array:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	//sort out
	while(j<n)
	{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0&&arr[i+1]<0)
		{
			int temp;
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;		
		}
		else
			j=j+1;
	}
	}
	//print output
	printf("\nRearranged Array:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
