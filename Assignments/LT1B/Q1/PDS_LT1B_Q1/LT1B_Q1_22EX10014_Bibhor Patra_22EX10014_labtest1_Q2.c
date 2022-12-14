/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Test 1
Description: Program to print all the armstrong numbers less than N
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int armstrongfunction(int num)
{   int temp,numofdigits = 0,arm=0;
	int numforcode = num;//declaration of variables for the function
	for(numforcode = num;numforcode>0;numofdigits++)
	{
		temp = numforcode/ 10;
		numforcode = temp;
    }// loop to find number of digits
    for(int numforcode2 = num;numforcode2 > 0;numforcode2 = (numforcode2/10))
    {
    	int lstdgt = numforcode2%10;
    	arm = arm + pow(lstdgt,numofdigits);
    }// loop to find the sum of the digits raised to the power of the number of digits in the number
    return(arm);
}// function to calculate the sum of the digits raised to the power of the number of digits

int main()
{
	int num, j; // declaration of variables
	printf("Please enter the number");
	scanf("%d",&num); // input acquired
	if(num> 0){
	for(j=1;j<=num;j++)
	{
		if(j== armstrongfunction(j))
		{
			printf("%d \t",j);
		}
	}
}// loop to print armstrong numbers 
else {printf("Invalid input \n");} // output when num is less than or equal to 0
return 0;
}
