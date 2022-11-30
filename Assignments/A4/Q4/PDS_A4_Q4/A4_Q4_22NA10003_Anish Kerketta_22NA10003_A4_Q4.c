/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 4-4
Description : Program to enter date and month as inputs and print out which day it is.
*/
#include <stdio.h>
void main()
{		
	int i,j,num,check=0;					//Declaring
	printf("Enter a number between 2-10:");			//Print
	scanf("%d",&num);					//Read
	if(num>=2 && num<=10)
	{
	for(i=1;i<=num;i++)					//Loop1
	{	
		for(j=1;j<=i;j++)				//Loop2
		{
			if(j%2==0)
			{
			check=1;
			}
			else
			{
			check=0;
			}
			if(check==1)
			{
			printf(" 0");
			}
			else
			{
			printf(" 1");
			}
		}
	printf("\n");						//Print
	}
	}
	else
	{
	printf("The number %d is out of the given range of [2,10]",num);		//Print
	}
}

