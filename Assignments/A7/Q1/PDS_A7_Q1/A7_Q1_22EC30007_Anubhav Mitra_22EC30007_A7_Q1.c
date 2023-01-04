/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 7
Description: Program to take a sorted array of given length as input, and then insert a new element at it's appropriate position to maintain the sorted order. An array of required length is used, the new element being inserted at it's final position to start with. Subsequently, the element is sorted by repeatedly swapping with the element immediately to it's left provided it is smaller (effectively sorting the case). When this condition fails to hold, it implies the array is sorted as the first m elements were already sorted. This is analogous to bubble sort. 

Note: For greater efficiency a binary search may also be used (O(logn) vs O(n)).

*/

#include <stdio.h>

int main () {
	int n, m; // declaring variables
	printf("Enter number of elements: ");
	scanf("%d", &m); // taking number of elements as input
	n = m;
	int data;
	int arr[m + 1]; // declaring array with an extra space for the newest element
	for (int i = 0; i < m; i++) {
		printf("Enter element at position %d: ", i + 1);
		scanf("%d", &data);
		arr[i] = data; // inserting sorted elements into the array
	}
	printf("Enter new entry: ");
	scanf("%d", &data); 
	arr[m] = data; // inserting newest entry
	while (m > 0) { // running loop to place the new element
		if (arr[m] < arr[m-1]) { // if out of order the elements are stopped
			data = arr[m-1];
			arr[m-1] = arr[m];
			arr[m] = data;
			m--;
		}
		else break; // if not then break as the array is sorted
	}
	printf("Output Array: ");
	for (int i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]); // printing output array
	}
	return 0;
}
