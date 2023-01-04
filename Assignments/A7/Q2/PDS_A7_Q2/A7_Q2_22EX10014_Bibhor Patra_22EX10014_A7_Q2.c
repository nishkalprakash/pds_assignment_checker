/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 7
Description: Program to print the numbers that appear a particular number of times
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;// Declaration of variables
	printf("Enter value of n");
	scanf("%d",&n);// value of n is scanned
	int ar[n];// array is defined
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}// elements of the array are scanned
	printf("enter value of m");
	scanf("%d",&m);// value of m is scanned
	for(int j=0;j<n;j++)
	{
		int x=0;
		for(int i=0;i<n;i++)
		{
			if(ar[j]=ar[i])
			{
				x++;
			}
		}
			if (x==m)
			{
				printf("%d appears %d times",ar[j],m);
			}
		} // loop to print the output
		return 0;
	}
	
