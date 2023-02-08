/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Lab Test 2
Program to print elemnts of a 2D array;
*/
#include<stdio.h>
#include<stdlib.h>
int m,n;
int** create()
{
	int** a;   //allocation
	int i,j;
	printf("Enter M: \n");
	scanf("%d",&m);
	printf("Enter N: \n");
	scanf("%d",&n);
    a= (int **)malloc(m * sizeof(int *));           //row allocation
    for (int i = 0; i < m; i++)
        a[i] = (int *)malloc(n * sizeof(int));      //column allocation
    printf("Enter %d elements:\n",m*n);
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);    //taking in
    	}
    }
    return a;
}
void printele(int a)
{
	printf("%d ",a);
	
}

void print(int **t)
{
  int i,j;
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		printele(t[i][j]);     //calling another function multiple times
  	}
  	printf("\n");
  }
}
  
int main()
{
	int **m;
	
	m=create();     //main
	print(m);
	return 0;
}