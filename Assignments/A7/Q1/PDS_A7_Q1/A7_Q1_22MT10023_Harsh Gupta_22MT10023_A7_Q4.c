/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 7
 Description : Program that inserts a value in the array in the right order 
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
	int i,x,n,temp;						//declaring the required variables
	printf("Enter the number of elements: ");		//prompting the user for input
	scanf("%d",&n);						//taking the input
	printf("Enter the elements: ");				//prompting the user for input
	int a[n+1];						//defining the array
	a[n]=0;
	for(i=0;i<n;i++)					//taking input into the array
	{
		scanf("%d",&a[i]);
	}
	sortArray(a,n);
	printf("Enter value to be inserted: ");
	scanf("%d",&x);
	for(i=n;i>0;i--)
	{
		
		temp = a[i];
		a[i]=a[i-1];
		a[i-1]=temp;
		if(a[i]==x)
		{
			a[i-1]=x;
			break;
		}
		if(a[i]<x)
		{
			a[i-1]=a[i];
			a[i]=x;
			break;
		}
	}
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
