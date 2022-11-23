/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 3
	Description : Inputting a date from the user and printing the day of the date
*/
#include <stdio.h>

int main()
{
	printf("Enter the day and month\n");
	int day, month, count=0;
	scanf("%d %d", &day, &month);
	if(day<0 || month<0 || month >12)
	{
		printf("Invalid Date!!!!\n");
		return 0;							//return 0 directly stops any further execution
	}
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)			/*Checks whether the entered date and month is valid*/
		if(day>31)
		{
			printf("Invalid Date!!!!\n");
			return 0;
		}
	if(month==4 || month==6 || month==9 || month==11)
		if(day>30)
		{
			printf("Invalid Date!!!!\n");
			return 0;
		}
	if(month==2)
		if(day>28)
		{
			printf("Invalid Date!!!!\n");
			return 0;
		}
	switch(month)				//count variable counts the number of days from the beginning of the year 
	{
		case 12:
		count=334+day;
		break;
		case 11:
		count=304+day;
		break;
		case 10:
		count=273+day;
		break;
		case 9:
		count=243+day;
		break;
		case 8:
		count=212+day;
		break;
		case 7:
		count=181+day;
		break;
		case 6:
		count=151+day;
		break;
		case 5:
		count=120+day;
		break;
		case 4:
		count=90+day;
		break;
		case 3:
		count=59+day;
		break;
		case 2:
		count=31+day;
		break;
		case 1:
		count=day;
		break;
	}
	if(count%7==1)
		printf("%d / %d /2022 is Saturday\n",day,month);
	if(count%7==2)
		printf("%d / %d /2022 is Sunday\n",day,month);			/*Checks and prints what day the date is*/
	if(count%7==3)
		printf("%d / %d /2022 is Monday\n",day,month);
	if(count%7==4)
		printf("%d / %d /2022 is Tuesday\n",day,month);
	if(count%7==5)
		printf("%d / %d /2022 is Wednesday\n",day,month);
	if(count%7==6)
		printf("%d / %d /2022 is Thursday\n",day,month);
	if(count%7==0)
		printf("%d / %d /2022 is Friday\n",day,month);
	return 0;
}
