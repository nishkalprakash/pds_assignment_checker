/*
Name : Govind Jiaswal
Roll no : 22CH10024
Section : 14
Assignment no : 6
Description : Program to sort and merge two arrays
*/

#include <stdio.h>

int *Merge(int size1,int size2,int *ptr1,int *ptr2)
{
}

int main()
{
	int i,j,k,x,y,z;
	z = x+y;
	printf("Enter size of 1st array :\n");    //asking for user input
	scanf("%d",&x);
	printf("Enter values :");
	for(i=0;i<x;i++)
	{
		int a[x];
		scanf("%d",&a[i]);
	}
	printf("\nEnter size of 2nd array :\n");
	scanf("%d",&y);
	printf("Enter values :");
	for(j=0;j<y;j++)
	{
		int b[y];
		scanf("%d",&b[j]);
	}
	printf("The final merged array :-\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for( k=0;k<z;k++)
			{
				int c[z],a[x],b[y] ;
				c[k] = a[i] + b[j];    //merging the two arrays
				printf("\n%d ",c[k]);    //printing the final array
			}
		}
	}
}
