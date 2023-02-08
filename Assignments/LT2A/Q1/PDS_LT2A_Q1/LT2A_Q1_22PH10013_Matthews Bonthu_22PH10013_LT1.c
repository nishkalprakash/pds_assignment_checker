#include <stdio.h>
#include<stdlib.h>

void rec(int ar[][100])
{
    int row,col;
    printf("enter number of rows: ");
    scanf("%d",&row);
    printf("enter number of coloums: ");
    scanf("%d",&col);
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		printf("enter the element a[%d][%d]: ",i,j);

    		scanf("%d",&*(ar+i*col+j));
    	}
    }
    for(int i=(row-1);i>=0;i--)
    {
    	for(int j=(col-1);j>=0;j--)
    	{
    	    printf("%d ",*(ar+i*col+j));
    		
    	}
    	printf("\n\n");
    }
}
int main  ( )
{
	int row,col;
    printf("Program for Declaring an 2D array\n printng the values in reverse order\n");
    printf("----------------------------------\n");
    int *ar=(int *)malloc(row*col*sizeof(int));
    rec(ar);
}