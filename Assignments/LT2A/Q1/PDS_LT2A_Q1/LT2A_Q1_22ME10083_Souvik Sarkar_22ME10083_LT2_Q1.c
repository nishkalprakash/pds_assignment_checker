/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	SET:A
*	LAB test:2 
*	Question no.:1
*	
*/
//programme to print 2d array recursively
#include<stdio.h>
#include<stdlib.h>//sing the malloc function
void print(int **m, int a, int b)//using recursion
{
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(m[i][j]==NULL)
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
}
void create(int *m)
{
	int row,col;//row and column for 2d array
	int i,j;//loop varriable
	printf("Enter the no. of row and column:\n");
	scanf("%d %d",&row,&col);
	for(i=0;i < row;i++)
	{
		m=(int**)malloc(row*sizeof(int*));
		for(j=0;j< col;j++)
		{
			m[j]=(int*)malloc(col*sizeof(int));
			scanf("%d",&m[j]);
		}
	}
	print(m,row,col);
}

void main()
{
	int **a;
	create(a);
}