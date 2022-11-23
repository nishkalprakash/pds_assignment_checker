/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 3
Description : Program to check points
*/
#include<stdio.h>
int main(){
	float units, bill;
	printf("Enter electricity units used : ");
	scanf("%f", &units);
	// specifying conditions
	if (units>=300){
		bill = (50+75+120+((units-300)*1.5))*1.2;}
	else if (units>=200 && units<300){
		bill = (50+75+(units-200)*1.2)*1.2;}
	else if (units>=100 && units<200){
		bill = (50+(units-100)*0.75)*1.2;}
	else if (units>=0 && units<100){
		bill = 50;
	}
	printf("Rs. %.2f", bill); //printing bill upto 2 decimals
	return 0;
}
	
