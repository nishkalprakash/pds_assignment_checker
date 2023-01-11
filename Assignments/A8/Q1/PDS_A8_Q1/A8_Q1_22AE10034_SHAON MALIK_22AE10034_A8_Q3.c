/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :8
 Question No :3
 Description: To print a row major matrix in coloumn major form
*/

#include <stdio.h>

int main(){

    int n,i,j;
	printf("enter the number of elements in a row : ");
	scanf("%d",&n);
	int a[n][n];
	printf("enter the elements in row major order : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           scanf("%d",&a[i][j]);
		}
	}

	printf("the elements in coloumn major order : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           printf("%d ",a[j][i]);
		}
	}

}   