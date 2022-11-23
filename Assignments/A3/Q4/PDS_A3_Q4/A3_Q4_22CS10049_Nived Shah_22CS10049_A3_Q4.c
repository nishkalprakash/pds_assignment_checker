/*
 Section 14
 Roll No: 22CS10049
 Name: Nived Shah	
 Assignment No: 3
 Description: Computing and Printing the electric bill
*/
	
#include <stdio.h>

int main(){
	float electric_units, bill, total_bill;

	printf("Enter the number of electric units (in KWH) for which you wish to calculate the electric bill : ");
	scanf("%f", &electric_units);
	
	//calculating various values for base bill with given condition on units
	
	if((electric_units<100) && (electric_units>0))
		bill=50;
	else if((electric_units<200) && (electric_units>0))
		bill= 50 + (0.75*(electric_units-100));
	else if((electric_units<300) && (electric_units>0))
		bill= 125 + (1.20*(electric_units-200));
	else if((electric_units>=300) && (electric_units>0))
		bill= 245 + (1.50*(electric_units-300));
	else if(electric_units==0)
		bill=0;	
	else{
		printf("Electric units cannot be negative\n");
		bill=0;
	}

	total_bill= 1.2*bill; //total bill represents bill with 20% surcharge
	printf("Total Electric Bill = %f\n", total_bill);
	
	return 0;	
}
