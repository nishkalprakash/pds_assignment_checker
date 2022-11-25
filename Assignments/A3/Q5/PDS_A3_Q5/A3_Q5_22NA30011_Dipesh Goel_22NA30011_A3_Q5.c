#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 3
	Description : The program checks that the entered time of a day is Valid or not

*/


int main()

{

	int day, month, no_of_days;
	float a;						//declaration of variables
	printf("Enter day and month : ");
	scanf("%d %d", &day, &month);				//input from user
	printf("%d %d", day, month);
	
	/*switch (month)
		{

			case 1 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 2 : if (day<=28) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 3 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 4 : if (day<=30) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 5 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 6 : if (day<=30) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 7 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 8 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 9 : if (day<=30) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 10 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 11 : if (day<=30) a= day/7.0 - day/7;else printf("Invalid date"); break
			case 12 : if (day<=31) a= day/7.0 - day/7;else printf("Invalid date"); break
			default: printf("Invalid date");
		}*/

	switch (month)
		{

			case 1 : if (day<=31) no_of_days=day;else printf("Invalid date"); break;
			case 2 : if (day<=28) no_of_days=31+day;else printf("Invalid date"); break;
			case 3 : if (day<=31) no_of_days=31+28+day;else printf("Invalid date"); break;
			case 4 : if (day<=30) no_of_days=31+28+31+day;else printf("Invalid date"); break;
			case 5 : if (day<=31) no_of_days=31+28+31+30+day;else printf("Invalid date"); break;
			case 6 : if (day<=30) no_of_days=31+28+31+30+31+day;else printf("Invalid date"); break;
			case 7 : if (day<=31) no_of_days=31+28+31+30+31+30+day;else printf("Invalid date"); break;
			case 8 : if (day<=31) no_of_days=31+28+31+30+31+30+31+day;else printf("Invalid date"); break;
			case 9 : if (day<=30) no_of_days=31+28+31+30+31+30+31+31+day;else printf("Invalid date"); break;
			case 10 : if (day<=31) no_of_days=31+28+31+30+31+30+31+31+30+day;else printf("Invalid date"); break;
			case 11 : if (day<=30) no_of_days=31+28+31+30+31+30+31+31+30+31+day;else printf("Invalid date"); break;
			case 12 : if (day<=31) no_of_days=31+28+31+30+31+30+31+31+30+31+30+day;else printf("Invalid date"); break;
			default: printf("Invalid date");
		}

	a=no_of_days/7.0 - no_of_days/7;
	printf("a=%f",a);

	if (a==0.142857) printf("Saturday");
	else if (a==2/7.0) printf("Sunday");
	else if (a==3/7.0) printf("Monday");
	else if (a==4/7.0) printf("Tuesday");
	else if (a==5/7.0) printf("Wednesday");
	else if (a==6/7.0) printf("Thrusday");
	else if (a==7/7.0) printf("Friday");
	else printf("No case matching");
		





	

	return 0;
}

