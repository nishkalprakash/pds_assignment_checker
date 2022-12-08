/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: Guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(0));		
	int r=rand()%100+1; 	//to get a random number between 1 and 100
	int g;
	printf("WELCOME TO THE GUESSING GAME!\nPlease guess a random number between 1 and 100 (we have set a number, if you guess our number you win!)\n");
	printf("You have maximum 5 tries.\n");
	for(int i=1; i<=5; i++)	{ 	//loop to run for a maximum of 5 times
		scanf("%d", &g);	
		if(g==r){
			printf("Winner.\n");
			return 0; 	// if entered value is the correct guess, return will terminate the program here.
		}
		else if(g<r)
			printf("Your guess is too small!\n");	
		else
			printf("Your guess is too big!\n");
		if(i==5)					
			printf("Loser: The number was: %d\n", r);
	}
	return 0;
}
