/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : LAB TEST - 1
 Description : program that prints out a pattern based on the user input
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	int c=0,i,j,n;						//declaring a counter variable, two loop control variables and a variable to store the user input
	printf("Enter a number in the range [2,10]: ");	        //prompting the user for input
	scanf("%d",&n);						//taking the input
	if(n<2||n>10)
	{
		printf("Invalid Input\n");			//printing "Invalid Input" if the user enters a number not in the range [2,10]
		n=0;						//assigning n=0 so that the program control does not enter the outer loop
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",++c);			//printing the pattern and post-incrementing c
		}
		printf("\n");					//printing a new line
	}
	return 0;						//the int main() will return 0
}
