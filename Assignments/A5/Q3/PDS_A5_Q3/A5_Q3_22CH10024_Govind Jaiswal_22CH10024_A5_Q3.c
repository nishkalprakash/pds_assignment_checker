/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no : 5
Description : Program to make a GUESSING GAME
*/

#include <stdio.h>

int main()
{
	const int r=33;    //Initialising any number randomly
	int g,i;
	printf("Guess a number between 1-100 :");    //Asking the user for input
	for(i=1;i<6;i++)
	{
		scanf("%d ",&g);
		{
			if(g==r)
			{
				printf("Winner\n");
				break;
			}
			else if(g>r)
			printf("Your guess is too big.\n");
			else if(i==5 && g!=r)
			printf("Loser: The number was %d\n",r);
			else 
			printf("Your guess is too small.\n");
		}
	}
	return 0;
}

