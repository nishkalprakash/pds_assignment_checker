/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 3
	Description : Program to print the day of a corresponding date
*/

#include <stdio.h>

int main()
{
	int DD,MM,day;
	printf("Enter day of month:\n");
	scanf("%d",&DD);
	
	printf("Enter month:\n");
	scanf("%d",&MM);
	
	if ((MM<1) || (MM>12))
		printf("Invalid date\n");
	else if ((MM==1) && (DD>=1 && DD<=31))
		day = DD%7;
	else if ((MM==2) && (DD>=1 && DD<=28))
		day = (DD+31)%7;
	else if ((MM==3) && (DD>=1 && DD<=31))
		day = (DD+31+28)%7;
	else if ((MM==4) && (DD>=1 && DD<=30))
		day = (DD+31+28+31)%7;
	else if ((MM==5) && (DD>=1 && DD<=31))
		day = (DD+31+28+31+30)%7;
	else if ((MM==6) && (DD>=1 && DD<=30))
		day = (DD+31+28+31+30+31)%7;
	else if ((MM==7) && (DD>=1 && DD<=31))
		day = (DD+31+28+31+30+31+30)%7;
	else if ((MM==8) && (DD>=1 && DD<=31))
		day = (DD+31+28+31+30+31+30+31)%7;
	else if ((MM==9) && (DD>=1 && DD<=30))
		day = (DD+31+28+31+30+31+30+31+31)%7;
	else if ((MM==10) && (DD>=1 && DD<=31))
		day = (DD+31+28+31+30+31+30+31+31+30)%7;
	else if ((MM==11) && (DD>=1 && DD<=30))
		day = (DD+31+28+31+30+31+30+31+31+30+31)%7;
	else if ((MM==12) && (DD>=1 && DD<=31))
		day = (DD+31+28+31+30+31+30+31+31+30+31+30)%7;
	else
		printf("Invalid date:");

	switch (day)
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

	return 0;
}

	
