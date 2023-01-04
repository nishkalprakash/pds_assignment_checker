/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 7
 Description : Program that finds whether two strings are anagram or not 
*/

#include <stdio.h>						//including the standard input output library
#include <string.h>
int main()
{
	char s1[100],s2[100];
	int i,j,c,f=0;
	printf("Enter first string: ");
	scanf("%s",s1);
	printf("Enter first string: ");
	scanf("%s",s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1!=l2)
	{
		f=1;
	}
	for(i=0;i<l1;i++)
	{
		c=0;
		for(j=0;j<l2;j++)
		{
			if(s1[i]==s2[j])
			c++;
		}
		if(c!=1)
		{
			f=1;
			break;
			
		}
	}
	if(f==1)
	{
		printf("NOT Anagram\n");
	}
	else
	{
		printf("Anagram\n");
	}
	return 0;
}
