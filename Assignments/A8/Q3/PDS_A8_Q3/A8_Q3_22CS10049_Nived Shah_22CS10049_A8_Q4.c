/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 8
Description: Message analysis (no. of vowels, sentences, etc)
*/

#include <stdio.h>
#include <string.h>
 int main(){
 	char message[100];
 	char c;

 	int sentence=0, words=0, len=0, vowels=0;
 	for(int i=0; c!='\n'; i++){
 		c=getchar();
 		message[i]=c;
 		len++;
 		if(c==' ')
 			words++;
 		if(c=='.' || c=='?' || c=='!')
 			sentence++;
 	}
 	len=len-1;

 	for(int i=0; i<len; i++){
 		if(message[i]=='a' || message[i]=='e' || message[i]=='i' || message[i]=='o' || message[i]=='u' || message[i]=='A' || message[i]=='E' || message[i]=='I' || message[i]=='O' || message[i]=='U')
 			vowels++;	
 	}
 	printf("Length counted without using library = %d\n", len);
 	printf("Number of words = %d\n", words+1);
 	printf("Number of sentences = %d\n", sentence);
 	printf("Number of vowels= %d\n", vowels);
 	
 	return 0;
 }