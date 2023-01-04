/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to check two strings are anagram or not.

*/
#include<stdio.h>

#include<stdlib.h>
int main()
{
	char s1[100];
	char s2[100];
	int count=0,l1=0,l2=0;
	printf("enter first word   ");
	scanf("%s",s1);
	printf("enter second word   ");
	scanf("%s",s2);
	for (int i=0;s1[i]!='\0';i++)
	l1++;
	for (int i=0;s2[i]!='\0';i++)
	l2++;
	
	for (int i=0;s2[i]!='\0';i++)
	{
		for (int j=0;s2[j]!='\0';j++)
		{
			if(s1[j]==s2[i])
			count++;

		}
	}
	if((l1==l2)&&(count==l1))
	printf("anagram");
	else
	printf("not alagram");
	return 0;
}
