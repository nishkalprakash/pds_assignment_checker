/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 3
Description : Program to check whether the input values correspond to a valid time or not
*/

#include<stdio.h>

int main()
{
	int sec,min,hour;	//Creating variables for storing the input integers
	printf("Enter seconds,minutes and hours:\n");
	scanf("%d %d %d",&sec,&min,&hour);
	
	if ((sec >= 0) && (sec <= 60)){
		if ((min >= 0) && (min <= 60)){
			if ((hour >= 0) && (hour <= 24))
				printf("Valid time -%d:%d:%d", hour,min,sec);
			else 
				printf("Invalid time");
			}
		else
			printf("Invalid time");
		}
	else 
		printf("Invalid time");
	return 0;
}
