/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 7-5
Description:Checking anagram*/
#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number of letters in the word:");			//read
	scanf("%d",&n);
	char str1[n],str2[n];							//creating array
	scanf("%s",str1);
	scanf("%s",str2);
	
	for(i=0;i<n;i++)							
	for(j=i+1;j<n;j++)
	{if(str1[i]>str1[j])
	{
	int a=str1[i];
	str1[i]=str1[j];
	str1[j]=a;
	}
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{if(str2[i]>str2[j])
	{
	int a=str2[i];
	str2[i]=str2[j];
	str2[j]=a;
	}
	}
	int count=0;
	for(i=0;i<n;i++)
	{
	if(str1[i]==str2[i])
	{
	count++;
	}
	}	
	if(count==n)
	printf("Anagram\n");
	else
	printf("Not Anagram\n");
}

