/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 7
Description : Program to PRINT THE NUMBER OF TIMES A SUBSTRING S1 APPEARS IN S2 AS A SUBSTRING*/

#include <stdio.h>

int length(char s[]){  //function to calculate the length of a string
	int count=0;
	while(s[count]!='\0') count++;
	return count;
}

int check_substring(char s1[], char s2[]){  //function to check if a given substring (s2) is present in string s1
	int count=0, l1, l2, flag;
	l1=length(s1);
	l2=length(s2); 
	for (int i=0;i<=(l1-l2);i++){  //Iterating till i=(l1-l2) so that (i+j) does not become out of bound below
		flag=1;
		for (int j=0; j<l2 ;j++){
			if (s1[i+j]!=s2[j]) {flag=0; break;}  //checking if each element of s1 from the ith element matches with each element of s2. Also (i+j) needs to be less than l
		}
		if (flag==1) count++;  //if the substring is present then we increment count
	}
	return count;
}

int main(){
	char string[100], substring[100];
	printf("S1: ");
	scanf("%s", substring);
	printf("S2: ");
	scanf("%s", string);
	printf("%d", check_substring(string, substring));
	return 0;
}
