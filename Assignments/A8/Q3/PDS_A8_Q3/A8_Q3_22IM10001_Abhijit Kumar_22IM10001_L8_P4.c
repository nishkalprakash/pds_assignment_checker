/* Name: Abhijit Kumar
Roll no. 22IM10001
Section 14
Question 4
Topic-Printing the given outputs*/
#include<stdio.h>
#include<string.h>
int main()
{
char text[100];
printf("\n Enter the message : ");
gets(text);
int len;
len=strlen(text);
int count=0;
while(text[count]!='\0')
{
count++;
}
printf("\n The length of text found without using strings is %d",count);
printf("\n The length of text found using strings is %d",len);
int i,word_count=1,sentence_count=0,vowel_count=0;
for(i=0;text[i]!='\0';i++)
{
if(text[i]==' ')
{
word_count++;
}
if(text[i]=='.')
{
sentence_count++;
}
if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
{
vowel_count++;
}
}
printf("\n Number of words : %d",word_count);
printf("\n Number of sentences : %d",sentence_count);
printf("\n Number of vowels : %d",vowel_count);
int j,k;
printf("\n The frequency of letters :- ");
for(j=65,k=97;k<=123;j++,k++)
{
int letter_count=0;
for(i=0;text[i]!='\0';i++)
{
if(text[i]==j||text[i]==k)
letter_count++;
}
printf("\n %c : %d",j,letter_count);
}}









