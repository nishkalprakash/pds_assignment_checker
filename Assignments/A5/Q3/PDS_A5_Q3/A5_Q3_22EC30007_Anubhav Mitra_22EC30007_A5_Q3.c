/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 5
Description: 
*/

#include <stdio.h>
#include <stdlib.h> // including stlib
#include <time.h> // including time lib

int main() {
	srand(time(0)); // initialising rand using time of system
	int r = rand()%100 + 1; // generating random number to be guessed
	int tries = 0; // initialising number of tries
	int guess; // creating guess variable
	for (tries; tries < 5; tries++) { // running a loop for a maximum of five tries
		printf("Enter a number: \n");
		scanf("%d", &guess); // taking guess as input
		if (guess == r) { // checking for matching answer
			printf("Winner.\n");
			break; // if so, printing winner and breaking from the loop so that count does not get incremented further
		}
		else if (guess < r) printf("Your guess is too small.\n"); // if guess is too small, the same is informed for the next iteration
		else printf("Your guess is too big.\n"); // if guess is too big, the same is informed before the next iteration
	}
	if (tries == 5) printf("Loser. The number was: %d", r); // if all tries are exhausted (given by count of tries), we print Loser
	
}

