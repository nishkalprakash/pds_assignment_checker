/*
	section:14
	roll no.: 22EC10059
	name: PRIYAM TARAFDER
	Assignment no.: 3
	description: displays day of week according to date given as input
*/

#include <stdio.h>
int main()
{
	int day,month;
	int totday=0;
	printf("Enter day and month: ");
	scanf("%d %d",&day,&month);
	switch(month)
	{
	case 1:
		if(day>0 && day<32)
		{
			totday=day;
		}
		else
			printf("Invalid date");
		break;
	case 2:
		if(day>0 && day<29)
		{
			totday=day+31;
		}
		else
			printf("Invalid date");
		break;	 
	case 3:
		if(day>0 && day<32)
		{
			totday=day+31+28;
		}
		else
			printf("Invalid date");
		break;	 
	case 4:
		if(day>0 && day<31)
		{
			totday=day+31+28+31;
		}
		else
			printf("Invalid date");
		break;	 
	case 5:
		if(day>0 && day<32)
		{
			totday=day+31+28+31+30;
		}
		else
			printf("Invalid date");
		break;	 
	case 6:
		if(day>0 && day<31)
		{
			totday=day+31+28+31+30+31;
		}
		else
			printf("Invalid date");
		break;	 
	case 7:
		if(day>0 && day<32)
		{
			totday=day+31+28+31+30+31+30;
		}
		else
			printf("Invalid date");
		break;	 
	case 8:
		if(day>0 && day<32)
		{
			totday=day+31+28+31+30+31+30+31;
		}
		else
			printf("Invalid date");
		break;	 
	case 9:
		if(day>0 && day<31)
		{
			totday=day+31+28+31+30+31+30+31+31;
		}
		else
			printf("Invalid date");
		break;	 
	case 10:
		if(day>0 && day<32)
		{
			totday=day+31+28+31+30+31+30+31+31+30;
		}
		else
			printf("Invalid date");
		break;	 
	case 11:
		if(day>0 && day<31)
		{
			totday=day+31+28+31+30+31+30+31+31+30+31;
		}
		else
			printf("Invalid date");
		break;	 
	case 12:
		if(day>0 && day<32)
		{
			totday=day+31+28+31+30+31+30+31+31+30+31+30;
		}
		else
			printf("Invalid date");
		break;
	default:
		printf("invalid input");
	}
	if(totday>0)
	{
		switch(totday%7)
		{
		case 0:
			printf("Friday");
			break; 	
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
		}
	}
} 	 	  	 
