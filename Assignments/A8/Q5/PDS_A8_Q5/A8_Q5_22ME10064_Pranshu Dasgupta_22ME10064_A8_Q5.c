/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 8
Description : Program to find saddle point in a given 2D array*/

#include <stdio.h>
#include <string.h>

int check_palindrome(char s[]){  //function to check if a given string s is a pallindrome
	int i, l, flag=1;
	l=strlen(s);
	if (l==1) return 0;
	for (i=0;i<=l-1;i++) if (s[i]!=s[l-i-1]) {flag=0; break;}
	return flag;
}

int main(){
	char s[100];
	int flag=0, i, j, length;
	scanf("%s", s);
	length=strlen(s);
	for (int i=0; i<length; i++){
		char p[100];  //p is our subject substring
		int counter=0;
		for (j=i; j<length;j++){  //2 for loops to check for all possible substrings
			p[j-i]=s[j];
			counter=j-i;
		counter++;
		p[counter]='\0';  //to make p valid string
		if (check_palindrome(p)) {printf("%s, ", p); flag=1;}
		}
	}
	if (!flag) printf("No pallindrome substrings present"); //if pallindromes aren't present then flag is 0
	return 0;
}
