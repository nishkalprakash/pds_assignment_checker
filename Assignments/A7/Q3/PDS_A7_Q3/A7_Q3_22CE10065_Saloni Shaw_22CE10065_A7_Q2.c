/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 7
Description - Program to check two strings to be anagram 
*/

#include <stdio.h>

int main()
{
int len1=0,len2=0,i,j,c=0;
char s1[10];
char s2[10];
printf("enter first string\n");
scanf("%s",&s1);
printf("enter second string\n");//taking string input
scanf("%s",&s2);
while(s1[len1]!='\0')
len1++;
while(s1[len2]!='\0')
len2++;
if(len1!=len2)
printf("NOT Anagram\n");//when length not equal not anagram
for(i=0;i<len1;i++)
{
for(j=0;j<len2;j++)
{
if(s1[i]==s2[j])//checking if same
c++;//counter increased by one 
}
}
if(c==len1)
printf("Anagram\n");//anagram check
else
printf("NOT Anagram\n");
return 0;
}//end of program

