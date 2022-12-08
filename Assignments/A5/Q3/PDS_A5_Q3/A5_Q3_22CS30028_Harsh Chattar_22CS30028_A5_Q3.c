/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 5
Description :  Guessing Game
*/

#include <stdio.h>  //including the header file
#include <stdlib.h>  //including necessasy libraries
#include <time.h>

int main()
{
	srand(time(0));   
	int num = rand()%100+1,check = 0;  //generating a random number between 1 and 100
	for(int i=0;i<5;i++)
	{
	int guess;   //variable to store player's guess
	scanf("%d",&guess);   
	if(guess>num) printf("Your guess is too big \n");  //comparing with the randomly generated number
	else if(guess<num) printf("Your guess is too small \n");
	else {
	printf("Winner \n");
	check=1;    //variable to check whether the game ends
	break;
	}
	}
	if(check!=1) printf("Loser: The Number was %d ",num);  //checking and printing if the player loses

return 0;
}


