/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 8-3
Description:To print all the palindrome present in the word*/
#include <stdio.h>
void main()
{
	int i,n=0,check=0;
	char word[100];
	scanf("%s",word);
	for(i=0;i<100;i++)
	if(word[i]=='\0')
	if(n==0)
	n=i;
	for(i=0;i<n;i++)
	{if(word[i]==word[n-i-1])
	check=1;
	else
	check=0;}
	if(check==1)
	printf("%s is pallindrome\n",word);
	else
	printf("No pallindrome\n");	
}
