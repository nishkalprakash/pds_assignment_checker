/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 6
Description: Printing terms of a given recursive relation. A loop has been used inside main() for to iterate through each term of the sequence, while a recursive call to function print_term of void type prints the successive terms. Another function kth_term has been called to calculate the value of each term using recursion.
*/

#include <stdio.h>
#include <stdlib.h>

int* BuildSet(int n) {
	int dup = 0;
	int arr[n];
	int data;
	scanf("%d", &data);
	arr[0] = data;

	int i = 1;
	n--;
	while(n--) {
		scanf("%d", &data);
		for (int j = 0; j < i; j++) { // traversing to check for duplicate
			if (arr[j] == data) {
				dup = 1;
				break;
			}
		}
		if (dup) continue;
		arr[i] = data;
		i++;
	}
	return arr; // returning initial pointer
}



int main() {
	int n;
	scanf("%d", &n); // number of elements
	//printf("%d", n);
	int *ptr = (int *) malloc (n * sizeof(int)); // allocating emmeory
	ptr = BuildSet(n); // passin function
	for (int i = 0; i < n; i++) {
		printf("%d ", ptr[i]); // printing elements
	}
}
