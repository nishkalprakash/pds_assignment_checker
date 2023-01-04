/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 7
Description : To find number of elements that are out of order
*/

#include <stdio.h>											// Includes the standard IO header file

int isOutOfOrder(int arr[],int n, int index){				// function to check if a single element is out of order
	for(int i = 0; i<n; i++){
		if(i>index){										// if greater elements are smaller
			if(arr[index] > arr[i]) {
				return 1;
			}
		}
		else if(i<index){									// if lower elements are larger
			if(arr[index] < arr[i]) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int a[10], n, out_of_order = 0;
	printf("Enter number of elements : ");					// taking input
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	for(int i=0; i<n; i++){
		if(isOutOfOrder(a, n, i)){
			out_of_order++;
		}
	}

	printf("Out of order : %d\n", out_of_order);

	return 0;
}