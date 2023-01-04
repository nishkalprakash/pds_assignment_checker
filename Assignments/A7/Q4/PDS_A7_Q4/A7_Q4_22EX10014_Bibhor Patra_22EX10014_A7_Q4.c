/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 7
Description: Program to ceate the largest number from given numbers
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;// Declaration of variable
	printf("Please enter the vnumber of elements to be input")
	scanf("%d",&n);// scanning of value of n
	int ar[n];// Declaratiom of array
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}// loop to input the elements of the array
	int cnt=0;
	while(cnt< (n-1))
	{
		for(int i=0;i<(n- cnt);i++)
		{
			if(ar[i-1]<ar[i])
			{
				int temp;
				temp = ar[i];
				ar[i]=ar[i+1];
				ar[i+1]= temp;
			}
		}
		cnt++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}// loop to print the output
	return 0;
}