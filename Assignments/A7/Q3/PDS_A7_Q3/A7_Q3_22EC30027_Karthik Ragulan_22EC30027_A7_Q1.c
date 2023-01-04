#include<stdio.h>
int anagram(char a[],char b[]);
int main()
{
char a[10],b[10];
printf("enter the strings");
scanf("%s%s",a,b);
if(anagram(a,b)==1)
	{
	printf("anagram");
	}
else
	printf("not anagram");
return 0;
}
int anagram(char a[],char b[])
{
int one[26]={0},two[26]={0},i=0;
while(a[i]!=0)
	{
	one[a[i]-'a']++;
	i++;
	}
i=0;
while(b[i]!=0)
	{
	two[b[i]-'a']++;
	i++;
	}
for(i=0;i<26;i++)
{
	if(one[i]!=two[i])
return 0;
}
return 1;
}
