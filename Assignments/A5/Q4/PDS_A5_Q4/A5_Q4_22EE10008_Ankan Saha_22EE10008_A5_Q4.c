/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : <>
Description : Program to take input of an array of integers and divide it into bins of equal sizes
*/

#include <stdio.h>											// Includes the standard IO header file

/* Below 2 functions are used to calculate the range of the array ------------------------------------- */
int max(int len, int a[]) {									// max function
 	int m = a[0];

 	for (int i = 0; i<len; i++) {
 		if(a[i] > m) {
 			m = a[i];
 		}
 	}
 	return m;
}

int min(int len, int a[]) {									// min function
 	int m = a[0];

 	for (int i = 0; i<len; i++) {
 		if(a[i] < m) {
 			m = a[i];
 		}
 	}
 	return m;
}
/* ---------------------------------------------------------------------------------------------------- */

/* bin_elements function (a big function) which does most of the work, putting this line to divide this from the rest of the code ----------------------------------------------------------- */
void bin_elems(int a[], int len, int n, int size, int ll, int last){			// a is array, len is array length, n is the bin number, size is the size of each bin, last is a boolean to check if its the last bin.
	int count = 0;																// Its a function to print the bin elements
	printf("bin%d -> ", n);

	/*
	Let input be [1,10], and bins be 3
	Size is 3 (explained in main function)

		|  1 2 3  |  4 5 6  | 		   7 8 9 10 		 |
		| <-----> | <-----> | <------------------------> |
		|  size   |   size  |  size/rest of the elements |
	
	for each block (index starting from 1), the upper bound and lower bound can be written as

	upper = least_number + index * Size - 1 	[ eg - for 2nd bin, upper = 1 + 3*2 - 1 = 6 ]
 	lower = least_number + (index-1) * Size 	[ eg - for 2nd bin, lower = 1 + (2-1)*3 = 4 ]

	writing these into conditions for an element x, we can write
	ll + size*(n-1) <= x < ll + size*n 		; ll = lower limit or the least number, size is bin size, and n is the bin_number (or index)
	*/
	for (int i = 0; i < len; i++) {
		if(last) {																// for the last bin, the upper limit should be the greatest number, to find greatest number, we can do
			if((a[i] >= ll + (size*(n-1))) && (a[i] <= ll + (size*n))) {		// greatest = least + size*total_bins, and the condition for upper bound will be x <= ll + size*n (here its <= and not <)
				printf("%d, ", a[i]);
				count ++;
			}
		}
		else {
			if((a[i] >= ll + (size*(n-1))) && (a[i] < ll + (size*n))) {
				printf("%d, ", a[i]);
				count ++;
			}
		}
		
	}
	printf("\tElems = %d\n", count);
}
/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ */

int main() {
	int N, bins;											// declaring variables
	printf("Enter number of elements (N) : ");
	scanf("%d", &N);										// inputting size

	int A[N];	
	printf("Enter array elements, A[N] : ");
	for (int i = 0; i<N; i++) {								// inputting array elements, in case of a continuous input, scanf() will take a single number from the buffer for N times
		scanf("%d", &A[i]);
	}
	
	printf("Bins = ");
	scanf("%d", &bins);										// inputting the number of bins

	int ul = max(N, A), ll = min(N, A);						// finding the upper_limit (ul) and lower_limit(ll) of the array
	int bin_size = (ul - ll + 1)/bins;						// finding the size of each bin, it'll be equal to (greatest_num - least_num + 1) / no. of bins
															// (ul - ll + 1) is to find the range of the inputs (+1 as ll is also included)

	for(int i = 1; i<=bins; i++) {							// iterating for each of the bins
		bin_elems(A, N, i, bin_size, ll, i == bins);
	}

	return 0;
}