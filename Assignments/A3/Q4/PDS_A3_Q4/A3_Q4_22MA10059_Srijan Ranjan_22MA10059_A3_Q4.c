/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:3
Description: This program takes the number of units of electricity consumed from the user and output the electricity bill.
*/
#include<stdio.h>
int main(){
	float units; // Declaration of units.
	printf("Enter the number of units: ");
	scanf("%f",&units);
	float bill=0; // Declaration of the bill.
	//Conditions to calculate the bill. Considering the number of units.
	if(units<=100){
		bill+=50;
		printf("%f\n",bill*1.2);
	}
	else if(units<=200){
		bill+=(50 + ((units-100)*0.75));
		printf("%f\n",bill*1.2);
	}
	else if(units<=300){
		bill+=(50+75+(units-200)*1.2);
		printf("%f\n",bill*1.2);
	}
	else{
		bill+=(50+75+120+(units-300)*1.5);
		printf("%f\n",bill*1.2);
	}
	return 0;
}