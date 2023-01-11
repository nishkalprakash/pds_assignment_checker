/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 8-1
Description:Checking saddle point of the given matrix*/
#include <stdio.h>
void main()
{
	int a,b,i,j,k=0;
	int max=0,min=1000;
	int saddle,check;
	printf("Enter the dimensions of the matrix:");
	scanf("%d %d",&a,&b);
	int A[a][b];
	int maxarr[a],minarr[b];
	printf("Enter the elements of the matrix\n");
	for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	scanf("%d",&A[i][j]);
	printf("The matrix is :\n");
	for(i=0;i<a;i++)
	{for(j=0;j<b;j++)
	{printf("%d\t",A[i][j]);}
	printf("\n");}
	for(i=0;i<a;i++)
	{
	for(j=0;j<b;j++)
	{
	if(A[i][j]<min)
	{min=A[i][j];}
	}
	minarr[k]=min;
	k++;
	min=1000;
	}
	k=0;
	for(i=0;i<a;i++)
	{
	for(j=0;j<b;j++)
	{
	if(A[j][i]>max)
	{max=A[j][i];}
	}
	maxarr[k]=max;
	k++;
	max=0;
	}
	for(i=0;i<k;i++)
	{
	for(j=0;j<k;j++)
	{
	if(maxarr[i]==minarr[j])
	{
	check=1;
	saddle=maxarr[i];
	}
	}
	}
	if(check==1)
	printf("The saddle point of the given matrix is %d\n",saddle);
	else
	printf("There is no saddle point in the given matrix\n");

}
