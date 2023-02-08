/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab Test:2
Seat A
Question no:1
description:matrix*/


#include <stdio.h>
#include <stdlib.h>
int **M;
int copyn;
int input (int m,int n)
{
	if(m==-1||n==-1)
		return 0;
	scanf("%d",&M[m][n]);
	if(n==0)
	{
		input(m-1,copyn-1);//call recursive function
		printf("\n");//change line
	}
	else
	{
		input(m,n-1);//recursive call
	}
	printf("%d ",M[m][n]);
	return 0;
}

int main()
{
	int m,n;
	printf("Enter m,n:");
	scanf("%d %d",&m,&n);//accept m ,n
	M=(int**)malloc(m*sizeof(int*));
	for(int i=0;i<n;i++)
		M[i]=(int*)malloc (n*sizeof(int));//dynamic allocation
	printf("Enter %d elements:",m*n);
	copyn=n;//stores copy of column number useful in changing line
	int x=input(m-1,n-1);
	return 0;
}
//takes an extra input