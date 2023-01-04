/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 7-3
Description:To output all the numbers that repeat a certain number of times*/
#include <stdio.h>
void main()
{
	int n,m,i,j;
	int count=0,count1=0;
	int B[100];
	printf("Enter the number of elements n:");
	scanf("%d",&n);
	int A[n];
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("\n Enter the number of duplications to check:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i]==A[j])
			count++;
		}
	if(count==m)
	{
	B[count1]=A[i];
	count1++;
	}
	count=0;	
	}
	for(i=0;i<count1-1;i++)
	{
		for(j=i;j<count1-1;j++)
		{
	if(B[i]==B[j+1])
	{
	B[j+1]=0;
	}}}
	for(i=0;i<count1;i++)
	if(B[i]!=0)
	printf("%d ",B[i]);
	if(count1!=0)
	printf("appears %d times",m);
	else
	printf("No number appear %d times",m);
}
