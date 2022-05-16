/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 3(b)
*/

#include <stdio.h>

// for abs and min, max
#include <math.h>

int penalty(char g1, char g2) {
	if (g1 == '-' || g2 == '-') return 2;
	else if (g1 != g2) return 1;
	else return 0;
}

int sequence_length(char* sequence) {
	int len = 0;

	int i = 0;
	while (sequence[i++] != '\0') len++;

	return len;
}

// get similarity score of equal length sequences
int get_similarity_score(char* seq1, char* seq2, int len) {
	int similarity_score = 0;
	int i;

	for(i = 0; i < len; i++) similarity_score += penalty(seq1[i], seq2[i]);

	return similarity_score;
}

void clear_gaps(char* sequence) {
	int i = 0;

	while (sequence[i] != '\0') {
		// if there is a gap, remove it and move all further characters by one

		if (sequence[i] == '-') {
			int j = i;

			while (sequence[j] != '\0') {
				sequence[j] = sequence[j + 1];
				j++;
			}
		}
	}
}

void insert_gap(char* sequence, int gap_location, int len) {
	int i;

	for (i = len - 1; i > gap_location; i--) sequence[i] = sequence[i - 1];

	sequence[gap_location] = '-';
}

int main() {
	// general iterator
	int i;

	char sequence1[50];
	char sequence2[50];

	printf("Enter first sequence: %s", sequence1);
	scanf("%s", sequence1);
	printf("Enter second sequence: %s", sequence2);
	scanf("%s", sequence2);

	// in case input has gaps marked by -
	clear_gaps(sequence1);
	clear_gaps(sequence2);

	// lengths excluding gaps
	int len1 = sequence_length(sequence1);
	int len2 = sequence_length(sequence2);

	if (len1 == len2) {
		printf("The sequences have equal lengths.\n");

		int similarity_score = get_similarity_score(sequence1, sequence2, len1);

		printf("The similarity score is %d.\n", similarity_score);
	}
	else {
		printf("The sequences are of different lengths. \n");

		int num_gaps = fabs(len1 - len2);
		char smaller_sequence[50];
		char larger_sequence[50];

		for (i = 0; i < fmin(len1, len2); i++) smaller_sequence[i] = len1 < len2 ? sequence1[i] : sequence2[i];
		for (i = 0; i < fmax(len1, len2); i++) larger_sequence[i] = len1 > len2 ? sequence1[i] : sequence2[i];

		if (num_gaps == 1) {
			// for the case with least similarity score
			int min_gap_loc = 0;
			int min_sim_score = 0;

			// for the current case
			int gap_location;

			for (gap_location = 0; gap_location < fmin(len1, len2); gap_location++) {
				// insert the gap at the wanted location
				insert_gap(smaller_sequence, gap_location, fmin(len1, len2));

				// check similarity score for each gap location
				int similarity_score = get_similarity_score(smaller_sequence, larger_sequence, fmax(len1, len2));

				if (similarity_score < min_sim_score) {
					min_sim_score = similarity_score;
					min_gap_loc = gap_location;
				}

				// remove gaps for next iteration
				clear_gaps(smaller_sequence);
			}

			insert_gap(smaller_sequence, min_gap_loc, fmin(len1, len2));

			printf("Best case scenario: \n");
			printf("Sequence 1: %s", larger_sequence);
			printf("Sequence 2: %s", smaller_sequence);

			printf("The minimum similarity score is %d.\n", min_sim_score);

		}
		else if (num_gaps == 2) {
			// no time :()
		}
	}

	return 0;
}