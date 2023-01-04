/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 7
Description : Finding numbers which are present specific number of times from an array of integers
*/

#include <stdio.h>													// Includes the standard IO header file
#include <stdlib.h>

int count(int arr[], int n, int x) {								// function to count the number of appearances of a character in the string
	int counter = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			counter++;
		}
	}
	return counter;
}

int main() {
	int n[100], m, flag = 0, len;									// m is the number of times that appears, n is array, flag is boolean for if a reapating number is found (1 if found) ,len is length of array

	printf("Enter number of elements = ");
	scanf("%d", &len);

	for(int i = 0; i< len; i++){
		scanf("%d", &n[i]);
	}

	printf("m = ");
	scanf("%d",&m);

	for(int i = 0; i < len; i++){
		if(count(n, len, n[i]) == m){								// if n[i] present m times
			flag = 1;
			if(i > 0) {
				if(n[i-1] != n[i]){									// if 2 consecutive elements are same, we don't need to print them twice
					printf("%d ", n[i]);
				}
			}
			else{
				printf("%d ", n[i]);
			}
		}
	}
	if(!(flag)){
		printf("NO number ");
	}

	printf("appears %d times\n", m);

	return 0;
}