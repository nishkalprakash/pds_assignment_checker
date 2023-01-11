/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 8
	Description : Prints the palindrome substrings in a word
*/
#include <stdio.h>

int flag=0;

void palin(char s[], int f, int l)
{
	for (int i = 0; i <= (l-f)/2; ++i)
		if(s[f+i]!=s[l-i])
			return;

	if(flag==0)
		printf("The palindromic sequences are :\n");

	for (int i = 0; i < l-f+1; ++i)
		printf("%c", s[f+i]);
	printf("\n");

	flag++;

	return;
}

int main()
{
	char c[100];
	printf("Enter the word : \n" );
	scanf("%s",c);

	for (int i = 0; c[i+1]!='\0'; ++i)
		for (int j = i+1; c[j]!='\0'; ++j)
			palin(c,i,j);
	
	if (!flag)
		printf("No palindrome substrings present\n");

	return 0;
}