/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:3
Description: This program takes time from the user and displays if the input time is valid or not.
*/
#include<stdio.h>
int main(){
	int seconds;				//declaration of seconds variable.
	printf("Enter seconds: \n"); 
	scanf("%d",&seconds);
	int minutes;				//declaration of minutes variable.
	printf("Enter minutes: \n");
	scanf("%d",&minutes);
	int hours;					//declaration of hours variable.
	printf("Enter hours: \n");
	scanf("%d",&hours);
	// Condition for valid time input.
	if(seconds<=59 && minutes<=59 && hours<=23){
		printf("Valid time-%d:%d:%d",hours,minutes,seconds);
	}
	//Conditiom for invalid time input.
	else{
		printf("Invalid time.\n");
	}
	return 0;
}