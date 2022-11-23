/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 3
Description : Program to check points
*/
#include<stdio.h>
int main(){
	int day, month, tot1, tot2, rem, dayf;
	printf("Enter day and month : ");
	scanf("%d %d", &day, &month);
	rem=month%2;
	
	//calculating total days before each month
	switch (month){
	case 1 : tot1 = 0;
	break;
	case 2 : tot1 = 31;
	break;
	case 3 : tot1 = 31+28;
	break;
	case 4 : tot1 = 31+28+31;
	break;
	case 5 : tot1 = 31+28+31+30;
	break;
	case 6 : tot1 = 31+28+31+30+31;
	break;
	case 7 : tot1 = 31+28+31+30+31+30;
	break;
	case 8 : tot1 = 31+28+31+30+31+30+31;
	break;
	case 9 : tot1 = 31+28+31+30+31+30+31+31;
	break;
	case 10 : tot1 = 31+28+31+30+31+30+31+31+30;
	break;
	case 11 : tot1 = 31+28+31+30+31+30+31+31+30+31;
	break;
	case 12 : tot1 = 31+28+31+30+31+30+31+31+30+31+30;
	break;
	default : printf("Invalid date");
	}
	//specifying conditions for invalid dates
	if (month<8 && rem==1 && day>31){
		printf("Invalid date");
		}
	else if (month==2 && day>28){
		printf("Invalid date");
		}
	else if (month != 2 && rem ==0 && month<8 && day>30){
		printf("Invalid date");
		}
	else if (month>7 && rem == 0 && day>31){
		printf("Invalid date");
		}
	else if (month>7 && rem == 1 && day>30){
		printf("Invalid date");
		}
	//if valid date is input, then following steps will take place
	else {tot2 = tot1 + day;
	dayf = tot2%7;
	//calculating remainder and assigning days accordingly
	switch (dayf){
		case 1: printf("Saturday");
		break;
		case 2: printf("Sunday");
		break;
		case 3: printf("Monday");
		break;
		case 4: printf("Tuesday");
		break;
		case 5: printf("Wednesday");
		break;
		case 6: printf("Thursday");
		break;
		case 0: printf("Sunday");
		break;
		default : printf("invalid");
	}
	}
	return 0;
}


	

