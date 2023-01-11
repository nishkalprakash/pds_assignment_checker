/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 8
Description: To input a 2D array in row major order and then print it in column major order. Dynamic memory allocation has been used to store the 2D array. A quadratic loop has been used to first create and enter the elements of the array, and then another for the traversal of the array along with printing elements in the asked order.

*/

#include <stdio.h>
#include <stdlib.h> // stdlib for malloc

int main() {
	int n; // initialising number of columns for square matrix
	printf("Number of elements in one row = ");
	scanf("%d", &n); // taking it as input
	int* arr[n]; // declaring array of integer pointers
	for (int i = 0; i < n; i++) {
		arr[i] = (int *) malloc (n * sizeof(int)); // entering pointer of starting element of row in array
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]); // taking elements as input for each rows as we go
		}
	}
	printf("Column Major Order: ");
	for (int i = 0; i < n; i++) { // running loop for columns
		for (int j = 0; j < n; j++) { // running loop for rows
			printf("%d ", arr[j][i]); // printing elements
		}
	}
	printf("\n");
	return 0;
}
