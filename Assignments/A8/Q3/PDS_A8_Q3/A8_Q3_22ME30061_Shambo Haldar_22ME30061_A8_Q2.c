/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 8
Description : Program to read a text message and counting its length, vowel count, word count, sentence count and frequency of each alphabet
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],vowel[5] = {'a','e','i','o','u'};
	char alpha[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i,j,count_word = 0,count_sentences = 0,count_vowels = 0;
	int len,lib_len;
	//int strlen(char * str);
/*	char str1;
	str1 = getchar()
	printf("%c",str1);
*/

	scanf("%[^\n]",&str);
	
	for(i = 0;i != '\0';i++);
	len = i;
	
	printf("Length counted without using library: %d\n",len);

	//int strlen(char * str);
	lib_len = strlen(str);

	printf("\nLength counted by strlen(): %d\n",lib_len);

	for(i = 0;i < len;i++){
		if(str[i] == ' ')
			count_word++;

		else if(str[i] == '.')
			count_sentences++;

		for(j = 0;j < 5;j++){
			if(str[i] == vowel[j])
				count_vowels++;
		}
	}

	printf("\n\nNumber of words: %d\n\n",count_word + 1);
	printf("Number of sentences: %d\n\n",count_sentences);
	printf("Number of vowels: %d\n\n",count_vowels);

	return 0;
}
