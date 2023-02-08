/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Test : 2
	Description : Declaring  a 2D array dynamically and printing it using recursion
*/

#include <stdio.h>
#include <stdlib.h>

int m,n;			//m is no. of rows and n is no. of columns

int** createarray()				//creates the array dynamically
{
	printf("\n\n 		--------WELCOME--------\n\n");
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&m,&n);

	int** p=(int**)malloc(sizeof(int*)*m);				//p is pointer to a row of m pointers

	for (int i = 0; i < m; ++i)
		p[i]=(int*)malloc(sizeof(int)*n);				//rows allocated with n columns

	printf("\n");

	return p;
}


//Stores the elements entered in row major order
void inout(int **p, int i, int j)
{
	if(i==m)
	{
		printf("\nThe modified array is :\n");			//the terminating condition for iteration
		return;
	}

	if(i==0 && j==0)
		printf("Enter %d elements : ",m*n);				//for proper output screen

	scanf("%d",&p[i][j]);								//scans the elements forward

	if(j==n-1)											//As the last column is reached, we send the first element of the next row else the next element in the column is sent
		inout(p,i+1,0);
	else
		inout(p,i,j+1);

	printf("%2d ",p[i][j]);								//for printing in reverse manner

	if (j==0)											//new line in the output after each row
		printf("\n");

	if(i==0 && j==0)									//new line at the end
		printf("\n");
}


void main()
{
	int **q=createarray();
	inout(q,0,0);

	return;
}