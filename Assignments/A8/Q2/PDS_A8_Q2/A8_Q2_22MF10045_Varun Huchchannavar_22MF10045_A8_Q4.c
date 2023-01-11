/* Name: Varun Huchchannavar
   Section: 14
   Roll No: 22MF10045
   To write a program that will find the saddle point in the given matrix.*/
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	int rows,columns;
	printf("Enter the number of rows in the 2-D matrix");
	scanf("%d",&rows);
	printf("Enter the number of columns in the 2-D matrix");
	scanf("%d",&columns);
	int array[rows][columns];
	int i,j,k;
	for(i=0;i<rows;i++)
	{
	  for(j=0;j<columns;j++)
	{
	       scanf("%d",&array[i][j]);
		}
		} // The array is now initialised.
	// To find the minimum in a row
	
	for(i=0;i<rows;i++)
	{
		int min=array[i][0];
        int temp=0;
	int temp2=0;
	for(j=0;j<columns;j++)
	{ 
		if(array[i][j]<min)
		{min=array[i][j];
		temp=j;}
	}
		// Now we have to take this minimum value into consideration.
		int max=array[0][temp];
	for(k=0;k<rows;k++)
	{
		if( array[k][temp]>max)
		{max = array[k][temp];
		temp2=max;}
	}
	if(array[i][temp]==max )
	{printf("The saddle point is %d",max);
		return 0;}
	}
	printf("There is no saddle point in the 2-D array");
	return 0;
	}
	
		
	
	
