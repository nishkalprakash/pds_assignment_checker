/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 3
Description : Program to check validity of date and print the day*/
#include <stdio.h>

int main(){
	int day, month, absolute_day=0, validity=0;
	printf("Enter the day and the month of the year 2022: ");
	scanf("%d %d", &day, &month);
	switch (month){ // To check for the validty of date and update absolute_day
		case 1:
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=day;
			}
			else validity=0;
			break;
		case 2:
			if (day>=1 && day<=28){
			validity=1;
			absolute_day+=31+day;
			}
			else validity=0;
			break;
		case 3:
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=59+day;
			}
			else validity=0;
			break;
		case 4:
			if (day>=1 && day<=30){
			validity=1;
			absolute_day+=90+day;
			}
			else validity=0;
			break;
		case 5:
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=120+day;
			}
			else validity=0;
			break;
		case 6:
			if (day>=1 && day<=30){
			validity=1;
			absolute_day+=151+day;
			}
			else validity=0;
			break;
		case 7:
                        
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=181+day;
			}
			else validity=0;			
			break;
		case 8:
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=212+day;
			}
			else validity=0;
			break;
		case 9:
			if (day>=1 && day<=30){
			validity=1;
			absolute_day+=243+day;
			}
			else validity=0;
			break;
		case 10:
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=273+day;
			}
			else validity=0;
			break;
		case 11:
			if (day>=1 && day<=30){
			validity=1;
			absolute_day+=304+day;
			}
			else validity=0;
			break;
		case 12:
			if (day>=1 && day<=31){
			validity=1;
			absolute_day+=334+day;
			}
			else validity=0;
			break;
		default:
			validity=0;		
			break;
			
	}
	if (validity){
		switch (absolute_day%7){
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
			default:
				printf(" ");
				break;
		}
	}
	else printf("Invalid Date");
	return 0;
}
