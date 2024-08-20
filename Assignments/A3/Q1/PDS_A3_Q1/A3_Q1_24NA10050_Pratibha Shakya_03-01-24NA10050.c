#include <stdio.h>
/* A C program that takes three integers as input: day, month and year
	the programs checks if the date is valid or not */

int main()
{
	int day, month, year;
	scanf("%d %d %d", &day, &month, &year);
	if(year%4==0 && month==2)
	{
		if(day<=29 && day>0)
			printf("Valid Date");
		else
			printf("Invalid Date");
	}
	else if(year%4!=0 && month==2)
	{
		if(day<=28 && day>0)
			printf("Valid Date");
		else
			printf("Invalid Date");
	}
	else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		if(day<=31 && day>0)
			printf("Valid date");
		else
			printf("Invalid Date");
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		if(day<=30 && day>0)
			printf("Valid Date");
		else
			printf("Invalid date");
	}
	else
		printf("invalid date");
	return 0;
}	

