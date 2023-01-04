/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 7
Description: Program to find if two strings are anagrams of one another. (Assuming no case sensitivity and only character inputs as specified in the question, else the program can easily be modified with a hash array of size 256 to accomodate all ASCII values).
After the strings are taken as input, a hash array has been used to first store the counts of characters in s1, and then subtract those of s2. If at the end the count of every hash element is 0, it implies that both strings have the exact same characters, meaning they are anagrams. To check this a loop has been used.
*/

#include <stdio.h>
#include <string.h> // importing string library

int main () {
	int flag = 1; // initialising flag variable
	char s1[100];
	char s2[100]; // declaring strings or character arrays
	int hash[26] = {0}; // declaring character hash
	printf("Enter first string: ");
	scanf("%s", s1);
	printf("Enter second string: ");
	scanf("%s", s2);
	for (int i = 0; s1[i] != '\0'; i++) {
		if (s1[i] <= 'Z') hash[s1[i] - 'A']++; // incrementing character values after checking for upper or lower case
		else hash[s1[i] - 'a']++;
	}
	for (int i = 0; s2[i] != '\0'; i++) {
		if (s2[i] <= 'Z') hash[s2[i] - 'A']--; // decrementing character values after checking for upper or lower case
		else hash[s2[i] - 'a']--;
	}
	for (int i = 0; i < 26; i++) { // checking if all counts are zero or not, reason given in description
		if (hash[i]) {
			flag = 0; // if any count is non-zero, flag variable is made zero and the loop is broken
			break;
		}
	}
	if (flag) printf("Anagram\n"); // if flag variable is still 1, the strings are anagrams
	else printf("NOT Anagram\n"); // if 0, they are not
	return 0;
}
