/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Class test 2


*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create()
{
	int m,n;
	printf("please enter the no of rows");
	scanf("%d",&m);
	printf("please enter the no of columns");
	scanf("%d",&n);
	int **A;
	A=(int**)malloc(m*sizeof(int*));
	for(int i=0;i<n;i++)
	{
		A[i]=(int*)malloc(n*sizeof(int*));
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	return;
}





/*void print(int m,int n,int ar[][])
{
	printf("%d",ar[m][n])
	if(i==m&&j==n)
	{
		return;
	}
	else
	{
		if(j==n)
		{
			printf("\n");
			print()
			
		}
		else
	}

}*/


int main()
{
	create();
	return 0;


}