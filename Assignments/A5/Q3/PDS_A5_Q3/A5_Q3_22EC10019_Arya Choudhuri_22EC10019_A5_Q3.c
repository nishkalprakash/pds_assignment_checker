/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to play a guessing game
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	srand(time(0));
	int r = rand()%100+1;
	printf("Guess an integer between 1 and 100: ");
	int g ;	
	
	int count = 1;
	
	while ( count <=5 )
	{	
		scanf("%d",&g);
		if (g==r)
		{
			printf("Winner\n");
			return 0;
		}
		
		else if (g>r)
		{
			printf("Your guess is too big\n");
			count++;
		}

		else
		{
			printf("Your guess is too small\n");
			count++;
		}
	
	}

	printf("Loser: The Number was %d",r);
	return 0;
}

	
