/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:to get possible palindromes from the given words.
*/
#define size 100
#include<stdio.h>
int check=0;
void checkpalindrome(char s[size],int x,int y)
{
	int k=0,t=1;
	while ((x+k)<(y-k))
	{
		if(s[x+k]!=s[y-k])
		t=0;
		k++;
	}
	if(t)
	{
		for( int i=x;i<=y;i++)
		printf("%c",s[i]);
		check=1;
	}
}
int main()
{
	int t=0;
	char s[size];
	printf("enter word\n");
	scanf("%s",s);
	
	for(int i=0;s[i]!='\0';i++)
	{
		for(int j=(i+1);s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
				checkpalindrome(s,i,j);
				printf(",");
			}
		}
	}
if check==0;
printf("not found");
	return 0;
}
