/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 3-2
Description : Program to take 2-digit integer between 20-99 as user input and print the value in words.
*/
#include<stdio.h>
void main()
{
	int n,d;			//Declaring
	printf("Enter a two digit number between 20-99\n");		//Instructions for the user
	scanf("%d",&n);		// Read
	d=(n%10);
	if(n<20 || n>99)	//Condition
	{
		printf("Out of the given Range\n");	//Print
	}	
	else
	{
		if(n>=20 && n<30)		//Checking tens place and printing
		{
		printf("Twenty ");
		}
		else if(n>=30 && n<40)
		{
		printf("Thirty ");
		}
		else if(n>=40 && n<50)
		{
		printf("Forty ");
		}
		else if(n>=50 && n<60)
		{
		printf("Fifty ");
		}
		else if(n>=60 && n<70)
		{
		printf("Sixty ");
		}
		else if(n>=70 && n<80)
		{
		printf("Seventy ");
		}
		else if(n>=80 && n<90)
		{
		printf("Eighty ");
		}
		else if (n>=90 && n<100)
		{
		printf("Ninety ");
		}
	switch (d)			//Checking unit place and printing
	{
	case 1:
	printf("One\n");
	break;	
	case 2:
	printf("Two\n");
	break;
	case 3:
	printf("Three\n");
	break;
	case 4:
	printf("Four\n");
	break;
	case 5:
	printf("Five\n");
	break;
	case 6:
	printf("Six\n");
	break;
	case 7:
	printf("Seven\n");
	break;
	case 8:
	printf("Eight\n");
	break;
	case 9:
	printf("Nine\n");
	break;
	}
	}
}
