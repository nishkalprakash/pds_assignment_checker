/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 7
 Description : Program that finds the number of elements in an array which are out of order 
*/

#include <stdio.h>						//including the standard input output library
int main()
{
	int i,j,k,f,n,c=0;					//declaring the required variables
	printf("Enter the number of elements: ");		//prompting the user for input
	scanf("%d",&n);						//taking the input
	if(n<=0 || n>10)
	{		
		printf("Invalid input\n");			//printing invalid input if n is out of the range (0,10]
		n=0;						//assigning n=0
	}
	else
	{
		printf("Enter the elements: ");			//prompting the user for input
	}
	int a[n];						//defining the array
	for(i=0;i<n;i++)					//taking input into the array
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)					//checking if any element is out of order or not and if yes then assigning f=1
	{
		f=0;
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			f=1;
		}
		for(k=0;k<i;k++)
		{
			if(a[i]<a[k])
			f=1;
		}
		if(f==1)					//if f==1 then incrementing the counter c
		{
			c++;
		}
	}
	if(n!=0)
	{
		printf("Out of order: %d\n",c);			//printing the number of out of order elements if n is not equal to 0
	}
	return 0;						//the int main() will return 0
}
