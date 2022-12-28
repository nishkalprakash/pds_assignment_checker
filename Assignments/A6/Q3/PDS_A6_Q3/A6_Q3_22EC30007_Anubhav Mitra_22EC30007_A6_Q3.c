/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 6
Description: Program to merge two sorted arrays
*/

int ptr[999]; // the question originally said we can only pass sizes and pointers, and not the total size of the array so I used a different approach

#include <stdio.h>

int *merge(int size1, int size2, int *ptr1, int *ptr2) { // pointer returns initial addres of new array
	int arr[size1 + size2];
	int i = 0, j = 0, k = 0; // initialising counts
	while (i < size1 && j < size2) {
		if (*(ptr1 + i) < *(ptr2 + j)) { // comparing 
			*(ptr + k) = *(ptr1 + i);
			i++;
			k++; // in case ptr1 + i 's value is lower
		}
		else {
			*(ptr + k) = *(ptr2 + j);
			j++;
			k++; // in case ptr2 + j 's value is lower
		}
	}
	while (i < size1) {
		*(ptr + k) = *(ptr1 + i);
		i++;
		k++; // in case there are leftover elements
	}
	while (j < size2) {
		*(ptr + k) = *(ptr2 + j);
		j++;
		k++; // in case there are leftover elements
	}
	return ptr; // returning initial pointer
}

int main() {
	printf("Enter size: ");
	int size1; 
	scanf("%d", &size1); // size of first
	int arr1[size1];
	for (int i = 0; i < size1; i++) {
		scanf("%d", arr1 + i);
	}
	printf("Enter size:  ");
	int size2;
	scanf("%d", &size2); // size of second
	int arr2[size2];
	for (int i = 0; i < size2; i++) {
		scanf("%d", arr2 + i);
	}
	
	int *arr; // initialising pointer
	arr = merge(size1, size2, arr1, arr2); // merging the values into the new pointer at contiguous locations
	printf("A = ");
	for (int i = 0; i < size1; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("B = ");
	for (int i = 0; i < size2; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("C = ");
	for (int i = 0; i < size1 + size2; i++) {
		printf("%d ", *(arr + i)); // printing the elements of the array
	}
}
