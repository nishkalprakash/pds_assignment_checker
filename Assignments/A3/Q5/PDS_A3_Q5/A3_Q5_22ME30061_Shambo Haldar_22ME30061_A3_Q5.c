/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 3
Description : Program to take a date as input and print which day it is
*/
#include<stdio.h>

int main()
{
	int day,month;
	printf("Enter day and month:");
	scanf("%d %d",&day,&month);
	if ((day <= 30) && (day > 0) && (month <= 12) && (month > 0)){
		switch ((day%7)){
		  case 1:
			printf("Monday");
			break;
		  case 2:
			printf("Tuesday");
			break;
		  case 3:
			printf("Wednesday");
			break;
		  case 4:
			printf("Thurday");
			break;
		  case 5:
			printf("Friday");
			break;
		  case 6:
			printf("Saturday");
			break;
		  case 0:
			printf("Sunday");
			break;
		}
	}
	else 
		printf("Invalid date");
	return 0;
}


