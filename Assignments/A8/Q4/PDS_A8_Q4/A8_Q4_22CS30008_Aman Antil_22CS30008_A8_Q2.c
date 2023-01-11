/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 8
Description : Program to find frequency of substring in main string
*/
int sl(char a[]){
	int i=0;
	while(a[i]!='\0') i++;
	return i;
}//function to calculate string length
#include <stdio.h>
int main(){
	char s1[100];
	char s2[100];
	printf("Enter string 1: ");
	scanf("%s", s1);
	printf("Enter string 2: ");
	scanf("%s", s2);
	int j=0,cn=0; //j counts number of same characters, cnt counts frequency
	for(int i=0; i<sl(s2);i++){
		if(s2[i]==s1[j]){
			j++;
		}
		else j=0;
		if(j==sl(s1)) {cn++;j=0;} //if j value equal to string length of s1 then frequency increases
	}
	printf("%d\n", cn);
	return 0;
}