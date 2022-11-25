/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 3-3
Description : Program to read the symbol of a binary arithmetic operation (+,-,*,/).
And read two operands (float) from user and perform operation on those two operands dependingupon the character.
*/
#include<stdio.h>
void main()
{
	char ch;		// Declaring
	float a,b;		//Declaring
	printf("Enter a binary arithmetic operatior (+,-,*,/) then the two numbers to perform the operation\n");	//Instructions for the user
	scanf("%c %f %f",&ch,&a,&b);		//Read
	switch(ch)			//Switch case
	{
	case('+'):			//Addition case
	{
	printf("The sum of the numbers = %f\n",a+b);
	break;
	}
	case('-'):			//Substraction case
	{
	printf("The difference of the numbers = %f\n",a-b);
	break;
	}
	case('*'):			//Product case
	{
	printf("The product of the numbers = %f\n",a*b);
	break;
	}
	case('/'):			//Quotient case
	{
	printf("The quotient of the numbers = %f\n",a/b);
	break;
	}
	default:			//Default case
	printf("The operator function %c is not avaialable\n",ch);
	}	
}

