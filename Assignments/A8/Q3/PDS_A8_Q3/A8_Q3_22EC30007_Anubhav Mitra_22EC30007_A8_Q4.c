/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 8
Description: Program to take a paragraph of text as input and then output a number of properties using separate functions. A character array of suitable size has been declared globally, as well as a hash array needed to store character counts.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash[26] = {0}; // global declaration of hash array
char arr[100]; // global declaration of character array

int length(char arr[]) { // function to find length of entire string
	int i = 0; 
	while (arr[i] != '\0' && i < 100) i++; // while newline or end of array is not reached, count of characters is incremented
	return i; // final count is returned
}

int words (char arr[]) { // function for finding total number of words
	if (arr[0] == '\0') return 0; // in case of null input
	int words = 1; // initialising number of words
	int i = 0;
	while (arr[i] != '\0') {
		if (arr[i++] == ' ') words++; // space means start of new word, hence count is incremented
	}
	return words; // returning total number of words
}

int sentences (char arr[]) { // function for finding total number of sentences
	int i = 0, sentences = 0; // initialising array index and count of sentences
	while (arr[i] != '\0') {
		if (arr[i++] == '.') {
			sentences++; // if full stop is encountered, new sentence begins hence count is incremented
		}
	}
	return sentences; // final count is returned
}

int vowels () { // function for printing count of vowels
	return (hash[0] + hash['e' - 'a'] + hash['i' - 'a'] + hash['o' - 'a'] + hash['u' - 'a']);
} // calculating sum from hash array

void frequency () { // printing frequency of all occuring characters
	int j = 0;
	while (hash[j] == 0) j++; // if no appearance move index
	printf("'%c' = %d", ('a' + j), hash[j]); // printing first appearance
	for (int i = j + 1; i < 26; i++) {
		if (hash[i]){
			printf(", '%c' = %d", ('a' + i), hash[i]); // printing rest of non zero appearances
		}
	}
	// printing first appearance separately to avoid comma at the end :)
}

int main() {
	int count = 0;
	char c;
	while(1) {
		c = getchar();
		if (c == '\n') break;
		arr[count++] = c;
		if ('a' <= c && c <= 'z') hash[c - 'a']++; // incrementing character count in hash array
		if ('A' <= c && c <= 'Z') hash[c - 'A']++; // incrementing character count in hash array
	}
	printf("Length counted without using library: %d\n", length(arr));
	printf("Length counted by strlen(): %ld\n", strlen(arr));
	printf("Number of words: %d\n", words(arr));
	printf("Number of sentences: %d\n", sentences(arr));
	printf("Number of vowels: %d\n", vowels());
	printf("Frequency count of each alphabet: \n");
	frequency(); // making all required function calls
	return 0; 
}
