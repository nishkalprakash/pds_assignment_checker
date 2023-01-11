/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 8
Description : Program to analyse sentence
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(){
	char s[101];
	char c;
	int *al;
	al=(int*)(calloc(26,sizeof(int))); //initialising array to zero for counting alphabets
	int sen=0,vow,wrds=0;
	printf("Enter sentence : ");
	int i=0;
	for(i=0;c!='\n';i++){
		c=getchar();
		s[i]=c;
		if((s[i]>='A')&&(s[i]<='Z')) al[s[i]-'A']++; //counting capital letters
		if((s[i]>='a')&&(s[i]<='z')) al[s[i]-'a']++; //counting small ltrs
		if(s[i]=='.') sen++;
		if((s[i]==' ')||(s[i]=='\n')) wrds++;
	}
	s[i-1]='\0'; // adding null at end for strlen function
	vow=(al[0]+al[4]+al[8]+al[14]+al[20]);
	printf("Length counted without using library: %d\n", i-1);
	printf("Length counted by strlen fn: %d\n", strlen(s));
	printf("Number of words: %d\n", wrds);
	printf("Number of sentences: %d\n", sen);
	printf("Number of vowels: %d\n", vow);
	printf("Frequency count of each element: \n");
	for(int j=0;j<26;j++) if(al[j]) printf("'%c' = %d, ", ('a'+j), al[j]);


	return 0;
}