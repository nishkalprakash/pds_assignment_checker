/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 8
Question No. : 5
Description : Palindrome
*/

#include<stdio.h>

	int main(){

	int word[50];
	scanf("%s",word);		//Input of string
	int i=0;
	int len=0;
	while(word[i]!='\0'){		//String length	
		len++;
		i++;
	}
	printf("Length of string = %d\n",len);
return 0;
}
