/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 3
Description : Program to verify time*/

#include <stdio.h>

int main(){
	int ss, mm, hh;
	printf("Input the time in ss mm hh format- "); //time input
	scanf("%d %d %d", &ss, &mm, &hh);
	if ((hh<=23 && hh>=0) && (mm<=59 && mm>=0) && (ss<=59 && ss>=0)){ 
		printf("Valid time - %d:%d:%d\n", hh, mm, ss);
	} //time can go from 00:00:00 to 23:59:59
	else{
		printf("Invalid time\n");
	}
	return 0;	
}

