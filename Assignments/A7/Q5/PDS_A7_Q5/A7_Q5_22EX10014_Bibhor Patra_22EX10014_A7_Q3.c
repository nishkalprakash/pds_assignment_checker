/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 7
Description: Program to print the number of elements that are out of order
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,cnt=0,ar[n];// Declaration of variables and array
	printf("Enter value of n");
	scanf("%d",&n);//Number of elements is scanned
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}//loop to scan the elements of the first loop
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
         if(ar[i]>ar[j])
		{
			cnt++;
			break;
		}
	    }
	
	for(int a=0;a<i;a++)
	{
		if(ar[i]<ar[a])
		{
			cnt++;
			break;
		}
	}
}// Loops to find the number of elements that are out of order
	printf("out of order: %d",cnt);//Output is printed
	return 0;
}