/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 8
Description : Palindrome substrings from a string
*/

#include <stdio.h>													// Includes the standard IO header file
#include <stdlib.h>
#define MAX_LEN 100

int len(char str[]){												// function to calculate the length to string str
	int length = 0;
	for(int i = 0; i<MAX_LEN; i++){
		if(str[i] == '\0'){
			return length;
		}
		length++;
	}
}

void print_str(char str[], int start_index, int end_index){			// function to print string from start index to end index
	for(int i = start_index; i <= end_index; i++){
		printf("%c", str[i]);
	}
	printf(", ");
}

int palindrome(char str[], int start_index, int end_index){
	for(int i = start_index; i <= end_index; i++){
		if(str[i] != str[end_index-(i-start_index)]){				// if the mirror image of a character in the string is not equal to itself, then break
			return 0;
		}
	}
	return 1;
}

int main() {
	char str[MAX_LEN];
	scanf("%s", str);
	int length = len(str), flag = 0;								// flag is boolean which is true if atleast 1 palindrome is present

	for(int i = 1; i <= length; i++){								// i represents the length of substring (i is taken from 0, so i = 1 is actually 0-1, i.e a 2 length string)
		for(int j = 0; j < length-i; j++)
			if(palindrome(str, j, j+i)){
				flag = 1;
				print_str(str, j, j+i);
			}
	}

	if(!flag){
		printf("No palindrome substrings present\n");
	}
	else{
		printf("\n");
	}

	return 0;
}