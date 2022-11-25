/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 3
 Description : Program to print the time of the day input by the user in HH:MM:SS format if the time is valid
*/

#include <stdio.h>					//including the standard input output library

int main()
{
	int s,m,h;					//declaring variables for seconds, minutes and hours respectively
	printf("Enter the time in SS:MM:HH format : "); //prompting the user to give input
	scanf("%d%d%d",&s,&m,&h);
	if((s>=0&&s<60)&&(m>=0&&m<60)&&(h>=0&&h<24))	//checking if the values input by the user are int the correct range of values or not
	{
		printf("Valid time-%d:%d:%d\n",h,m,s);	//printing the time in HH:MM:SS format if the input values are valid
	}
	else
	{
		printf("Invalid time\n");		//printing "Invalid time" if the input values are invalid
	}
	return 0;					//the int main() will return 0
}
