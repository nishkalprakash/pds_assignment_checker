/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 9
Description : Program to find difference of days between two particular dates
*/

#include <stdio.h>
#include <math.h>

struct Date     //defining a structure named date for storing the numbers
{
	int day;
	int month;
	int year;
};

struct Date ReadDate(struct Date x,struct Date y)    //function of return structure-type to read a date 
{
	printf("X = ");
	scanf("%d%d%d",&x.day,&x.month,&x.year);
	printf("Y = ");
	scanf("%d%d%d",&y.day,&y.month,&y.year);
	PrintDate(x,y);
}

void PrintDate(struct Date x,struct Date y)     //for printing the given dates
{
	printf("X = %d/%d/%d \n",x.day,x.month,x.year);
	printf("Y = %d/%d/%d \n",y.day,y.month,y.year);
	FindDays(x,y);
}

void FindDays(struct Date x,struct Date y)     //for finding difference between two dates
{
	int days = 0;
	if((x.month == y.month) && (x.year == y.year))    //checking for same year and same month
	{
		days = abs(x.day - y.day);
		printf("Days = %d\n",days);
	}	
	else if(x.year != y.year)
	{
		if(x.month == y.month)
		{
			days = 365 * abs(x.year - y.year) + abs(x.day - y.day);
			printf("Days = %d\n",days);
		}
	}
}	
	
		
int main()
{
	struct Date X,Y;
	ReadDate(X,Y);
}

