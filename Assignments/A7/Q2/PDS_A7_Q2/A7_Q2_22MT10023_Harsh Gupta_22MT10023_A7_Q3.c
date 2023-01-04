/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 7
 Description : Program that finds the m times repeated element in an array 
*/

#include <stdio.h>						//including the standard input output library
#include <math.h>
void sortArray(int arr[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int i,n,m;						//declaring the required variables
	printf("Enter the number of elements: ");		//prompting the user for input
	scanf("%d",&n);						//taking the input
	printf("Enter the elements: ");				//prompting the user for input
	int a[n];						//defining the array
	for(i=0;i<n;i++)					//taking input into the array
	{
		scanf("%d",&a[i]);
	}
	sortArray(a,n);
	printf("Enter the number of duplication: ");
	scanf("%d",&m);
	int c=1,count=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			c++;
			if(i==n-2)
			{
				if(c==m)
				{
					printf("%d ",a[i]);
					count++;
				}
				c=1;
			}
		}
		else if(a[i]!=a[i+1])
		{
			if(c==m)
			{
				printf("%d ",a[i]);
				count++;
			}
			c=1;
		}
	}
	if(m==1) printf("%d ",a[n-1]);
	if(count > 0)
	{
		printf("appears %d times\n",m);
	}
	else
	{
		printf("NO number appears %d times\n",m);
	}
	return 0;						//the int main() will return 0
}
