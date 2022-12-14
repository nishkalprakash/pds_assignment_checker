/*
 Test-1 Set-B
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No :T1-3
Description :To make pattern based on user input
*/
#include<stdio.h>
int pattern(int n)								//Function to print the pattern 
{	
	int i,j;								//declaring and initialising
	for(i=1;i<=n;i++)							//loop1 to print pattern
	{
		for(j=1;j<=i;j++)						//loop2 to print pattern
		{			
			printf("%d\t",i);					//print
		}
	printf("\n");								//next line
	}
	return 0;								//return 0
}
int main()
{
	int i,j,n;								//declaring and initialising
	printf("Please enter a number withing the range [2,10]:");		//instructions for the user
	scanf("%d",&n);
	if(n>=2 && n<11)							//checking if the number is within the giver range or not
	{
	pattern(n);								//calling the function pattern()
	}
	else
	{
	printf("Wrong input, Please keep in mind that the given range is [2,10]. No other inputs are acccepted.\n");	//print statement for when the condition is not satisfied
	}
}
