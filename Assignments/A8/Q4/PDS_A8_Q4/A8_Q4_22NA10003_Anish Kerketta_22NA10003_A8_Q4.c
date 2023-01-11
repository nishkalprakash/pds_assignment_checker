/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 8-4
Description:To count the number of times S1 appears in S2*/
#include <stdio.h>
void main()
{
	char S1[100],S2[100];
	int i,j,length1=0,length2=0;
	int check=0,count=0;
	scanf("%s",S1);
	scanf("%s",S2);
	for(i=0;i<100;i++)
	if(S1[i]=='\0')
	if(length1==0)
	length1=i;
	for(i=0;i<100;i++)
	if(S2[i]=='\0')
	if(length2==0)
	length2=i;
	for(i=0;i<length2;i++)
	{for(j=0;j<length1;j++)
	{
	if(S2[i+j]==S1[j])
	{
	check++;}
	}
	if(check==length1)
	{count++;
	}
	check=0;
	}
	printf("\nCount=%d",count);
}
