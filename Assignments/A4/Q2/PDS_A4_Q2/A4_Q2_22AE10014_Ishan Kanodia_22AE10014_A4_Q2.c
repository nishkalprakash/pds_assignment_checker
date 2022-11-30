/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 4
Description : Taking an integer input and giving the sum of its digits as output */

#include <stdio.h>
int main()
{

	int a,sum;//Defining our variables
	printf("Please enter the number ");
	scanf("%d",&a);//Taking an input from the user

	sum=0;
	
	if(a<0)
		printf("- ");//if loop for the negative sign for negative numbers
	
	while(a>0){ 
		sum = sum + (a%10) ;
		a = a/10 ;
	}//while loop for positive numbers
	while(-a>0){ 
		sum = sum + (-a%10) ;
		a = a/10 ;
	}//while loop for negative numbers

	printf("%d ",sum);

return 0;
}
