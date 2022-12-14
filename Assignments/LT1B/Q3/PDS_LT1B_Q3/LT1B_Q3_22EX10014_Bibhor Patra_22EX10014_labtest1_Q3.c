/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Test 1
Description: Program to print two greatest numbers entered
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
	int n=0, max, max2=0, count;// declaration of variables
	for(max=0;n>=0;count++)
	{   printf("Please enter your number");
        scanf("%d",&n);
        if(n>=0){
		
		if (n>= max)
		{
			max2=max;
			max=n;
		} // variable value assignment when n > or = max
		if(n<max && n>max2){
			max2= n;

		}// variable value assignment when n is smaller than max but greater than max2
		printf("Largest Number: %d \n",max); // output printing for the largest number
		if (max2>0 )
		{
			printf("Second Largest Number: %d \n",max2);
		} // output printing for the second largest number
		else
		{
			printf("Second Largest Number: Value not entered yet \n");
		} // output when only 1 number has be taken as input yet
	}// code block to be executed when n is positive integer or zero
	else {
		break;
	}// code block to terminate the loop when n is less than zero

	}// complete loop that prints the appropriate outputs
	return 0;
}