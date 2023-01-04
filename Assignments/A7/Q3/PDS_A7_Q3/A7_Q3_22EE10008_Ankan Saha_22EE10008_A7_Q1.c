/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 7
Description : Check for anagrams
*/

#include <stdio.h>													// Includes the standard IO header file
#include <string.h>													// library for strlen function
#define MAX_LEN 100

int count(char arr[], int n, char x) {								// function to count the number of appearances of a character in the string
	int counter = 1;												// arr[] is the string, n is the length of string, and x is the character to check
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			counter++;
		}
	}
	return counter;
}

int isPresent(char arr[], int n, char x) {							// Function to check if a character is present in a given string
	int flag = 0;													// arr[] is the string, n is the length of string, and x is the character to check
	for(int i=0; i<n; i++){											// could have also been done with the count function as count(...) > 0
		if(arr[i] == x){
			flag = 1;
		}
	}
	return flag;
}

int main() {
	char a[MAX_LEN], b[MAX_LEN];									// character arrays
	scanf("%s", a);													// taking input
	scanf("%s", b);

	int flag = 1, len_a = strlen(a), len_b = strlen(b);				// flag is a boolean which is true if they are anagrams

	if(len_a == len_b){
		for(int i = 0; i<len_a; i++){
			if(!(isPresent(b, len_b, a[i]) && count(a, len_a, a[i]) == count(b, len_b, a[i]))){
				flag = 0;											// set flag to false if either a character of 1st is not there in 2nd or of there are not same no. of a character in both strings
			}
		}
	}
	else{
		flag = 0;
	}

	if(flag) {
		printf("Anagram\n");
	}
	else{
		printf("NOT Anagram\n");
	}

	return 0;
}
