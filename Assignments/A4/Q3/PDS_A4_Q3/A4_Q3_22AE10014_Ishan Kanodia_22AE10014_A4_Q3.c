/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 4
Description : Taking an integer input and displaying the digits in reverse in words */

#include <stdio.h>
int main()
{
	long int a;//storing a long integer since int cannot store 9999999999
	printf("Enter any number in the range [0,9999999999] ");
	scanf("%ld",&a);//Taking input in long integer form

	if (a>9999999999 || a<0)
		printf("Invalid input");
	if (a==0)
		printf("Zero ");//Special case for zero
	while(a>0){
		if(a%10 == 0)
			printf("Zero ");
		else if(a%10 == 1)
			printf("One ");
		else if(a%10 == 2)
			printf("Two ");
		else if(a%10 == 3)
			printf("Three ");
		else if(a%10 == 4)
			printf("Four ");
		else if(a%10 == 5)
			printf("Five ");
		else if(a%10 == 6)
			printf("Six ");
		else if(a%10 == 7)
			printf("Seven ");
		else if(a%10 == 8)
			printf("Eight ");
		else if(a%10 == 9)
			printf("Nine ");
		a=a/10;
	}//while loop
return 0;
}

