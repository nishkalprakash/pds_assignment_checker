/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 5
Description: Program to take an array as input, and put the entries into a number of bins decided by the user based on their magnitude. Several functions have been employed, the main strategy being to create a corresponding array that stores the bin values of corresponding elements and using that as a reference to print final results.
*/

#include <stdio.h>

int least(int arr[], int n) { // creating function to find least element of array
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int maxi(int arr[], int n) { // creating function to find max element of array
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}



void values (int arr[], int n) { // taking entire array as input through loops
	for (int i = 0; i < n; i++) {
		printf("Enter next number: \n");
		scanf("%d", arr+i);
	}
}

void distribution (int arr[], int bindivision[], int interval, int min, int n) { // creating a secondary array bindivision, which will store the bin value of each element at it's corresponding index in the new array
	for (int i = 0; i < n; i++) {
		bindivision[i] = (arr[i] - min) / interval + 1;
	}
}

void print(int arr[], int bindivision[], int bins, int n) { // printing final results
	int bincount; // creating bincount for each bin value
	for (int j = 1; j <= bins; j++) {
		bincount = 0; // resetting bincount at start of loop through a certain bin value
		printf("bin%d-> ", j); // printing bin number before looping through array
		for (int i = 0; i < n; i++) {
			if ((bindivision[i] == j) || ((j == bins) && (bindivision[i] == bins + 1))) { // checking for equality of bin values in corresponding array
				printf("%d ", arr[i]); // if equal, the element is printed
				bincount++; // and bincount is increased
			}	
		}
		printf("Elems: %d\n", bincount); // bincount is printed after breaking out of inner loop
	}
}

int main() {
	int n, bins, max, min; // initialising variables
	printf("Enter number of elements: \n"); // taking number of elements
	scanf("%d", &n);
	int arr[n]; // initialising input array
	values(arr, n); // taking input via function
	printf("Enter number of bins: \n"); // taking number of bins
	scanf("%d", &bins);
	max = maxi(arr, n); // finding max element via function
	min = least(arr, n); // finding min element via function
	int interval = (max - min + 1) / bins; // calculating interval
	int bindivision[n]; // initialising array to store bin values
	distribution(arr, bindivision, interval, min, n); // entering bin values at corresopnding index through function
	print(arr, bindivision, bins, n); // printing final results via another function
	return 0;
}

