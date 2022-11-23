/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 3
Description : Program to compute and calculate the electric bill
*/
#include<stdio.h>

int main()
{
	int unit;
	float price;
	printf("Enter the number of units:\n");
	scanf("%d",&unit);
	if (unit <= 100){
		price = 50 + 0.2*50;
		printf("Rs.%f",price);
	}
	else if ((unit > 100) && (unit <= 200)){
		price = 50 + (unit - 100)*0.75 + 0.2*(50 + (unit - 100)*0.75);
		printf("Rs.%f",price);
	}
	else if ((unit > 200) && (unit <= 300)){
		price = 50 + 75 + (unit - 200)*1.2 + 0.2*(50 + 75 + (unit - 200)*1.2);
		printf("Rs.%f",price);
	}
	else
	{
		price = 50 + 75 + 120 + (unit - 300)*1.5 + 0.2*(50 + 75 + 120 + (unit - 300)*1.5);
		printf("Rs.%f",price);
	}
	return 0;
}	
