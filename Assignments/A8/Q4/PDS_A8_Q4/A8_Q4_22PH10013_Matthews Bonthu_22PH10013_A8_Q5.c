// Name Bonthu Matthews
// Roll number 22PH10013
// Assignment 8
int ques(char a[ ])
{
	int i=0;
	while (a[i]!='\0') i++;
	return i;
}

#include <stdio.h>
int main ( )
{
	char s1[100];
	char s2[100];
	printf("enter string s1");
	scanf("%s",s1);
	printf("enter string s2");
	scanf("%s",s2);
	int j=0,count=0;
	for(int i=0;i<ques(s2);i++)
	{
		if(s2[i]==s1[j])
		{
			j++;
		}
		else j=0;
		if(j==ques(s1)) 
		{
               count++;
               j=0;
		}
	}
	printf("%d\n",count);
	return 0;
}