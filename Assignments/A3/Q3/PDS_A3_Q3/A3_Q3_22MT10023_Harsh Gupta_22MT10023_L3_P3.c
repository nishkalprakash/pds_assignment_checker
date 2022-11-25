/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 3
 Description : Program to input a binary arithematic operator and two operands(floating values) from the user and perform the same operation on the two operands
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	char c;							//declaring a character variable to store the operator
	float a,b;						//declaring float variables to store the operands
	printf("Enter an operator(+,-,*,/) and two operands : ");	//prompting the user to give input
	scanf("%c%f%f",&c,&a,&b);				//taking inputs from the user
	switch(c)					 	//switching cases for the character c, i.e. the operator
	{
		case '+': printf("%f\n",a+b);break;
		case '-': printf("%f\n",a-b);break;
		case '*': printf("%f\n",a*b);break;
		case '/': printf("%f\n",((float)a)/((float)b));break;
		default : printf("Invalid input\n");		//printing "Invalid input" for an operator other than +,-,* or /
	}
	
	return 0;						//the int main() will return 0
}
