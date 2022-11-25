/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description: program to calculate electricity bill
*/
#include<stdio.h>
int main()
{
	int day,month; // declaration of variables
	printf("Please enter day");
	scanf("%d",&day);
	printf("Please enter month");
	scanf("%d",&month);
	// date and month acquired

	int firstdayvalue;
	// variable for day code for first day of the month
	/* code used for each day:
	sat=1
	sun=2
	mon=3
	tue=4
	wed=5
	th=6
	fri=0*/
	if(day<= 31 && month<= 12){

	switch(month){
		case 1: firstdayvalue = 1;
		break;
		case 2: firstdayvalue = 4;
		break;
		case 3: firstdayvalue = 4;
		break;
		case 4: firstdayvalue = 7;
		break;
		case 5: firstdayvalue = 2;
		break;
		case 6: firstdayvalue = 5;
		break;
		case 7: firstdayvalue = 7;
		break;
		case 8: firstdayvalue = 3;
		break;
		case 9: firstdayvalue = 6;
		break;
		case 10: firstdayvalue = 1;
		break;
		case 11: firstdayvalue = 4;
		break;
		case 12: firstdayvalue = 6;
		break;
	}

	//first day of each month determined

	int x,required_day_value;
	required_day_value= (day+ firstdayvalue-1)%7;

	// day code for the required date is calculated

	switch(required_day_value){
		case 1:
		printf("Saturday");
		break;
		case 2:
		printf("Sunday");
		break;
		case 3:
		printf("monday");
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
	// output is printed
}
else {
	printf("invalid input");
}

return 0;
}