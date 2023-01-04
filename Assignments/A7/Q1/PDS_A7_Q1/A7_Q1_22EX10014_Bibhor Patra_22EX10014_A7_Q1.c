/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 7
Description: Program to take a number and place it in an appropriate position in a sorted array
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,ar[n],ar2[n+1],m;
	printf("Enter value of n\n");
	scanf("%d",&n);//Number of elements is scanned
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}// loop to scan the elements
printf("Enter the value of m\n");
scanf("%d",&m);//Input is taken for the value of m
if(m<ar[n-1])
{
for(int i=0;i<n;i++)
{
	if(ar[i]<m){ar2[i]=ar[i];}
	else {
		ar2[i]=m;
		for(int j=i;j<n;j++)
		{
			ar2[j+1]=ar[j];
		}
		break;
	}
	
	
}
}
else{
	for(int i=0;i<n;i++)
	{
		ar2[i]=ar[i];
	}
	ar2[n]=m;
    }
for(int i=0;i<n+1;i++)
	{
		printf("%d\t",ar2[i]);
	}// Loop to print the output array i.e ar2
return 0;
}
