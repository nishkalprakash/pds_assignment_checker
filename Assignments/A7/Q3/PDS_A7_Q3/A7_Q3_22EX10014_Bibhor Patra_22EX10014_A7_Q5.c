/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 7
Description: Program to find if two words are anagrams
*/
#include<stdio.h>
#include<stdlib.h>
#define n 100
int main()
{
	char a[n];
	char b[n];
	scanf("%s",a);
	scanf("%s",b);
	int i;
	int j;
	char temp;
	int d;
	for(i=0;i<strlen(a);i++)
	{
		for(j=strlen(a)-1;j>i;j--)
		{
			d= strcmp(a[j],a[j-1]);
			if(d<0)
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]= temp;

			}
		}
	}
	for(i=0;i<strlen(b);i++)
	{
		for(j=strlen(b)-1;j>i;j--)
		{
			d=strcmp(b[j],b[j-1]);
			if(d<0)
			{
				temp = b[j];
				b[j]=b[j-1];
				b[j-1]=temp;

			}
		}
	}
	int flag=0;
	if(strlen(a)==strlen(b))
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("Anagram\n");
	}
	if(flag==1)
	{
		printf("Not anagram");
	}	
	return 0;

}

