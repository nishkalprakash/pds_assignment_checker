/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 7
Description : Program to check if two words are anagram or not
*/

#include<stdio.h>
int main()
{
	int n,i,j,word,check = 0;
	
	printf("Enter the length of word: ");
	scanf("%d",&n);
	char c1[n],c2[n];

	printf("Enter a %d letter word: ",n);
	scanf("%s",c1);

	printf("Enter another %d letter word: ",n);
	scanf("%s",c2);

	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			if(c1[i] == c2[j])
				check++;			
		}
	}

	if(check == n)
		printf("Anagram\n");
	else
		printf("NOT Anagram\n");
	return 0;
}
