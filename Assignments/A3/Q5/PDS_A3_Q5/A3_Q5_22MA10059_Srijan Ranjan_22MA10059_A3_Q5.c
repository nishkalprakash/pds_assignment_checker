/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:3
Description: This program the date and month and then outputs the day.
*/
#include<stdio.h>
int main(){
	int date,month; //Declaration of date and month
	printf("Enter the date: \n");
	scanf("%d",&date);
	printf("Enter the month: \n");
	scanf("%d",&month);
	int netdays,var; // Declaration of netdays from 1 Jan to the date input. Var is the remainder obtained after dividing net days with 7.
	if(date>31||month>12){
		printf("Invalid date.\n");
	}
	// Condition for day of every specific month.
	else if(month==1){
		netdays=date;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==2){
		if(date>28){
			printf("Invalid date.\n");
		}
		netdays=date+31;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==3){
		netdays=date+31+28;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==4){
		if(date>30){
			printf("Invalid date\n" );
		}
		netdays=date+31+28+31;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==5){
		netdays=date+31+28+31+30;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==6){
		if(date>30){
			printf("Invalid date\n" );
		}
		netdays=date+31+28+31+30+31;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==7){
		netdays=date+31+28+31+30+31+30;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==8){
		netdays=date+31+28+31+30+31+30+31;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==9){
		if(date>30){
			printf("Invalid date\n" );
		}
		netdays=date+31+28+31+30+31+30+31+31;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==10){
		netdays=date+31+28+31+30+31+30+31+31+30;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else if(month==11){
		if(date>30){
			printf("Invalid date\n" );
		}
		else{
			netdays=date+31+28+31+30+31+30+31+31+30+31;
		var=netdays%7;
			switch(var){
				case 0:
					printf("Friday\n");
					break;
				case 1:
					printf("Saturday\n");
					break;
				case 2:	
					printf("Sunday\n");
					break;
				case 3:
					printf("Monday\n");
					break;
				case 4:
					printf("Tuesday\n");
					break;
				case 5:
					printf("Wednesday\n");
					break;
				case 6:
					printf("Thrusday\n");
					break;
			}
		}
	}
		else if(month==12){
		netdays=date+31+28+31+30+31+30+31+31+30+31+30;
		var=netdays%7;
		switch(var){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;
			case 2:	
				printf("Sunday\n");
				break;
			case 3:
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thrusday\n");
				break;
		}
	}
	else{
		printf("Invaild Date.\n");
	}
	return 0;
}