/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 5
Description : Program to create a guessing game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
   srand(time(0));
   int r, g, a;
   r= rand()%100+1;
   for (a=1;a<=5;a++)
   {
	printf("Guess a number between 1 and 100.\n");
	scanf("%d",&g);
	if (g==r)
	{
	printf("Winner\n");
	return 0;
	}
	if (g>r)
	printf("Your guess is too big.\n");
	if (g<r)
	printf("Your guess is too small.\n");
   }
   printf("Loser: The number was %d",r);
   return 0;
}
