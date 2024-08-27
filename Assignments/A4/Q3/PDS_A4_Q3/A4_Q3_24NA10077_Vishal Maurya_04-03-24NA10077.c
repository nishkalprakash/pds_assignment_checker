//Program to output Numero Pyramid with given number of rows
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
int main()
{
	int h,row=1,column,i;
	printf("Enter the number of rows: ");
	scanf("%d", &h);
	
	while(row<=h) 				//loop for cheking row number and code each row
	{
		for(i=0; i<(h-row); i++)	//loop for putting spaces in each row
		{
			printf(" ");	
		}
		
		column=row;
		
		for(i=0; i<(row); i++)		//loop for numbers incresing
		{
			if(column==10)
			{
				column = 0;
			}
			printf("%d",column);
			column++;	
		}
		column--;
		for(i=0; i<(row-1); i++)	//loop for numbers decreasing
		{
			if(column==0)
			{
				column = 10;
			}
				column--;
			printf("%d",column);
		}
		row++;
		printf("\n");
		
	}
	return 0;
}
