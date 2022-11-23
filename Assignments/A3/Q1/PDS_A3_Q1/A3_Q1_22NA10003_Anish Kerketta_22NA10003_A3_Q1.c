/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 3-1
Description : Program to read 3 integers representing time of the day and check whether it is valid or not. If valid print the time.
*/
#include<stdio.h>
int main()
{
	int SS,MM,HH;		//Declaring Variables
	printf("Enter three integers representing seconds, minutes and hours respectively\n");		//Instructions for the user
	scanf("%d %d %d",&SS,&MM,&HH);			//Read
	if((SS>=0 && SS<=59)&&(MM>=0 && MM<=59)&&(HH>=0&&HH<=23))		//Condition
	{
	printf("Valid Time - %d:%d:%d\n",HH,MM,SS);	//Print
	}
	else
	{
	printf("Invalid Time\n");			//Print
	}
	return 0;
}

	
