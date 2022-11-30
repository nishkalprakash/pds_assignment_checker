/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 4
description  = displaying the digits in reverse order 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	long int a;
	int digit ;
	printf(" enter a number between 0 and 9999999999 ");
	scanf("%ld",&a);                                                       // asking the user to entera number between 0 and 9999999999
	if(a>0 && a<9999999999){
		digit=0;
	 	while(a != 0){
			digit=a%10;                                             // seperating each digit of the number in reverse order
			a=a/10;
			
			switch(digit){
				case(1): printf("One "); break;
				case(2): printf("Two "); break;
				case(3): printf("Three "); break;
				case(4): printf("Four "); break;
				case(5): printf("Five "); break;                  // a switch case to print each digit 
				case(6): printf("Six "); break;
				case(7): printf("Seven "); break;
				case(8): printf("Eight "); break;
				case(9): printf("Nine "); break;
				case(0): printf("Zero "); break;
				}
			}
		}
	else printf(" number is not in given range ");                        // if the number is not is given range
		
	

	return 0;
}
