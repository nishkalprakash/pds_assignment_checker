/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 4(b)
*/

#include <stdio.h>

int myHostelChangingTrips(
	// items left in the room
	int k,
	// day number
	int i,
	// number of allowed days
	int n,
	// max number of items that can be taken per trip
	int m
) {
	// if the max number of days have not been exhausted and if no more items are left then this is a possible journey
	if (i <= n + 1 && k == 0) {
		return 1; // successful transfer of items
	}

	if (i > n && k > 0) {
		// if the current day number i is > n, then no more trips are possible
		// if there are still items left, this journey is invalid, all items were not transferred
		// if (k == 0) return 1;
		return 0;
	}

	// items are still left and trips are still left
	// student can only take m items at a time and has k items left
	// therefore, the max items that can be taken in the current trip is min(m, k)
	int max_items_possible = (m < k) ? m : k;

	// recursively check all trips with items taken ranging from 1 to max possible
	int items_taken;

	// total journeys will be sum of all sub-cases
	int journeys = 0;
	for (items_taken = 1; items_taken <= max_items_possible; items_taken++) {
		journeys += myHostelChangingTrips(k - items_taken, i + 1, n, m);
	}

	return journeys;
}

int main() {
	// the inputs
	int n;
	int k;
	int m;

	printf("Enter n, k and m respectively: ");
	scanf("%d %d %d", &n, &k, &m);

	printf("All possible journeys: %d\n", myHostelChangingTrips(k, 1, n, m));

	return 0;
}