/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 8
Description: Program to print transpose of a matrix
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n;
	printf("please enter shape");
	scanf("%d %d",&m,&n);
	if(m!=n){printf("Invalid input");}
else{
	int a[n][m];
	int b[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d",b[i][j]);

		}}


	
	return 0;
}


}