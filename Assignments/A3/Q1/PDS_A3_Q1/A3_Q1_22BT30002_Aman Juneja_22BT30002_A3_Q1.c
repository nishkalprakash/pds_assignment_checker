
/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: Program to check if entered time is valid or invalid . if valid then print the time in specified format. else print invalid time.
*/

#include<stdio.h>

int main(){
	unsigned int SS,MM,HH; //three integers decleared
	printf("Enter three numbers i.e. (seconds minutes hours) in this format: ");
	scanf("%u %u %u",&SS,&MM,&HH); //three integers i.e. seconds minutes and hours inputted.

	//if-else block
	if(SS>59 || MM>59 || HH>23){ //if condition in if statement is true then time given is invalid.
		printf("Invalid Time\n");		
	}
	else{ 
		printf("Valid Time - %u:%u:%u\n",HH,MM,SS);
	}
	return 0;
}
