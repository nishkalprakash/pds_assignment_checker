/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 3
Description : Taking an input of a two-digit integer and displaying the numbers in words
*/

#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	
	b=a/10 ;
	c=a%10 ;
	
/*We are processing the tens place*/
	if (b==2)
		printf("Twenty ");
	else if (b==3)
		printf("Thirty ") ;
	else if (b==4)
		printf("Forty ") ;
	else if (b==5)
		printf("Fifty ") ;
	else if (b==6)
		printf("Sixty ") ;
	else if (b==7)
		printf("Seventy ") ;
	else if (b==8)
		printf("Eighty ") ;
	else if (b==9)
		printf("Ninety ") ;
	else
		printf("Invalid number");

/*We are processing the ones place*/
	if (c==0)
		printf(" ");
	else if (c==1)
		printf("One") ;
	else if (c==2)
		printf("Two") ;
	else if (c==3)
		printf("Three") ;
	else if (c==4)
		printf("Four") ;
	else if (c==5)
		printf("Five") ;
	else if (c==6)
		printf("Six") ;
	else if (c==7)
		printf("Seven") ;
	else if (c==8)
		printf("Eight") ;
	else if (c==9)
		printf("Nine") ;
	else
		printf("Invalid number");

return 0;
}
