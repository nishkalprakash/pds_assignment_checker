/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 7
Description: Program to find the longest number that can be made from a given array of integers. For convenience, it has been assumed that entries do not exceed two digits. For comparing integers where both have equal digits, simply magnitude has been used. For different digits, digits have had to be compared from left to right to judge order.
*/

#include <stdio.h>

int main () {
	int n, j, data, flag; // declaring variables
	printf("Enter number of integers: ");
	scanf("%d", &n); // taking number of integers as input
	int arr[n]; // declaring array

	for (int i = 0; i < n; i++) { // running loop to enter integers, sorting immediately
		j = i;
		flag = 0; // setting flag = 0 for initial loop
		printf("Enter element at position %d: ", i + 1);
		scanf("%d", arr + i); // taking input
		while (j > 0 && flag == 0) { 
			flag = 1; // setting flag = 1 initially
			if (((arr[j] / 10 > 0 && arr[j-1] / 10 > 0) || (arr[j] / 10 == 0 && arr[j-1] / 10 == 0)) && (arr[j] > arr[j-1])) {
				data = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = data;
				flag = 0;
			}
			else if (arr[j] / 10 == 0 && arr[j-1] / 10 > 0) {
				if (arr[j] > arr[j-1] / 10) {
					data = arr[j-1];
					arr[j-1] = arr[j];
					arr[j] = data;
					flag = 0;
				}
				else if (arr[j] == arr[j-1] / 10 && arr[j-1] % 10 <= arr[j]) {
					data = arr[j-1];
					arr[j-1] = arr[j];
					arr[j] = data;
					flag = 0;
				}
			}
			else if (arr[j] / 10 > 0 && arr[j-1] / 10 == 0) {
				if (arr[j] / 10 > arr[j-1]) {
					data = arr[j-1];
					arr[j-1] = arr[j];
					arr[j] = data;
					flag = 0;
				}
				else if (arr[j-1] == arr[j] / 10 && arr[j] % 10 >= arr[j-1]) {
					data = arr[j-1];
					arr[j-1] = arr[j];
					arr[j] = data;
					flag = 0;
				}
			} // checking mentioned conditions, flag = 0 if any one is active for further looping else next iteration is not entered
			j--; // incrementing j	
		}			
	}
	printf("The max possible number is: ");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]); // printing the max number
	}

	return 0;
}
