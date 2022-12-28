/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 6
Description: Program to sort and print the mixture of two arrays
*/
#include<stdio.h>
#include<stdlib.h>
int merge(int size1,int size2,int *ptr1,int *ptr2)
{
	int array3[size1+size2];
	int i;
	int size;
	size= size1+size2;
	for(i=0;i< size1;i++)
	{
		array3[i]=*(ptr1+i);
	}
	int p=0;
	for(i=size1;i<size2;i++)
	{
		array3[i]=*(ptr2+p);
		p++;
	}

	int j;int temp;
	for(i=0;i<size;i++)
	{
		for(j=size -1;j>=i;j--)
		{
			if(array3[j]<=array3[j-1])
			{
				temp= array3[j];
				array3[j]= array3[j-1];
				array3[j-1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",array3[i]);
	}
	printf("\n");
	return NULL;
}// merge function that merges and sorts the two arrays


int main()
{
	int size1,size2;
	printf("Enter size");
	scanf("%d",&size1);
	int array1[size1];
	int i;
	printf("Please enter the elements");
	for(i=0;i<size1;i++)
	{
		scanf("%d", &array1[i]);
	}// elements of array1 taken as input
	printf("Enter size");
	scanf("%d",&size2);
	int array2[size2];
	printf("Please enter elements of the array");
	for(int j=0;j<size2;j++)
	{
		scanf("%d",&array2[i]);
	}// elements of array2 taken as input
	merge (size1,size2,&array1[0],&array2[0]);
	return 0;

}