/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 8
 Description : Program that finds the saddle point in a 2D array 
*/


#include <stdio.h>

int main()
{
	int row,column,i,j,k,row_min=1,column_max=1,c=0,saddle;			//declaring the required variables
	printf("Enter the number of rows: ");					//prompting the user for input
	scanf("%d",&row);							//taking the input
	printf("Enter the number of columns: ");				//prompting the user for input
	scanf("%d",&column);							//taking the input
	int a[row][column];
	printf("Enter the elements of the 2D Array :\n");			//prompting the user for input
	for(i=0;i<row;i++)							//taking the input
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)							//running loop to compare each element of the array
	{
		for(j=0;j<column;j++)
		{
			for(k=0;k<row;k++)					//running a loop to compare the row elements with a[i][j]
			{
				if(a[i][j]<a[k][j])
				{
					row_min=0;
					break;					//if a[i][j]<a[k][j] then row_min is set to 0 and break
				}
				else
				{
					row_min=1;
				}
			}
			if(row_min==1)						//this checks if a[i][j] is the maximum in a column or not
			{
				for(k=0;k<column;k++)				//running a loop to compare the row elements with a[i][j]
				{
					if(a[i][j]>a[i][k])
					{
						column_max=0;
						break;				//if a[i][j]<a[k][j] then row_min is set to 0 and break
					}
					else
					{
						column_max=1;
					}
				}
			}
			if(row_min==1&&column_max==1)				//this is executed if element is least in a row and max in a column
			{
				saddle = a[i][j];
				c++;						//c is incremented
				printf("The saddle point is : %d\n",saddle);	//saddle point is printed
			}
		}
	}
	if(c==0)								//this block will be executed if no saddle point found
	{
		printf("There is no saddle point in this 2D array\n");
	}
	return 0;								//the int main function returns 0				
}
