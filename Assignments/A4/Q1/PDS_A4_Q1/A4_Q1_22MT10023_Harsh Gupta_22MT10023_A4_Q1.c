/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 4
 Description : Program that takes an integer from the user and then prints it's factors
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	int n,c=0;						//declaring variables to store the number entered by the user and flag counter respectively
	int i;							//declaring a loop control variable i
	printf("Enter a number : ");				//prompting the user to enter a number
	scanf("%d",&n);						//taking input from the user
	if(n<0){n=-n;}						//taking the absolute value of the number if the number is negative
	if(n==0){printf("0");}				  	//if n==0 then 0 gets printed
	for(i=1;i<=n;i++)					//the loop would not get executed even once for n==0
	{
		if(c>0&&n%i==0){printf(" ");}			//prints a space character before the factors except the first factor
		c++;						//incrementing c
		if(n%i==0){printf("%d",i);}			//printing the factor
	}
	printf("\n");
	return 0;						//the int main() will return 0
}
