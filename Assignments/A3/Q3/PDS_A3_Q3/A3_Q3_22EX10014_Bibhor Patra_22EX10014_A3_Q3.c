/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description: Program to calculate sum difference or product
*/

#include<stdio.h>
int main()
{
	float n1,n2; 
	char operator; // declaration of variables
	printf("please enter numbers");
	scanf("%f %f",&n1,&n2);
	printf("please enter operator\n");
	scanf(" %c",&operator);
	// inputs acquired

	float output; // declaration of new variable for output

	switch(operator){
		case '+':
		output = n1+n2;
		break;
		case '-':
		output = n1-n2;
		break;
		case '*':
		output = n1*n2;
		break;
		case '/':
		output = n1/n2;
		break; 


	}
    // calculation of output complete
    printf("The required answer is %f",output);
    return 0; // output printed

}