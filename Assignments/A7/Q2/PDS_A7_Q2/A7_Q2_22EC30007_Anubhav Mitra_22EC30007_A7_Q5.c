/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 7
Description: Program to take n integers as input, and then print the number of elements in the array having a given total count.
*/

#include <stdio.h>

int main () {
	int arr[100]; // declaring large array beforehand 
	int n, i, j, data;
	printf("Enter number of elements: ");
	scanf("%d", &n); // taking number of elements as input
	for (i = 0; i < n; i++) {
		printf("Enter element at position %d: ", i + 1);
		scanf("%d", arr + i); // taking array elements as input
		j = i; // running a sort
		while (j > 0 && arr[j-1] > arr[j]) {
			data = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = data;
		} // this way, each element is immediately sorted in the existing array as soon as it is entered through repeated swapping until a sorted position is reached
	}
	i = 0;
	int m;
	printf("Enter number of repetitions to be checked for: ");
	scanf("%d", &m); // taking number of repetitions as input
	int count = 1, flag = 0; // declaring a flag variable for number of elements having given number of repetitions as well as a count to store the number of times an element is being repeated
	while (i < n) {
		data = arr[i];
		while (i < n && arr[i + 1] == data) {
			i++;
			count++;
		} // while subsequent elements are same, count is being incremented
		if (count == m) {
			flag++;
			printf("%d ", data);
		} // if final count is m, flag is updated and the element is printed
		if (i == n-1) break; // if end of array is reached loop is broken
		data = arr[++i]; // else, afterward, data is being updated to the next element in the sorted array
		count = 1; // count is being reset to 1
	}
	if (!flag) printf("NO number "); // if flag is still 0, there are no such cases and the same is printed
	printf("appears %d times", m); // else all repeated elements have now been printed
	return 0;
}
