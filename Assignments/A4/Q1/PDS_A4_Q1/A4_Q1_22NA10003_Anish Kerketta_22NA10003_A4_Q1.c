/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 4-1
Description : Program to enter date and month as inputs and print out which day it is.
*/
#include <stdio.h>
void main()
{
	int num,a=1,pnum;
	printf("Enter a number:");			//Instructions for the user
	scanf("%d",&num);
	pnum=num;
	if(num>=-999999 && num<0)			//Range
	{
	pnum=num*(-1);
	while(a<=pnum)					//loop will run for negative input
		{	
			if(pnum%a==0)
			{
				printf("%d\t",a);
				a++;
			}
			else
			{
				a++;
			}
		}
	printf("\n");
	}
	else if(num>0 && num<=999999)			//loop will run for postitive input
	{
		while(a<=num)
		{	
			if(num%a==0)
			{
				printf("%d\t",a);
				a++;
			}
			else
			{
				a++;
			}
		}
	printf("\n");					//Write
	}
	else if(num==0)
	{
	printf("0\n");					//Write
	}
	else
	{
		printf("%d is out of the given range, i.e [-999999 , 999999]\n",num);		//Write
	}
}	

			
