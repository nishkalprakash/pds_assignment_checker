/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 8
Description : Counting length, words, sentences and vowels of a string and finding frequency of alphabets
*/

#include <stdio.h>													// Includes the standard IO header file
#include <string.h>
#define MAX_LEN 100


int len(char str[]){												// len function to find length to string str
	int length = 0;
	for(int i = 0; i<MAX_LEN; i++){
		if(str[i] == '\0'){
			return length;
		}
		length++;
	}
}

int count(char str[], char chr){									// counts the frequency of character chr in string str
	int counter = 0;
	int length = len(str);
	for(int i = 0; i<length; i++){
		if(str[i] == chr || str[i] == chr-32){						// for uppercase characters, we do chr-32 as the difference between the upper case series and the lower case series is 32
			counter++;
		}
	}
	return counter;
}

int num_words(char str[]){											// find the number of words
	int words = 1;													// input will have atleast 1 word
	int length = len(str);									
	for(int i = 0; i<length; i++){
		if(str[i] == ' '){											// word is increased if there's a whitespace character
			words++;
		}
	}
	return words;
}

int num_sentences(char str[]){										// counting number of sentences
	int sentences = 0;
	int length = len(str);
	for(int i = 0; i<length; i++){
		if(str[i] == '.'){											// untill a '.' is encountered, the number of sentences is 0
			sentences++;
		}
	}
	return sentences;
}

int num_vowels(char str[]){											// find frequency of vowels and sum it
	int vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	int counter = 0;
	int length = len(str);
	for(int i = 0; i<5; i++){
		counter += count(str, vowels[i]);
	}
	return counter;

}

void frequency(char str[]){											// find frequency of alphabets
	int length = len(str);
	int frequency_table[26];										// creating a 26*sizeof(int) array for storing the frequency of each alphabet
	for(int i = 0; i<26; i++){
		frequency_table[i] = 0;										// initialising all values to 0
	}

	for(int i = 0; i<26; i++){
		int counter = 0;
		for(int j = 0; j<length; j++){
			/*
			since therer are 26 alphabets and i goes from 0 to 25, we can consider it to be
			the difference of str[j] from a or 65 (and the upper case version)
			so... c = 97 + i, where i = 2 and i represents the 3rd element of out frequency table array
			which is the frequency for 'c'
			*/
			if(str[j] == i+97 || str[j] == i+65){
				counter++;
			}
		}
		frequency_table[i] = counter;
	}
	for(int i = 0; i<26; i++){
		if(frequency_table[i] != 0){
			printf("\'%c\' = %d, ", i+97, frequency_table[i]);
		}
	}
}

int main() {
	char input[MAX_LEN];
	printf("Input : \n");
	scanf("%[^\n]", input);
	printf("Length counted without using library: %d\n\n", len(input));
	printf("Length couted by strlen(): %ld\n\n", strlen(input));
	printf("Number of words: %d\n\n", num_words(input));
	printf("Number of sentences: %d\n\n", num_sentences(input));
	printf("Number of vowels: %d\n\n", num_vowels(input));
	frequency(input);

	printf("\n");
	return 0;
}