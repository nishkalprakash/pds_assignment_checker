/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 7
Description : Program to find anagram
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int c1=0,c2=0,c=0;
	char A[100];
	char B[100];
	printf("Enter words: ");
	scanf("%s", A);
	scanf("%s", B);
	c1=strlen(A); //reading string length
	c2=strlen(B);
	if(c1-c2){ printf("NOT Anagram\n"); return 0;}//if string length diff, not anagram
	for(int i=0; i<c1;i++){
		for(int j=0; j<c1;j++) if(A[i]==B[j]){c++; break;}//increasing counter when one letter in A is one letter in B
	}//used break to prevent repetetion
	if(c-c1) printf("NOT ");
	printf("Anagram");
	return 0;
}