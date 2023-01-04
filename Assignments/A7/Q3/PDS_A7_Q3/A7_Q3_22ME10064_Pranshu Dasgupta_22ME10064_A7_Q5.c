/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 7
Description : Program to check for anagram*/

#include <stdio.h>
#include <string.h>

int search(char s[], char ele){  //function to return the number of occurrences of ele in s
	int count=0, i=0;
	while(s[i]!='\0'){
		if (s[i]==ele) count++;
		i++;
	}
	return count;
}

int main(){
	int n, flag=1;
	char s1[100];
	char s2[100];
	scanf("%s",s1);
	scanf("%s",s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	if (l1!=l2) {printf("NOT Anagram"); return 0;}  //if lengths of the two strings are not equal then they cannot be anagrams
	for (int j=0; j<l1; j++){
		if (search(s1, s2[j])==search(s2, s2[j]) && search(s1, s1[j])==search(s2, s1[j])) continue;  //checking if occurences of s1[j] and s2[j] are equal
		else {flag=0; break;}
	}
	if (flag) printf("Anagram");
	else printf("NOT Anagram");
	return 0;
}
