/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 7
Description: Program to check number of "out of place" elements as per given rules. The condition comes out to be that an element must be strictly smaller than all those to its right and strictly larger than all those to its left. After taking the elements as input, to check this, two loops have been used in opposing directions and the status of out of place or not has been recorded in another outofplace array, 1 for out of place and 0 for in place. At the end, the total number of out of place elements are counted from the outofplace array. Both times, a min and a max variable are constantly updated to avoid running a nested loop (linear time vs quadratic).
*/

#include <stdio.h>

int main () {
	int arr[10]; // initialising array
	printf("Enter number of elements: ");
	int n;
	scanf("%d", &n); // taking number of elements as input
	for (int i = 0; i < n; i++) {
		printf("Enter element at position %d: ", i + 1);
		scanf("%d", arr + i); // taking individual elements as input
	}
	int outofplace[10] = {0}; // initialising outofplace array with 0 entries
	int max = arr[0]; // recording max from left to right for comparing if ith element is greater than the max of its predecessors
	for (int i = 1; i < n; i++) {
		if (arr[i] < max) outofplace[i] = 1; // recording outofplace entry if valid
		if (arr[i] > max) max = arr[i]; // updating max as required
	}
	int min = arr[n-1]; // recording min from right to left for comparing if ith element is lesser than the min of its predecessors
	for (int i = n-2; i >= 0; i--) {
		if (arr[i] > min) outofplace[i] = 1; // recording outofplace entry if valid
		if (arr[i] < min) min = arr[i]; // updating min as required
	}
	int count = 0; // initialising count of outofplace elements
	for (int i = 0; i < n; i++) {
		if (outofplace[i]) count++; // if outofplace count is incremented
	}
	printf("Out of order: %d\n", count); // printing number of outofplace elements
	return 0;
}
