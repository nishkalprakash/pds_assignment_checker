/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 3(d)
*/

#include <stdio.h>

/**
 * list = array to search
 * n = size of the array
 * x = key to search
 */
int linear_search(
	int* list, int n,
	int x
) {
	int i;
	for (i = 0; i < n; i++) {
		if (list[i] == x) return i;
	}

	// if no such i is found, element does not exist
	return -1;
}

/**
 * list = sorted array to search
 * n = size of the array
 * x = key to search
 */
int bin_search(
	int* list, int n,
	int x
) {
	// index of last element in the subarray being searched
	int last = n - 1;
	// index of first element in the subarray being searched
	int first = 0;

	// index of current element being checked
	int i = (first + last) / 2;

	/**
	 * If i == first or i == last then the new value of i doesn't change between iterations
	 * and hence the loop is stopped
	 */
	while (i != first && i != last) {
		if (list[i] == x) return i;
		else if (list[i] < x) {
			first = i;
			i = (first + last) / 2;
		}
		else if (list[i] > x) {
			last = i;
			i = (first + last) / 2;
		}
	}

	// final check, if the static value(doesn't change between iterations) of i is the element that is needed
	if (list[i] == x) return i;

	// if no such i is found, element does not exist
	return -1;
}

int main() {
	int n;
	int list[50];

	// general iterator
	int i;

	printf("Enter the number of elements n: ");
	scanf("%d", &n);

	printf("Enter the elements in order: ");

	/**
	 * If a list is sorted, every number in it
	 * should be greater than the previous
	 * If this condition is not met at any point, enter again
	 */
	// becomes 1 if it is in order
	int in_order = 0;

	while (!in_order) {
		for (i = 0; i < n; i++) scanf("%d", &list[i]);

		for (i = 1; i < n; i++) {
			// < since distinct integers
			if (list[i - 1] < list[i]) in_order = 1;
			else {
				in_order = 0;
				printf("Not in order or numbers not distinct. Enter the elements again: ");
				break;
			}
		}
	}

	int x;
	printf("Enter the key element x, which you want to search: ");
	scanf("%d", &x);

	int alg = 1;
	printf("Choose the algorithm. Type 1 for linear search and 2 for binary search: ");
	scanf("%d", &alg);

	printf("\n");
	if (alg == 1) printf("Executing linear search algorithm.\n");
	else printf("Executing binary search algorithm.\n");

	int result = alg == 1 ? linear_search(list, n, x) : bin_search(list, n, x);

	if (result == -1) printf("Element not found.\n");
	else {
		printf("Successful search.\n");
		printf("Element %d has been found at index %d\n", x, result);
	}

	return 0;
}