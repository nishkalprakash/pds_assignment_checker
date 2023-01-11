/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 8
Description: Program to find saddle point in an array, if no such point is found the same is printed. The 2D array has been taken as input through dynamic memory allocation using malloc. To check for saddle points, first the minimum element of each rows has been found, and then only the column of that element is checked to see whether the given element is the maximum of that column. This is more efficient than checking every element, as here, only one element per row is being checked against a column.
*/

#include <stdio.h>
#include <stdlib.h>

int count = 0, saddle; // initialising count of saddle points and saddle variable

int main() {
	int cols, rows, min, flag = 1; 
	printf("Enter number of rows and columns respectively: ");
	scanf("%d%d", &rows, &cols); // taking rows and columns as input
	int* arr[rows]; // declaring array of pointers storing pointers to first element of respective rows
	for (int i = 0; i < rows; i++) {
		arr[i] = (int *) malloc (cols * sizeof(int)); // dynamically allocating memory
		for (int j = 0; j < cols; j++) {
			scanf("%d", &arr[i][j]); // taking input of 2D array simultaneously
		}
	}
	for (int i = 0; i < rows; i++) { // now, loop to find saddle points, looping through rows
		min = 0;
		for (int j = 1; j < cols; j++) {
			if (arr[i][min] > arr[i][j]) {
				min = j;
			}
		} // for each row, minimum element is being found along with its indices
		saddle = arr[i][min]; // saddle is being updated
		for (int j = 0; j < rows; j++) { // checking whether the element is max in its column
			if (arr[j][min] > saddle) {
				flag = 0; // if not, flag is set to 0 and loop is broken out of
				break;
			}
		}
		if (flag) { // if flag is not reset
			printf("The saddle point is %d", saddle); // saddle point is printed
			count++; // count is updated
		}
		flag = 1; // flag is reset to 1
	}
	if (count == 0) printf("There is no saddle point in this 2D array\n"); // if no saddle points are found the same is printed
	return 0;		
}
