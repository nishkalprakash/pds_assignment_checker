/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: Program to calculate the electricity bill given the rate per unit for given number of units and total number of units used by user.
*/

#include<stdio.h>

int main(){
	float units,bill;	//two variables units and bill are declared
	printf("enter the total units used : ");
	scanf("%f",&units); //scanning units from user

	if(units<=100.0){	//for first 100 units
		bill=50.0 ;
	}
	else if(units >100 && units <=200){	//for next 100 i.e. from 100 to 200 units
		bill = 50.0 + (units-100)*0.75;
	}
	else if(units > 200 && units <=300){    //for next 100 i.e. from 200 to 300 units
		bill=50.0 + 100.0*0.75 + (units-200)*1.2;
	}
	else{	//for units greater than 300
		bill = 50.0 + 100.0*0.75 + 100.0*1.2 + 1.5*(units-300);
	}
	//adding the 20% surcharge 
	bill=bill*1.2;
	printf("the final bill is : %.1f \n",bill); //outputting the final bill after adding surcharge.
	return 0;
}
