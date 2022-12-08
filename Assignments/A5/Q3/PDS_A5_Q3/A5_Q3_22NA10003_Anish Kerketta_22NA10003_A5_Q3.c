/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 5-2
Description : To make a guessing game
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(0));
	int r=rand()%100+1;
	int s,i;
	printf("Guess a random value between 1-100");
	for(i=1;i<=6;i++)
		{
		scanf("%d",&s);
		if(i>5)
		{
		printf("Loser the number was %d",r);
		}
		else if(s=r)
		{
		printf("Winner");
		}
		else if(s>r)
		{
		printf("Your guess is too big");
		}
		else
		printf("Your guess is too small");
		}
	return 0;
}

