/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 3
 Description : Program to compute and print the electricity bill based on a chart
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	float un,t;						//declaring float variables to store units used and total amount respectively
	printf("Enter the number of units consumed in KWH : "); //prompting the user to give input
	scanf("%f",&un);					//taking input from the user
	if(un<=100)						//computing total if units <= 100 
	{
		t=50+0.2*50;
	}
	else if(un>100&&un<=200)				//computing total if 100 < units <= 200
	{
		t=50+0.75*(un-100);
		t=t+0.2*t;
	}
	else if(un>200&&un<=300)				//computing total if 200 < units <= 300
	{
		t=50+75+1.2*(un-200);
		t=t+0.2*t;
	}
	else if(un>300)						//computing total if units > 300
	{
		t=50+75+120+(un-300)*1.5;
		t=t+0.2*t;
	}
	else
	{
		printf("Invalid input");			//printing "Invalid input" for any invalid value entered by the user
	}
	printf("Rs. %0.1f\n",t);					//printing the total amount in Rupees
	return 0;						//the int main() will return 0
}
