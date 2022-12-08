/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 5
	Description : A Game of guessing a number
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	printf("YOU ARE PLAYING A NUMBER GUESSING GAME!!!!\nYOU WILL GET FIVE CHANCES\nGUESS NUMBERS BETWEEN 1 AND 100\nGAME STARTS\n");
	int ran=(rand()%100+1);
	for(int i=1; i<6; i++)
	{
		int g;
		printf("Enter your Guess : ");
		scanf("%d",&g);
		if(g==ran)
		{
			printf("WINNER!!!!\n");
			return 0;
		}
		else if(g<ran)
			printf("Your guess is too small\n");
		else
			printf("Your guess is too big\n");
	}
	printf("LOSER!!\nThe Number was %d\n",ran);
	return 0;
}
