/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 4
 Description : Program that takes an integer number from the user having digits less than or equal to 10 and display the number "in reverse in words".
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	long int n;						//declaring a long int variable to store the number entered by the user
	int c=0,f=0;						//declaring variables to store a counter and a flag respectively
	int d;							//declaring a variable to store the unit digit of n
	printf("Enter a number : ");				//prompting the user to enter a number
	scanf("%ld",&n);						//taking input from the user
	if(n<0||n>9999999999){f=1;}				//assigning f=1 if the number entered by the user was beyond the bounds [0,9999999999]
	else if(n==0){printf("Zero");}				//printing Zero if n == 0
	while(n>0&&f!=1)					//checks if n>0 and f is not equal to one	
	{
		if(c>0){printf(" ");}				//prints a space before each word except before the first word
		d = n%10;					//extracts the unit digit of n
		c++;						//incrementing c
		switch(d)					//Printing the digit in words accordingly
		{
			case 0 : printf("Zero");break;
			case 1 : printf("One");break;
			case 2 : printf("Two");break;
			case 3 : printf("Three");break;
			case 4 : printf("Four");break;
			case 5 : printf("Five");break;
			case 6 : printf("Six");break;
			case 7 : printf("Seven");break;
			case 8 : printf("Eight");break;
			case 9 : printf("Nine");break;
		}
		n = n/10;					//diving n by 10 to get rid of it's last recent unit digit
	}
	if(f==1){printf("Invalid input");}			//printing Invalid input if the number entered by the user was beyond the bounds [0,9999999999]     			
	printf("\n");
	return 0;						//the int main() will return 0
}
