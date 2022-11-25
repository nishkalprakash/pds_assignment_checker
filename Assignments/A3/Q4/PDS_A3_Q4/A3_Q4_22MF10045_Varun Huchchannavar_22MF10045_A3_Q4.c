/*
Section 14
Roll No: 22MF10045
Name: Varun Huchchannavar
Assignment No:4
Description: A program to calculate the electricity bill
*/
#include <stdio.h>
int main()
{
	int units;
	printf("Enter the number of units");
	scanf("%d",&units)
	float price;
	switch(units){
	case(units<=100):
	price=60;
	printf("The bill is %f",price);
	break;
	case(units):
	price=60+(units-100)*0.9;
	printf("The bill is %f",price);
	break;
	case(200<units<=300)
	price=150+1.44(units-200);
	printf("The bill is %f",price);
	break;
	case(units>=300)
	price=294+(units-300)*1.8;
	printf("The bill is %f",price);
	break;
	}
	return 0;
}



