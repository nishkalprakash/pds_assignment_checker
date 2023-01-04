#include<stdio.h>
int main()
{
	int n;
	printf("enter the no");
	scanf("%d",&n);
	int arr[n],temp;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>9&&arr[j+1]>9)
			{
				if(arr[j]/10<=arr[j+1]/10)
				{
					continue;
				}
				else
				{
					temp = arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
			else
			{
				if(arr[j]<=arr[j+1]/10)continue;
				else
				{
					temp = arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
			else
			{
				if(arr[j]<=arr[j+1])
				{
					continue
				}
				else
				{
					temp = arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;

				}
			}
		}
		
	}
	for(int i=n-1;i>-1;i--)
	{
		printf("%d",arr[i]);
	}
}