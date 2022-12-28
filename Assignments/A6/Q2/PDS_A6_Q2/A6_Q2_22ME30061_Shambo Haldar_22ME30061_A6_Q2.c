/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 6
Description : Program to find the number of pairs of co-prime numbers
*/

#include<stdio.h>

int gcd(int n,int m)
{
	if(m % n == 1)
		return 1;
	else if(m % n == 0)
		return 0;
	else
		return gcd(m % n,n);
}

int main()
{
	int n,i,j,arr[100];
	char input = 'v';  // v means valid
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] < 0)
			input = 'n';  // n means negative
		//if(((int)arr[i])/2 != ((float)arr[i])/2)
		//	input = 'f';  // f means float
	}
	if(input == 'v')
	{
		printf("Co-Prime pairs:\n");
		for(i = 0;i < n-1;i++)
		{
			for(j = 1;j < n;j++)
			{
				if(gcd(arr[i],arr[j]) == 1)
					printf("(%d %d) ",arr[i],arr[j]);				
			}
		}
	}
	else if(input == 'n')
		printf("Invalid entries: All should be positive numbers");
	else if(input == 'f')
		printf("Invalid entries: All should be integer numbers");
	return 0;
}
