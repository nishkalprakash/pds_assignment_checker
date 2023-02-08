 /* Section 14
Name: Anubhav Mitra
Roll: 22EC30007
Test 2 Set B Q2
Description: Program to create a 2D array using dynamic memory allocation and then print its elements recursively. 
		     Appropriate comments have been given to explain each step alongside the corresponding code.
		     As asked, printf and scanf have not been used inside main, everything is done within suitable functions

*/

#include <stdio.h>
#include <stdlib.h> // stdlib for dynamic memory allocation using malloc

int m, n;
int i = 0, j = 0; // globally declaring variables to avoid using pointers repeatedly, leads to cleaner code due to lesser arguments in the functions themselves


void printarray(int ** ptr) { // print array function
	if (i == m) return; // base case for reaching the end of rows
	if (j == n) { // secondary base case for reaching till end of columns in a certain row
		printf("\n"); // printing newline character
		j = 0; // resetting column variable
		i++; // incrementing row count
		printarray (ptr); // calling function again
	}
	else {
		printf("%d ", ptr[i][j]); // printing element
		j++; // incrementing row count
		printarray(ptr); // calling function
	}
}


int** array () { // function for creating array and storing elements
	printf("Enter number of rows: "); // number of rows
	scanf("%d", &m);
	printf("Enter number of columns: "); // number of columns
	scanf("%d", &n);
	int ** ptr = (int **) malloc (m * sizeof (int*)); // allocating pointers for starting of each row
	for (int i = 0; i < m; i++) { 
		ptr[i] = (int *) malloc (n * sizeof(int)); // allocating memory for each row at corresponding pointer
	}
	for (int i = 0; i < m; i++) { // scanning elements using nested loop
		for (int j = 0; j < n; j++) {
			scanf("%d", &ptr[i][j]);
		}
	}
	return ptr; // returning initial pointer for future use
}

int main() {
	int ** ptr = array (ptr); // creating array using function
	printarray(ptr); // printing array using function
	return 0;
}