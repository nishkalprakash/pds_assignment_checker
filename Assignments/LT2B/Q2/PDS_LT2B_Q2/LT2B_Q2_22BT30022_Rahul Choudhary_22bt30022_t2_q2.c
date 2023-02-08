/*
section 14
roll no. : 22bt30022
name : rahul choudhary
test:2
description:to construct a 2d array of integers of size m*n
*/
#include<stdio.h>				//including package
#include<stdlib.h>
void createmat(int **Z,int m, int n)   //creating a dynamic memory using malloc
{
   Z= (int**)malloc(m*sizeof(int*));
   for (int i = 0; i < n; i++)
   Z[i] = (int*)malloc(n * sizeof(int));
}
int** getmat()
{
	
	int m,n;
	printf("enter m:");
	scanf("%d",&m);
	printf("enter n:");
	scanf("%d",&n);
	int size=m*n;
	int** Z;
	createmat(Z,m,n);
	printf("enter %d elements:",size);
	 for (int i = 0; i < m; i++)
	{
		for(int j=0; j<n;j++)
		scanf("%d",&Z[i][j]);
		
	}

}

int main()
{
   

	int m,n;
	printf("enter m:");
	scanf("%d",&m);
	printf("enter n:");
	scanf("%d",&n);
	int size=m*n;
	int** Z;
	createmat(Z,m,n);
	printf("enter %d elements:",size);
	 for (int i = 0; i < m; i++)
	{
		for(int j=0; j<n;j++)
		scanf("%d",&Z[i][j]);
		
	}

    return 0;
}
