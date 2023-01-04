/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:7
Question no:4
description:anagram*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int main()
{
	//char a[size];
	//char b[size];
	char a[100];
	char b[100];
	printf("Enter word:");
	scanf("%s",a);//accept a
	printf("Enter word:");
	scanf("%s",b);//accept b
	int i;
	int j;
	char temp;
	int d;//comparison value
        //sorted first array
	for(i=0;i<strlen(a);i++)
	{
		for(j=(strlen(a)-1);j>i;j--)
		{
			d=strcmp(a[j],a[j-1]);//compare elements one after another
			if(d<0)
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
        //sorted second string 
	for(i=0;i<strlen(b);i++)
	{
		for(j=(strlen(b)-1);j>i;j--)
		{
			d=strcmp(b[j],b[j-1]);
			if(d<0)//compare elements one after another
			{
				temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
			}
		}
	}
	int flag=0;
	if(strlen(a)==strlen(b))
	{
                //comparing element by element of both strings
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
		printf("Anagram\n");
	else
		printf("NOT Anagram\n");
        return 0;

}
