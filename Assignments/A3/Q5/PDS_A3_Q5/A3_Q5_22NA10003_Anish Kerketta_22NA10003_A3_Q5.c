/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 3-5
Description : Program to enter date and month as inputs and print out which day it is.
*/
#include<stdio.h>
int main()
{
	int d,check=1,day,mon,tday=0;				//Declaring
	printf("Enter a day and a month in DD MM format\n");	//Instructions for the user
	scanf("%d %d",&day,&mon);
	if(mon>=1 && mon<=12)					//Checking if the date is valid or not
	{	
	if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12)		
	{
		if((day<1)||(day>31))
		{printf("Invalid date\n");
	check=0;}
	}
	else if(mon==4 || mon==6 || mon==8 || mon==10 || mon==12)
	{
		if((day<1)||(day>30))
		{printf("Invalid date\n");
	check=0;}
	}
	else if(mon==2)
	{
		if((day<1)||(day>28))
		{printf("Invalid date\n");
	check=0;}
	}
	}
	else
	{printf("Invalid date\n");
	check=0;}
	
	if(mon==1)						//calculation of total number of days
	tday=day;
	else if(mon==2)
	tday=31+day;
	else if(mon==3)
	tday=31+28+day;
	else if(mon==4)
	tday=31+28+31+day;
	else if(mon==5)
	tday=31+28+31+30+day;
	else if(mon==6)
	tday=31+28+31+30+31+day;
	else if(mon==7)
	tday=31+28+31+30+31+31+day;
	else if(mon==8)
	tday=31+28+31+30+31+31+30+day;
	else if(mon==9)
	tday=31+28+31+30+31+31+30+31+day;
	else if(mon==10)
	tday=31+28+31+30+31+31+30+31+30+day;
	else if(mon==11)
	tday=31+28+31+30+31+31+30+31+30+31+day;
	else if(mon==12)
	tday=31+28+31+30+31+31+30+31+30+31+30+day;
	else 
	tday=0;
		
	d=tday%7;				//Checking the day
	if(check==1)
	{
	switch(d)				//Printing the day
	{
	case 1:
	printf("Saturday");
	break;
	case 2:
	printf("Sunday");
	break;
	case 3:
	printf("Monday");
	break;
	case 4:
	printf("Tuesday");
	break;
	case 5:
	printf("Wednesday");
	break;
	case 6:
	printf("Thursday");
	break;
	case 0:
	printf("Friday");
	break;
	}
	}
	return 0;
}
