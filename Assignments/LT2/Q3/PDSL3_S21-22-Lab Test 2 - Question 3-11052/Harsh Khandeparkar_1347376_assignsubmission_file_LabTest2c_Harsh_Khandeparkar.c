/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 2(c)
*/

#include <stdio.h>

int minTotalIqDiff(
	int m,
	int* n,
	// size of n
	int size,
	// number of students still not in a team
	int students_left,
	// indices of the students that have been already assigned
	int* students_assigned,
	// sum of IQs of m teams, array of size m
	int* IQ_sums
) {
	/**
	 * Best way to minimize this difference is to evenly distribute the IQs among the given teams
	 * Find the maxmimum IQ student in the leftover students
	 * and add the student to the team with the lowest IQ
	 * continue this process recursively for number of students - 1
	 *
	 * NOTE: ALGORITHM ASSUMES THAT m >= 2
	 */

	if (students_left == 0) {
		// all students have been assigned, find the difference between max and least iq teams
		int i;

		int max_iq = IQ_sums[0];
		int min_iq = IQ_sums[0];

		for (i = 0; i < m; i++) {
			max_iq = max_iq > IQ_sums[i] ? max_iq : IQ_sums[i];
			min_iq = min_iq < IQ_sums[i] ? min_iq : IQ_sums[i];
		}

		return max_iq - min_iq;
	}
	else {
		// first we find the index of the student with the maximum iq left in the array
		int max_iq = 0;
		int max_iq_index = 0;

		int i = -1;
		while (i < size) {
			i++;

			// first check if student at index i is already assigned
			int j, already_assigned = 0;
			for (j = 0; j < size - students_left; j++) if (students_assigned[j] == i) already_assigned = 1;

			// skip if already assigned
			if (already_assigned) continue;

			// if not assigned, update max_iq

			if (n[i] > max_iq) {
				max_iq = n[i];
				max_iq_index = i;
			}
		}

		// the max iq student has been found
		// now find team with least total iq
		int least_total_iq = IQ_sums[0];
		// index of the team with least iq
		int least_iq_team = 0;

		for (i = 0; i < m; i++) {
			if (IQ_sums[i] < least_total_iq) {
				least_total_iq = IQ_sums[i];
				least_iq_team = i;
			}
		}

		// add max iq to the least iq team
		IQ_sums[least_iq_team] += max_iq;

		// add the student to the assigned studetns list
		students_assigned[size - students_left] = max_iq_index;

		// finally recursively call the function
		minTotalIqDiff(m, n, size, students_left - 1, students_assigned, IQ_sums);
	}
}

int main() {
	// let the max possible students be 50
	int n[50];
	// user inputs
	int size;
	int m;

	printf("Enter number of students: ");
	scanf("%d", &size);

	printf("Enter the IQ values: ");

	int i;
	for (i = 0; i < size; i++) scanf("%d", &n[i]);

	printf("Enter the number of teams m: ");
	scanf("%d", &m);

	// this array has to be able to store all the students when they all have been assigned
	int students_assigned[50];
	// at most there can be 50 teams
	int IQ_sums[50];

	// assign initial iq sums to 0
	for (i = 0; i < m; i++) IQ_sums[i] = 0;

	printf("Minimum IQ difference is: %d\n", minTotalIqDiff(m, n, size, size, students_assigned, IQ_sums));

	return 0;
}