/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 7

Description-Anagram strings
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
char s1[100];
char s2[100];
int count=0;
printf("Enter first word\n"); 
scanf("%s",s1);
printf("Enter second word\n");
scanf("%s",s2);
int l1=0,l2=0;
for(int i=0;s1[i]!='\0';i++)
l1++;
for(int i=0;s2[i]!='\0';i++)
l2++;
for(int i=0;s2[i]!='\0';i++)
{
	for(int j=0;s1[j]!='\0';j++)
	{
	if(s1[j]==s2[i])
	count++;
	}
}
if((l1==l2)&&(count==l1))
printf("Anagram");
else
printf("NOT Anagram");
return 0;
}
