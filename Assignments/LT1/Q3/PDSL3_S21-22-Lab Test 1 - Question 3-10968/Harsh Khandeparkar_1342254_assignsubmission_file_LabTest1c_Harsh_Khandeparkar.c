/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	LabTest: 1(c)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// find the number of digits in the given integer
int num_digits(int number) {
	int num_dig = 0;

	while (number > 0) {
		num_dig++;
		number /= 10;
	}

	return num_dig;
}

// find the sum of digits in the given integer
int sum_digits(int number) {
	int sum_dig = 0;

	while (number > 0) {
		sum_dig += number % 10;
		number /= 10;
	}

	return sum_dig;
}

int main() {
	srand(time(0));

	// inputs
	int num_rounds;

	printf("Enter number of rounds: ");
	scanf("%d", &num_rounds);

	// initialize scores for player A
	int A_badges = 0;
	int A_score = 0;

	// initialize scores for player B
	int B_badges = 0;
	int B_score = 0;

	// iterate
	int round;
	for (round = 1; round <= num_rounds; round++) {
		// generate each player's number
		int A_number = (rand() % (1000 - 5 + 1)) + 5;
		int B_number = (rand() % (1000 - 5 + 1)) + 5;

		// number of digits in each player's number
		int A_num_dig = num_digits(A_number);
		int B_num_dig = num_digits(B_number);

		// points earned by each player in this round
		int A_points;
		int B_points;

		if (A_num_dig == B_num_dig) {
			// in case both numbers have equal number of digits
			// the points are equal to sum of digits
			A_points = sum_digits(A_number);
			B_points = sum_digits(B_number);
		}
		else {
			// in case both numbers have different number of digits
			// the points are equal to number of digits
			A_points = A_num_dig;
			B_points = B_num_dig;
		}

		// increment final scores
		A_score += A_points;
		B_score += B_points;

		// the badges each player got
		int A_badge = 0;
		int B_badge = 0;

		// whichever player gets more points in the given round
		// gets badge 1
		if (A_points > B_points) A_badge = 1;
		else if (B_points > A_points) B_badge = 1;
		/** in case both players score the same points
		 * i.e. if they both generate a number with the same number of digits
		 * as well as same sum of digits
		 * then the players' scores will be incremented but both will get 0 badge
		 */

		// add to total badges
		A_badges += A_badge;
		B_badges += B_badge;

		// print the round results
		printf("Round-%-3d -->  ", round);
		// print numbers
		printf("A's number: %-4d   B's number: %-4d\n", A_number, B_number);
		// print points
		printf("               A's point:  %-4d   B's point:  %-4d\n", A_points, B_points);
		// print badges
		printf("               A's badge:  %-4d   B's badge:  %-4d\n", A_badge, B_badge);

		// print round winner
		if (A_points > B_points) printf("               -- A wins Round %d --\n", round);
		else if (B_points > A_points) printf("               -- B wins Round %d --\n", round);
		else printf("               -- Round %d was tied --\n", round);
	}

	// calculate final score = points earned * number of 1 badges
	int A_final_score = A_score * A_badges;
	int B_final_score = B_score * B_badges;

	// print final result
	printf("Final result:\n");
	printf("A's total score: %d\n", A_final_score);
	printf("B's total score: %d\n", B_final_score);

	// print the game winner
	if (A_final_score > B_final_score) printf("-- A wins the game --\n");
	else if (B_final_score > A_final_score) printf("-- B wins the game --\n");
	else printf("-- The game was tied --\n");

	return 0;
}