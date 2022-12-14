/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : LAB TEST - 1
 Description : program that prints all the perfect numbers less than or equal to a number entered by the user
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	int c=0,i,j,n,sum;					//declaring required variables
	printf("Enter a number: ");	        		//prompting the user for input
	scanf("%d",&n);						//taking the input
	if(n<=1)
	{
		printf("Invalid Input");			//printing "Invalid Input" if the entered number is less than or equal to 1
		
	}
	for(i=2;i<=n;i++)					//running loop for every number less than or equal to n, except 1
	{
		sum=0;						//assigning sum = 0 for every number to be checked
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;			//adding j to sum if j is a positive divisor of i
			}
		}
		if(sum==i)
		{
			c++;
			if(c==1)				//printing the desired output
			{
				printf("%d",i);			//printing "%d", i.e. only the perfect number when c is equal to 1
			}
			else
			{
				printf(" %d",i);		//printing " %d", i.e. the perfect number with a space before it if c is not equal to 1
			}
		}
	}
	printf("\n");						//prints a new line at the end of the program
	return 0;						//the int main() will return 0
}
