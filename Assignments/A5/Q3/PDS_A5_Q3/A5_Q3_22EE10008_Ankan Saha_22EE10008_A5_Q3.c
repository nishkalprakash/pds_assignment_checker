/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 5
Description : Guessing game
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));											
	int r = rand()%100 + 1;									// initiates the random number

	int g;													// stores the user's guess
	int i;													// counter variable

	for(i=0; i<5; i++) {
		printf("Enter number : ");
		scanf("%d", &g);									// inputting guess

		if(g == r) {
			printf("Winner\n");
			break;
		}
		else if(g > r) {
			printf("Your guess is too big!\n");
		}
		else {
			printf("Your guess is too small!\n");
		}
	}

	if(i == 5) {											// if program rums for 5 times
		printf("Loser: The Number was %d\n", r);
	}

	return 0;
}