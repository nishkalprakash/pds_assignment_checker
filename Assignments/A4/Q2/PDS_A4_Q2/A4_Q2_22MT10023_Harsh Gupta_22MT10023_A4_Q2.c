/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 4
 Description : Program that takes an integer number from the user and then prints the sum of it's digits. Print the sum in negative if the number entered by the user is
 	       negative.
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	int n,c=0;						//declaring variables to store the number entered by the user and flag respectively
	int sum=0;						//declaring sum and initializing it with 0
	printf("Enter a number : ");				//prompting the user to enter a number
	scanf("%d",&n);						//taking input from the user
	if(n<0){n=-n;c=1;}					//taking the absolute value of the number if the number is negative and assigning c=1
	while(n>0)						
	{
		sum = sum + n%10;				//adding the unit digit of n to sum
		n = n/10;					//diving n by 10 to get rid of it's last recent unit digit
	}
	if(c==1){printf("-");}					//printing a '-' sign before the sum if n entered by user was negative
	printf("%d",sum);					//printing the sum
	printf("\n");
	return 0;						//the int main() will return 0
}
