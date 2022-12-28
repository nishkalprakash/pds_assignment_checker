/*
Name : Govind Jiaswal
Roll no : 22CH10024
Section : 14
Assignment no : 6
Description : Program to print terms of a given series
*/

#include <stdio.h>

int print_term(int m)     //Function to evaluate the required term
{
	if(m<3)
	return m;
	else
	return (3*print_term(m-1)*print_term(m-2)) - (2*print_term(m-2)*print_term(m-3)) +1;   //Computing the term 
}

int main()
{
	int n,tn,k;
	printf("Enter the number of terms :\n");    //Taking user input
	scanf("%d",&k);
	if(k<0)
	printf("Invalid input");
	for(n=0;n<k;n++)
	{
		tn = print_term(n);
		printf("%d,",tn);    //Printing the desired series
	}
	return 0;
}
