//C Program to sort out all unique numbers
#include<stdio.h>

int main()
{
	int arr[100],arr2[100];
	int n,j=0;
	//take input
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
	printf("duplicates:");
	int count=0;
	while(j<n)
	{	
		int a=arr[j];
		count=0;
		for(int i=0;i<n;i++)
		{
		 if(arr[i]==a)
		 {
		 	count++;
		 }
		 if(arr[i]!=a)
		{
		arr2[i]=arr[i];
		}
		}
		
		printf("\n%d(%d)",arr2[j],count);
		j=j+1;
		
		
	}

	return 0;
}
