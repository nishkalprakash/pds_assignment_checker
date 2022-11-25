/* SECTION: 14
   ROLL NO.: 22CH10064
   NAME : SHREYA BHARTI
   ASSIGNMENT NO. : 3
   DESCRIPTION: Program to compute and print the electric bill. */


#include <stdio.h>
int main(){	
	float unit, amt, x,total;
	printf("Enter total number of electric units: ");	//Asks user to input no. of units
	scanf("%f",&unit);					//Reads no of units entered by user
	if (unit<=100){		
		amt=50;			//amount is fixed as Rs 50 for first 100 KWH
		total=amt;
	}
	else if (unit<=200 && unit>100){
		x = unit-100;
		amt= 50 + (0.75*x);		//For next 100 units Rs 0.75/unit
		total= 1.2*amt;			//An additional charge of 20% is added to the bill
	}
	else if (unit<=300 && unit>200){
		x = unit-200;
		amt= 50 + 75 + (1.20*x);	//For next 100 units Rs 1.20/unit
		total= 1.2*amt;			//An additional charge of 20% is added to the bill
	}
	else if (unit>300){
		x = unit-300;
		amt= 50 + 75 + 120 + (1.50*x);	//For 300 unit onwards Rs 1.50/unit
		total= 1.2*amt;			//An additional charge of 20% is added to the bill
	}
	printf("Total electric bill : Rs %f", total);	// Prints the total amount
return 0;
}
	

	
