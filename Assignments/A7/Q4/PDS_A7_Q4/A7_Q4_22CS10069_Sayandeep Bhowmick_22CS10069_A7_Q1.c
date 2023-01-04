/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 7
	Description : Creates the largest number formed by appending the input numbers
*/
#include <stdio.h>

int order(int a,int b)				//Takes care that the elements get properly arranged
{
									/*if only one of the numbers is two digit , ex:-2,44 , 44 should be placed
									  before 2 in the array. Again  for 2 and 23, 23 should come first. For 2
									  and 21, 2 should come first. Again if both the numbers are either one
									  digit or two digit numbers, the greater number should simply come first.
									  All these cases are checked respectively in this function*/
			

	if(a/10!=0 && b/10==0)							
		if(a/10<b)
			return 1;
		else if(a/10==b && (a%10)<b)
			return 1;
		else
			return 0;

	if(b/10!=0 && a/10==0)
		if(b/10<a)
			return 0;
		else if(b/10==a && (b%10)<a)
			return 0;
		else
			return 1;

	if(a/10==0 && b/10==0)
		if(a<=b)
			return 1;
		else
			return 0;

	if(a/10!=0 && b/10!=0)
		if(a<=b)
			return 1;
		else
			return 0;
}

int main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int A[n];
	printf("Enter the %d elements of the array(Each element should be between 0 and 99) : ",n);			//As per given assumptions
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",A+i);
		if(A[i]<0 || A[i]>99)
		{
			printf("Wrong Input!!!!\n");
			return 0;
		}
	}
	for (int i = 0; i < n; ++i)									//Bubble sort
	{
		for (int j = 0; j < n-1-i; ++j)
		{
			if(order(A[j],A[j+1]))								//Array sorted as explained above
			{
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("The largest number formed is : " );
	for (int i = 0; i < n; ++i)						//The elements are directly printed. This saves time and space.
		printf("%d",*(A+i));
	printf("\n");
	return 0;
}