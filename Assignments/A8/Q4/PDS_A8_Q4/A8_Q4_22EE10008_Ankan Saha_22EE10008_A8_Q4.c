/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 8
Description : To find the number of occurrences of a substring in a string
*/

#include <stdio.h>											// Includes the standard IO header file
#define MAX_LEN 100

int len(char str[]){										// function to find length
	int length = 0;
	for(int i = 0; i<MAX_LEN; i++){
		if(str[i] == '\0'){
			return length;
		}
		length++;
	}
}

int frequency(char s1[],char s2[]){							// function to calculate frequency of substring s1 in string s2
	int len1 = len(s1), len2 = len(s2), counter = 0;
	for(int j = 0; j<len2-len1+1; j++){
		int flag = 1;										// flag is boolean to indicate if there is a perfect match in an iteration

		/*
		s1 = pgh; s2 = adpghyxtpghmnpgpgxhkke
		
				ad  pgh  yxt  pgh  mn  pg  pgxhkke
				    pgh       pgh      pg
				    |  perfect	|     |last character|
					|   match	|	  |doesn't match |
		*/

		for(int i = 0; i < len1; i++){
			if(s1[i] != s2[j+i]){							// while checking substring, if any one character doesn't match then break from the current iteration and move to next 3 substring of s2
				flag = 0;	
				break;
			}
		}
		if(flag){
			counter++;
		}
	}
	return counter;
}

int main() {
	char s1[MAX_LEN], s2[MAX_LEN];
	printf("S1 : ");										// taking input
	scanf("%s", s1);
	printf("S2 : ");
	scanf("%s", s2);
	printf("\n%d\n", frequency(s1, s2));

	return 0;
}