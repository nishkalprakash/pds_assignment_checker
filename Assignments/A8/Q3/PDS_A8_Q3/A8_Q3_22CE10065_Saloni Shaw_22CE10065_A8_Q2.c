/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 8

Description - Program to print length, words, sentence,vowels, frequency.

*/

#include <stdio.h>
#include<string.h>
int countlen(char s[])//function for counting length
{
int l1=0,i=0;
for(i=0;s[i]!=0;i++)
l1++;
printf("length counted without using library:%d\n",l1);
l1=strlen(s);
printf("length counted by strlen(): %d\n",l1);
return l1;
}
void countword(char s[], int l)//function for calculating number of words
{
int c=0,i=0;
for(i=0;i<l;i++)
{
if(s[i]==' ')
c++;
}
printf("number of words: %d\n",c+1);
}
void countsen(char s[], int l)//function for calculating number of sentences
{
int c=0,i;
for(i=0;i<l;i++)
{
if(s[i]=='.')
c++;
}
printf("Number of sentences: %d\n",c);
}
void countvow(char s[], int l)//function for vowels counting
{
int c=0,i=0;
for(i=0;i<l;i++)
{
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
c++;
}
printf("Number of vowels: %d\n",c);
}
void countfreq(char s[], int l)//function for frequency count
{
printf("Frequency count of eah alphabet:");
 char f[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char g[26]={'A','B','C','D','E','F','G','H','I','H','J','K','L','M','N','O','P','Q','R','S','T',
'U','V','W','Y','Z'};
int i,j;
for(i=0;i<26;i++)
{
int c=0;
for(j=0;j<l;j++)
{
if((f[i]==s[j])||g[i]==s[j])
c++;
}
if(c!=0)
printf("'%c'= %d,",f[i],c);
}
}
int main()//main function
{
char s[100];
printf("enter the string\n");
scanf("%[^\n]",&s);//taking string input
int l=0,i=0;
for(i=0;s[i]!=0;i++)
l++;//length 
countlen(s);
countword(s,l);
countsen(s,l);
countvow(s,l);
countfreq(s,l);//function calling
return 0;
}

