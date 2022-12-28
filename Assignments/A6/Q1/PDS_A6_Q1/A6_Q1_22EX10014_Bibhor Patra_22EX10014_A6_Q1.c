/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 6
Description: Program to print first n terms of a given series
*/
#include<stdio.h>
#include<stdlib.h>

int print_term (int numofterms)
{
	
	if(numofterms==0){return 0;}
	else if (numofterms==1){return 1;}
	else if(numofterms==2){return 2;}
	else return (3*print_term (numofterms-1)*print_term(numofterms-2) - 2*print_term(numofterms-2)*print_term(numofterms-3) + 1);
}// function to calculate the nth term

int main()
{
	int numofterms;
	printf("Please enter the number of terms to be displayed\n");
	scanf("%d", &numofterms);
	if(numofterms<0)
	{
		printf("invalid input");
	}// printing output for invalid inputs
	else{
	for(int i=0;i< numofterms;i++)
	{
		printf("%d\t",print_term(i));
	}// loop used to print the terms
}
	return 0;

}