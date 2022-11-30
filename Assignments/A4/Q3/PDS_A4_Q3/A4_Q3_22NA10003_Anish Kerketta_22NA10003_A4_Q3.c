/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 4-3
Description : Program to enter date and month as inputs and print out which day it is.
*/
#include <stdio.h>
void main()
	{
	int num,num1,a;					//Declaring
	printf("Enter a number:");			//Print
	scanf("%d",&num);				//Read
	num1=num;
	if(num>=0 && num<=9999999999)			//Range
	do 
	{
		a=num%10;	
		switch(a)
		{
		case 0:
		printf(" Zero");
		break;
		case 1:
		printf(" One");
		break;
		case 2:
		printf(" Two");
		break;
		case 3:
		printf(" Three");
		break;
		case 4:
		printf(" Four");
		break;
		case 5:
		printf(" Five");
		break;
		case 6:
		printf(" Six");
		break;
		case 7:
		printf(" Seven");
		break;
		case 8:
		printf(" Eight");
		break;
		case 9:
		printf(" Nine");
		break;
		}
		num=num/10;
	}
	while(num>0);
	else
	{
	printf("The number %d is out of the given range [0, 9999999999]\n",num1);		//Print
	}
	printf("\n");		//Print
}	
		
