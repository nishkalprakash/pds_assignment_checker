/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 8
Description: Program to print all possible palindromic substrings of a given string. The string is taken as input, and then all possible subsequences are found through a quadratic loop. If they are palindromic (checked through a function outside main) then the substring is printed, if no substrings are found the same is printed.

Note: If the same substring is present multiple times, it may be printed more than once. To overcome this, we need an additional data structure which stores all previous subsequences to check whether the same has been encountered before. Or, another way would be to run more nested loops after a palindrome has been found to check for previous occurences (very inefficient due to high time complexity).
*/

#include <stdio.h>

int count = 0; // initialising count of substrings found

int palindrome (char s[], int i, int j) { // making palindromic function to check for palindrome in string s between indices i and j
	while (i < j) {
		if (s[i++] != s[j--]) return 0; // if not equal return 0
	}
	return 1; // else return 1	
}

int main() {
	char s[100]; // declaring character array
	scanf("%s", s); // taking string as input
	for (int i = 0; s[i] != '\0'; i++) { // running loop for starting character	 
		for (int j = i + 1; s[j] != '\0'; j++) { // running loop for last character
			if (palindrome(s, i, j)) { // checking palindrome between these indices
				count++; // incrementing count if so
				for (int k = i;  k <= j; k++) {
					printf("%c", s[k]); // printing substring if palindrome, between given indicies
				}
			printf("\n"); // printing newline 
			}
		}
	}
	if (count == 0) printf("No palindrome substrings present\n"); // if count is zero, no palindromes are printed
	return 0;
}

