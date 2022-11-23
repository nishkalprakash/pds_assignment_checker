/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 3
	   DESCRIPTION    : A c code to find the day with date in the year 2022
*/

#include<stdio.h>

int main()
{	
	int day,month;
	printf("entre day and month ");
	scanf("%d %d",&day,&month);
	if (day>28 && month==2)
	{printf("invalid date");}

	else if (day>31 &&((month==1)||(month==3)||(month==5)||(month==7)||
		(month==9)||(month==11)))
	{printf("invalid date");}
	
	else if (day>30 &&((month==4)||(month==6)||(month==8)||(month==10)||
		(month==12)))
	{printf("invalid date");}
	
	
	else if (month>12){printf("invalid date");}

	
return 0;}

	

