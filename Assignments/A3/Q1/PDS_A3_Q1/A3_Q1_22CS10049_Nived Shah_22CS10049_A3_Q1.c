/*
 Section 14
 Roll No: 22CS10049
 Name: Nived Shah	
 Assignment No: 3
 Description: Checking if the entered time is valid or not
*/

#include <stdio.h>

int main(){
	int SS, MM, HH; //variable declaration

	printf("Enter 3 integers successively (with space) which represent seconds, minutes and hour respectively : ");
	scanf("%d %d %d", &SS, &MM, &HH);
	
	if((SS>=0) && (MM>=0) && (HH>=0)){	
		if((SS<60) && (MM<60) && (HH<24)) //Condition checks whether seconds, minutes and hour are less than their max value, since after max value, time changes
			printf("Valid time - %d:%d:%d\n", HH, MM, SS);
		else
			printf("Invalid time\n");
	}
	else
		printf("Time cannot be negative\n");	

	return 0;
}
