/* SECTION: 14
   ROLL NO.: 22CH10064
   NAME : SHREYA BHARTI
   ASSIGNMENT NO. : 3
   DESCRIPTION: Program to check whether time entered is correct or not. */


#include <stdio.h>
int main(){ 
	int dd, mm, days,sum,y;
	printf("Enter the day and month: ");
	scanf("%d %d",&dd, &mm);

	if(dd>31 || dd<0 || mm>12 || mm<0){
		printf("Invalid date");
	}
	
	if(dd<31 && dd>0 && mm<12 && mm>0){	

	switch(mm){
		case 2:
			days=31;
			break;
		case 3:
			days=28+31;
			break;
		case 4:
			days=31+28+31;
			break;
		case 5:
			days=30+31+28+31;
			break;
		case 6:
			days=31+30+31+28+31;
			break;
		case 7:
			days=30+31+30+31+28+31;
			break;
		case 8:
			days=31+30+31+30+31+28+31;
			break;
		case 9:
			days=31+31+30+31+30+31+28+31;
			break;
		case 10:
			days=30+31+31+30+31+30+31+28+31;
			break;
		case 11:
			days=31+30+31+31+30+31+30+31+28+31;
			break;
		case 12:
			days=30+31+30+31+31+30+31+30+31+28+31;
			break;
	}
		


	sum=days+dd;
	y=sum%7;
	
	switch(y){
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
return 0;
}





		
