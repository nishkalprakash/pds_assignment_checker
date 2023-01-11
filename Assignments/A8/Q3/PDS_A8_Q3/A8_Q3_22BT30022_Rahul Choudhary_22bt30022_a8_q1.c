/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:
*/
#include<stdio.h>
#include<string.h>
int main()

{
char s[100];
int ln=0,space=0,dot=0,vowel=0;
gets(s);
for(int i=0;s[i]!='\0';i++)
ln++;
int l=strlen(s);
printf("length counted without using library:%d\n",ln);
printf("length counted by strlen:%d\n",l);
for( int i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
space++;
if(s[i]=='.')
dot++;
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
vowel++;
}
printf("number of words:%d\n",space);
printf("number of sentences:%d\n",dot);
printf("number of vowels:%d\n",vowel);

return 0;
}










