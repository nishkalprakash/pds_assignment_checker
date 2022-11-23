/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 3
Description : program to print electricity bill
*/





#include <stdio.h>  //including header file

int main(){
	int i;     //declaring variables
	float cost;
	scanf("%d",&i);
	if(i<=100)
	{
		cost = 50; 
	}
	else if ( i <= 200 && i>100 ) cost = 50 + (i-100)*(0.75);   //calculating bill according to cost slabs
  	else if ( i>200 && i<=300) cost = 125 + (i-200)*(1.20);
	else cost = 245 + (i-300)*(1.50);

	printf("%f",cost*1.2);		//printing bill
	
	return 0;
}
