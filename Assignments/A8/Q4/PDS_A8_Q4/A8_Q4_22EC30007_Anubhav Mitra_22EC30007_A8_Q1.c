/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 8
Description: Program to find the number of times a string appears as a substring in a second string. Both strings are taken as input into character arrays. Then a quadratic loop in run in the second sring to check for the existence of the first as a substring character by character. Basically, all substrings of the same length as S1 are individually found and checked for equality in S1 using the concept of character arrays.

*/

#include <stdio.h>

int main() {
	char s1[100];
	char s2[100]; // declaring character arrays
	printf("S1: ");
	scanf("%s", s1); // taking substring as input
	printf("S2: ");
	scanf("%s", s2); // taking main string as input
	int count = 0, k, flag = 1, j; // initialising control and flag variables, plus a count of number of occurences starting from 0
	for (int i = 0; s2[i] != '\0'; i++) { // running loop on s2
		k = i;
		j = 0;
		while (s1[j] != '\0' && s2[k] != '\0') { // running loop on s1 and s2, checking character by character
			if (s2[k] != s1[j]) {
				flag = 0; // if a single case of inequality is found, loop is broken and flag is set to 0
				break;
			}
			k++;
			j++;
		}
		if (flag && s1[j] == '\0') count++; // checking flag and whether s1 was checked till the end, count is incremented
		flag = 1; // flag is reset for next iteration
	}
	printf("The number of occurences of S1 in S2 as a substring is: %d\n", count); // count is printed
	return 0;
}
