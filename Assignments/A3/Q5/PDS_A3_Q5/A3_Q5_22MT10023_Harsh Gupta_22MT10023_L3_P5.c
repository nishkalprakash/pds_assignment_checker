/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 3
 Description : Program that takes a date(day and month) of the year 2022 as input and prints out which day is it
*/

#include <stdio.h>					//including the standard input output library

int main()
{
	int d,m,c,f=0;					//declaring variable to store the day, month, a counter and a flag respectively
	printf("Enter day and month:");
	scanf("%d%d",&d,&m);
	switch(m)					//assigning values for c based on what day is the 1st day of the month entered
							//if the day entered is invalid then we assign f=1
	{
		case 1: c=6;if(d<1||d>31){f=1;}break;	
		case 2: c=2;if(d<1||d>28){f=1;}break;
		case 3: c=2;if(d<1||d>31){f=1;}break;
		case 4: c=5;if(d<1||d>30){f=1;}break;
		case 5: c=7;if(d<1||d>31){f=1;}break;
		case 6: c=3;if(d<1||d>30){f=1;}break;
		case 7: c=5;if(d<1||d>31){f=1;}break;
		case 8: c=1;if(d<1||d>31){f=1;}break;
		case 9: c=4;if(d<1||d>30){f=1;}break;
		case 10: c=6;if(d<1||d>31){f=1;}break;
		case 11: c=2;if(d<1||d>30){f=1;}break;
		case 12: c=4;if(d<1||d>31){f=1;}break;
		default : f=1;
	}
	if(f==0)
	{
		c=c+(d-1);					//computing c based on what day is it
		c=c%7;						//taking the remainder when c is divided by 7
		switch(c)					//printing the days based on the value of c calculated
		{
			case 1: printf("Monday\n");break;
			case 2: printf("Tuesday\n");break;
			case 3: printf("Wednesday\n");break;
			case 4: printf("Thursday\n");break;
			case 5: printf("Friday\n");break;
			case 6: printf("Saturday\n");break;
			case 0: printf("Sunday\n");break;
		}
	}
	else{printf("Invalid date\n");}
	return 0;					//the int main() will return 0
}
