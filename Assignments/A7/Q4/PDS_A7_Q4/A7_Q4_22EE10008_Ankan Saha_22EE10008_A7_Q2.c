/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 7
Description : Greatest number
*/

#include <stdio.h>											// Includes the standard IO header file

int main() {
	int n, arr[100];
	printf("Enter number of elements : ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int t;

	for(int i = 0; i < n; i++){
		for (int j = 0; j < n-1; j++){
			printf("i,j = %d,%d\n", i, j);
			if(arr[j]%10 == arr[j+1]%10){
				if(arr[j+1]/10 == 0){
					t = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = t;
				}
			}
			else if(arr[j]%10 > arr[j+1]%10){
				t = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = t;
			}
		}
	}

	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}

	return 0;
}