/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 5
Description : Making a Guessing the number game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int i,g;
	srand(time(0));
	int r=rand()%100+1;	//For taking a random number betweeb 1 and 100
	for(i=1;i<=5;i++){	//For loop for repeating the process for 5 times
		printf("Guess a number between 1 and 100 ");
		scanf("%d",&g);	//Taking an input from the user
		if(g>r)
			printf("Your guess is too big.\n");
		if(g<r)
			printf("Your guess is too small.\n");
		if (g==r){
			printf("Winner.\n");
			break;//Using break if the user wins
		}
	}
	if(i==6){
		printf("Loser: The Number was %d ",r);//	Printing the loser output
	}
return 0;
}
