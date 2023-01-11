/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 8
Description : to printf frequency of a letter
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char str[100];
int length=0,charSpace=0,charSentence=0,charVowel=0,countFreq=0;
gets(str);
for(int i=0;str[i]!='\0';i++)
length++; //counting length
printf("Length counted without using library: %d ",length);
printf("\nLength counted by strlen() : %ld \n",strlen(str)); //couting length using function
for(int i=0;i<length;i++)
{
if(str[i]==' ')
charSpace ++; //counting spaces to find words 
if(str[i]=='.')
charSentence ++; //counting sentences  
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
charVowel ++; //counting vowels  
}
charSpace++; //words is one more than the spaces
printf("Number of words: %d\n",  charSpace);
printf("Number of sentences: %d\n",  charSentence);
printf("Number of vowel: %d\n",  charVowel);
for(char s='a';s<='z';s++)
{
for(int k=0;k<length;k++)
{
if((str[k]==s)||(str[k]==(s+'A'-'a')))
countFreq++; //counting frequnecy of letters
}
if(countFreq)
{
printf("'%c'=%d",s,countFreq); //print freqeuncy
countFreq=0;
}
}
return 0;
}
