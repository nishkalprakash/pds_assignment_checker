/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description:Program to print the factors of a number
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int number,possiblefactor=1; // declaration of variables
	printf("Please enter number");
	scanf("%d", &number); // input acquired
	if(number<0){number= -number;} // conditions to process factors of negetive numbers
	if(number==0){printf("0");} // output for number = 0
	for(possiblefactor=1;possiblefactor<=number;possiblefactor++){// loop to find out factors
		if(number%possiblefactor== 0){
			printf("%d\n",possiblefactor); //output printed
		}
	}
    return 0;
}