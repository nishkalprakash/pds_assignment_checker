/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:8
Question no:4
description:palindrome*/



#include <stdio.h>
#include <stdlib.h>
int palindrome(char a[])//function to check palindrome
{
	int i;
	while(a[length]!='\0')
		length++;
	char b[length];
	int p=0;
	for(i=length-1;i>=0;i++)//reverse the string
	{
		b[i]=a[p];
		p++;
	}
	b[length]='\0';
	int count=0;
	for(i=0;i<length;i++)
	{
		if(a[i]==b[i])
			count++;
	}
	if(count==length&&length!=1)//if all elements match then length=count
		return 1;
	else
		return 0;
}
int main()
{
	char a[100];
	char b[100];
	int i,j;int p=0;int x;
	printf("Enter string:");
	scanf("%s",a);
	while(a[length]!='\0')
		length++;
	char reverse[100];//stores the word to check for palindrome
	for(i=0;i<length;i++)
	{
		for(j=length-1;j>(i);j--)
		{
			for(k=j;k>=i;k--)//extract letters from i to j 
			{
				reverse[p]=a[k];p++;
			}
			x=palindrome(reverse);
		}
	}

}
