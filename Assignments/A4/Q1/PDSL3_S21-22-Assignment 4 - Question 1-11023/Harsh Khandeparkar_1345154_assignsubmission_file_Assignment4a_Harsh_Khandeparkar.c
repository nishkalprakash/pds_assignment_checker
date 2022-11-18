/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 4(a)
*/

#include <stdio.h>

/**
 * given an array with a partial combination, say i elements out of l
 * find_combos will recursively find and print all the combinations of size l
 */
void find_combos(
	int* a,
	int n,
	int l,
	// number of elements in  the partial combination
	int* current_combo,
	// the partial combination as an array
	int current_combo_size,
	// the index in array a upto which elements are included in the combination
	// used to remove repetitions, ie: 5,7,7 and 7,7,5 are the same
	int current_i
) {
	int i;
	int j;
	if (current_combo_size == l) {
		// a full combination was created, print it
		for (i = 0; i < l; i++) printf("%d ", current_combo[i]);

		printf("\n");
	}
	else {
		// current combination is incomplete, find other possible elements, recursively
		for (i = current_i; i < n; i++) {
			// we start at current_i and go up to n - 1 so that elements that were already counted in other combinations are not counted again
			// add each element from the array a to the current combo
			current_combo[current_combo_size] = a[i];

			// then recursively call find_combo with this new combo of size current_combo_size + 1
			// new current_i becomes the i in the current iteration
			find_combos(a, n, l, current_combo, current_combo_size + 1, i);
		}
	}
}

int main() {
	// the inputs
	int n; // size of array
	int l;
	int a[50];

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	printf("Enter the elements of the array: ");
	int i;
	for (i = 0; i < n; i++) scanf("%d", &a[i]);

	printf("Enter the value of l: ");
	scanf("%d", &l);

	// largest possible combo
	int current_combo[50];

	find_combos(a, n, l, current_combo, 0, 0);

	return 0;
}