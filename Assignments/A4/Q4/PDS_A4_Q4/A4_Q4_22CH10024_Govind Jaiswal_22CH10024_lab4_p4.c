/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no 4
Description : Program to print a required pattern
*/

#include <stdio.h>

int main()
{
	int i,j,count;
	printf("Enter the number of lines between 2 and 10 :");    //Asking user for line count
	scanf("%d",&count);
	for(i=1;i<=count;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((j==1)||(j==3)||(j==5)||(j==7)||(j==9))
			printf("1 ");
			else
			printf("0 ");
		}
		printf(" \n");    //Printing the required pattern
	}
	return 0;
}
