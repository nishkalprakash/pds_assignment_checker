/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 8
Description : Program to 
Count the length of the message. Include the string.h library but do not use the methods in string.h library. Compare your result with strlen() method.

Count the number of words.

Count the number of sentences.

Count the number of vowels.

Store the frequency counts of each alphabet (not case-sensitive, both ‘A’ and small ‘a’ will be treated as the same) in the message.*/

#include <stdio.h>
#include <string.h>

int occurrences(char s[], char e){
	int flag=0, i=0;	
	while(s[i]!='\0') {if (s[i]==e || s[i]==(char)((int)e-32)) flag++; i++;}
	return flag;
}

void length(char s[]){  //function to calculate the length of a string
	int count=0;
	while(s[count]!='\0') count++;
	printf("Length counted without using library: %d\n", count);
	return;
}

void word_count(char s[]){
	int i=0, count=0;
	while(s[i++]!='\0') if(s[i]==' ') count++;
	printf("Number of words: %d\n", ++count);  //since number of words = numbers of spaces +1
	return;
}

void sentence_count(char s[]){
	int i=0, count=0;
	while(s[i++]!='\0') if(s[i]=='.' || s[i]=='?' || s[i]=='!') count++;
	printf("Number of sentences: %d\n", count);  //since number of sentences = number of occurrences of (?/./!)
	return;
}

void vowel_count(char s[]){
	int i=0, count=0;
	while(s[i]!='\0') {if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||
s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') count++; i++;}
	printf("Number of vowels: %d\n", count);
	return;
}
void alpha_count(char s[]){
	char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i=0, count=0;
	while(i<26){
		count=occurrences(s, alphabet[i]);
		if (count) printf("'%c' = %d, ", alphabet[i], count);
		i++;
	}
	return;
}

int main(){
	char s[100];
	int l=0;
	scanf("%[^\n]", s);
	printf("%s\n", s);
	l=strlen(s);
	length(s);
	printf("\n");
	printf("Length counted by strlen(): %d\n", l);
	printf("\n");
	word_count(s);
	printf("\n");
	sentence_count(s);
	printf("\n");
	vowel_count(s);
	printf("\n");
	alpha_count(s);
	return 0;
}

