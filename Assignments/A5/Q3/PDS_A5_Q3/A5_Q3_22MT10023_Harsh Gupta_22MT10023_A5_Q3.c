/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 5
 Description : Program that gets the user to guess a number in the range [1,100]
*/

#include <stdio.h>									//including the standard input output library
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));								//intializing time seed so rand function generates different random integers everytime
	int r;									//variable to input the randomly generated value
	int i,g;								//declaring the loop control variable and a variable to store the input number
	int c=0;								//declaring a flag variable
	printf("Enter 5 integer values in the range [1,100]: ");
	r = rand()%100+1;							//generating a random integer in the range [1,100]
	for(i=1;i<=5;i++)
	{
		scanf("%d",&g);							//taking the input
		if(g>r)
		{
			printf("Your guess is too big!\n");			//this gets printed if g>r
		}
		else if(g<r)
		{
			printf("Your guess is too small!\n");			//this gets printed if g<r
		}
		else if(g==r)
		{
			printf("Winner\n");					//this gets printed if g==r
			c++;							//flag gets updated to 1
			break;							//the loop will terminate if the guess is correct
		}
	}
	if(c==0)
	{
		printf("Loser: The number was: %d\n",r);				//this gets printed if the user could not guess the number in the 5th attempt
	}
	return 0;									//the int main() will return 0
}
