/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 5
Description : Program to create a number guessing game*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int r, i, num, flag=0;
	r=rand()%100+1;
	printf("Guess a number between 1 and 100\n");  //User input for a guess
	for (i=1; i<=5; i++){
		scanf("%d", &num);
		if (num==r) {printf("Winner."); flag=1; break;}  //Correct guess
		else if (num<r) printf("Your guess is too small.\n");  //If guess is smaller than actual number
		else printf("Your guess is too big.\n");  //If guess is bigger than actual number
		}
	if (flag==0) printf("Loser: The Number was %d", r);  //If user was unsuccessful in making the right guess
	return 0;
}
