/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 3
Description : Program to calculate electric bill*/
#include <stdio.h>

int main(){
	float eunits, bill=0;
	printf("Input the of Electric Units ");
	scanf("%f", &eunits);
	if (eunits>=100){
		bill+=50; //all bills above 100 units have 50 Rs.
		if (eunits<=200) bill+=0.75*(eunits-100); //case for eunits lying between 100 and 200
		else if (eunits<=300) bill+=75+1.2*(eunits-200); //case for eunits lying between 200 and 300
		else if (eunits>300) bill+=75+120+1.5*(eunits-300); //case for eunits lying above 300
		printf("Rs. %f", 1.2*bill); //adding additional 20% surcharge
	}
	else printf("Electric units less than 100 KWH!!!"); // if input is less than 100KWH!!
	return 0;
}
