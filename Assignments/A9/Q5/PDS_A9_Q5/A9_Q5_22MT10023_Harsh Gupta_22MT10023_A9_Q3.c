/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 9
 Description : Program that prints the dates input and finds the number of days in between
*/


#include <stdio.h>
#include <stdlib.h>

struct Date{
	int day;
	int month;
	int year;
};

struct Date ReadDate()
{
	struct Date temp;
	printf("Enter the first date in DD MM YYYY order:\n");  //prompting the user for input
	scanf("%d %d %d",&temp.day,&temp.month,&temp.year);				//taking the input
	return temp;
}

void PrintDate(struct Date x)
{
	if(c++==0)
	{
		printf("X = %d/%d/%d\n",x.day,x.month,x.year);
	}
	else
		printf("Y = %d/%d/%d\n",x.day,x.month,x.year);
}


int main()
{
	struct Date x,y;										//declaring the required variables
	x = ReadDate();
	y = ReadDate();

	PrintDate(x);
	PrintDate(y);
	return 0;						//int main function returns 0
}
