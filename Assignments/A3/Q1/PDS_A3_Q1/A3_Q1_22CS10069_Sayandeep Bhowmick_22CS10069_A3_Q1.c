/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 3
	Description : Checks whether the time entered by the user is valid and prints it if it is valid
*/
#include <stdio.h>

int main()
{
	int SS, MM, HH;
	printf("Enter the time in seconds, minutes and hours respectively \n");
	scanf("%d %d %d", &SS, &MM, &HH);		//Inputs the time
	if((SS<60 && SS>=0) && (MM<60 && MM>=0) && (HH<24 && HH>=0))		//Checks whether the time is valid
		printf("Valid Time - %d : %d : %d \n", HH, MM, SS);
	else
		printf("Invalid Time\n");
	return 0;
}
