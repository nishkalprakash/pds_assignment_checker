/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void print_space() {
	printf("             ");
}

int main()
{
	srand(time(0));
	int i = 1;
	int num, num_a, num_b, len_a, len_b, sum_a, sum_b;
	int point_a, point_b, psum_a, psum_b, bsum_a, bsum_b;
	psum_a = psum_b = bsum_a = bsum_b = 0;
	printf("Number of rounds: ");
	scanf("%d", &num);
	while(i <= num) {
		num_a = (rand() % (1000 - 5 + 1)) + 5;
		num_b = (rand() % (1000 - 5 + 1)) + 5;

		printf("Round-%d -->  A's number: %d     B's number: %d\n", i, num_a, num_b);

		len_a = len_b = sum_a = sum_b = 0;
		while (num_a) {
			sum_a += (num_a % 10);
			len_a++;
			num_a /= 10;
		}

		while (num_b) {
			sum_b += (num_b % 10);
			len_b++;
			num_b /= 10;
		}

		if (len_a != len_b) {
			point_a = len_a;
			point_b = len_b;
		} else {
			point_a = sum_a;
			point_b = sum_b;
		}
		psum_a += point_a;
		psum_b += point_b;

		print_space();
		printf("A's point: %d     B's point: %d\n", point_a, point_b);

		if (point_a > point_b) {
			bsum_a++;
			print_space();
			printf("A's badge: 1     B's badge: 0\n");
			print_space();
			printf("-- A wins Round %d --\n", i);
		} else {
			bsum_b++;
			print_space();
			printf("A's badge: 0     B's badge: 1\n");
			print_space();
			printf("-- B wins Round %d --\n", i);
		}

		i++;
	}
	int t_score_a = psum_a * bsum_a;
	int t_score_b = psum_b * bsum_b;
	printf("Final result => A's total score: %d, B's total score: %d\n", t_score_a, t_score_b);
	if (t_score_a > t_score_b) {
		printf("                --- A wins the game ---\n");
	} else {
		printf("                --- B wins the game ---\n");
	}
	return 0;
}