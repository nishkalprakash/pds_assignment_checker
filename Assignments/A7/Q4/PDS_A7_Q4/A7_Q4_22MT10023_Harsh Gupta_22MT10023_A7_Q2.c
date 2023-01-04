/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 7
 Description : Program that finds the largest number that can be made 
*/

#include <stdio.h>						//including the standard input output library
#include <math.h>
void sortArray(int arr[],int n,int d[])
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
}
int main()
{
	int i,j,x,n,num=0;						//declaring the required variables
	printf("Enter the number of elements: ");		//prompting the user for input
	scanf("%d",&n);						//taking the input
	if(n<2)
	{		
		printf("Invalid input\n");			//printing invalid input if n is out of the range (0,10]
		n=0;						//assigning n=0
	}
	else
	{
		printf("Enter the elements: ");			//prompting the user for input
	}
	int a[n],d[n];						//defining the array
	for(i=0;i<n;i++)					//taking input into the array
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		d[i]=0;
		x=a[i];
		while(x>0)
		{
			d[i]++;
			x=x/10;
		}
	}
	for(i=0;i<n;i++)
	{
		if(d[i]==1)
		{
			a[i]=a[i]*10+a[i];
		}
	}
	sortArray(a,n,d);
	
	for(i=0;i<n;i++)
	{
		x=a[i]%(int)(pow(10,d[i]));
		num = num*(int)(pow(10,d[i])) + x;
	}
	printf("%d\n",num);
	return 0;						//the int main() will return 0
}
