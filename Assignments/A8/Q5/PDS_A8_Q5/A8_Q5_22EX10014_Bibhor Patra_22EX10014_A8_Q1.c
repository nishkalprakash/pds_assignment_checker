/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 8
Description: Program to find no of words,charcters and sentences in a string.
*/
#include<stdio.h>
#include<string.h>
int palindrome(char a[])
{
	int i;
	while(a[length]!=0)
		length++;
	char b[length];
	int p=0;
	for(i=length-1;i>=0;i++)
	{
		b[i]=a[p];
		p++;
	}
	b[length]='\0';
	int count = 0;
	for(i=0;i<length;i++)
	{
		if (a[i]==b[i])
		{
			count++;
		}
		if(count == length)
			return 1;
		else {return 0;}
	}
}
int main
{
	char a[100];
	char b[100];
	int i,j;
	scanf("%s",a);
	char reverse [100];
	while(a[length]!=\0)
	{
		length++;
	}
	for( i=0;i<length;i++)
	{
		for(j=length-1;j>(i);j--)
		{
			for(k=j;k>=i;k--)
			{
				reverse[p]=a[k];
				p++;
			}
			palindrome(reverse);

		}
	}
	return 0;

}