/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:8
description:string comparision
*/
#define max 500
#include<stdio.h>
int main()
{
	char a1[max], a2[max];
	printf("enter a1\n");	
	scanf("%s",a1);
	printf("enter a2\n");
	scanf("%s",a2);
	int l=0,count=0,k=0,temp=0;
	for (int i=0;a1[i]!='\0';i++)		//loop for first string
	l++;
	for (int i=0;a2[i]!='\0';i++)		//loop for second string
	{
		for(int j=i;j<i+l;j++)
		{
			if(a2[j]==a1[k])		//checking condition
			temp++;
			k++;
		}
	k=0;
	if(temp==l)		//condition
	count++;
	temp=0;
	}
	printf("%d",count);
	return 0;
}
