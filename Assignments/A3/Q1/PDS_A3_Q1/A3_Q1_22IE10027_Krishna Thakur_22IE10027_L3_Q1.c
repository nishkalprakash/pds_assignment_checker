/*
Section 14 
Roll No : 22IE10027
Name: Krishna Thakur 
Assignment 3
Description: Program to check time
*/

#include <stdio.h>

int main(){
	printf("Enter 'seconds minutes hours'");
	int s, m, h; 
	scanf("%d %d %d", &s, &m, &h);
	if ((s>=60)||(m>=60)||(h>=24))
	printf("invalid time");
    else printf("valid time %d:%d:%d",h, m, s);
	return 0;
}