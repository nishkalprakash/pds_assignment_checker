/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 6
 Description : Program that merges two sorted arrays in a sorted way 
*/

#include <stdio.h>						//including the standard input output library

int max,min;
int arr[1000];			        		//decalring an array of the size 1000

int *Merge(int size1,int size2,int *p,int *q)
{
	int i,c=0,x=0,y=0;
	for(i=min;i<=(max);i++)					//assigning the array a[] with the merged and sorted elements
	{
		if(*(p+x)==i)				
		{
			arr[c++]=i;
			x++;
		}
		if(*(q+y)==i)
		{
			arr[c++]=i;
			y++;
		}
	}
	return arr;
}

int main()
{
	int i,size1,size2,*m;
	printf("Enter size: ");								//prompting the user to give input
	scanf("%d",&size1);								//taking input from the user
	int a[size1];									//declaring the first array
	printf("Enter values: ");							//prompting the user to give input
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a[i]); 							//taking the input
	}
	printf("Enter size: ");								//prompting the user to give input
	scanf("%d",&size2);								//taking input from the user
	int b[size2];									//declaring the first array
	printf("Enter values: ");							//prompting the user to give input

	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]); 							//taking the input
	}

	max=(a[size1-1]>b[size2-1])?a[size1-1]:b[size2-1];				//assigning the maximum value entered so far to max
	min=(a[0]<b[0])?a[0]:b[0];							//assigning the minimum value entered so far to min

	m=Merge(size1,size2,a,b);							//calling the Merge function
	
	printf("A =");									//printing array A
	for(i=0;i<(size1);i++)
	{
		printf(" %d",a[i]);
	}

	printf("\nB =");									//printing array B
	for(i=0;i<(size2);i++)
	{
		printf(" %d",b[i]);
	}

	printf("\nC =");									//printing the merged array
	for(i=0;i<(size1+size2);i++)
	{
		printf(" %d",*(m+i));
	}
	printf("\n");
	return 0;
}
