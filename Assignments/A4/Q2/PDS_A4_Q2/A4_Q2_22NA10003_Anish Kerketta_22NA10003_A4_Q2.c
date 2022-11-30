/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 4-2
Description : Program to enter date and month as inputs and print out which day it is.
*/
#include <stdio.h>
void main()
{
	int a,num,num1,pnum,pnum1,sum=0;			//Declaration
	printf("Enter a number:");				//Instructions
	scanf("%d",&num);					//Read
	pnum=num*(-1);
	num1=num;
	pnum1=pnum;
	if(num>=0 && num <=999999)				//Range
	{
		while(num!=0)
		{	
			a=num%10;
			sum=sum+a;
			num=num/10;
		}
	printf("The sum of the digits of the number %d is %d\n",num1,sum);
	}
	else if(num>=-999999 && num<0)				//Range
	{
		while(pnum!=0)
		{
			a=pnum%10;
			sum=sum+a;
			pnum=pnum/10;
		}
	printf("The sum of the digits of the number -%d is -%d\n",pnum1,sum);
	}
	else							//Out of Range
	{
		printf("The number %d is out of the range i.e. [-999999,999999]",num); //Print
	}
}
	
		
	
