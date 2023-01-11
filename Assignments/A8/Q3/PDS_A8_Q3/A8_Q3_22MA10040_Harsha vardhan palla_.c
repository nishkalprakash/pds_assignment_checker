/*section 14
Name:P.sri Harsha Vardhan
Roll no:22MA10040
Assignment no:8
program 5*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
char texts[100];
printf("\n Enter the message:");
gets(texts);
int len;
len=strlen(texts);
int count=0;
for(;texts[count]!='\0';)
{
count++;
}
printf("\n The length of the text found without using strlen is %d",count);
printf("\n The length of the text found using strlen is %d",len);
int i,count_word=1,count_sentence=0,count_vowel=0;
for(i=0;texts[i]!='\0';i++)
{
if(texts[i]==' ')
count_word++;
if(texts[i]=='.')
count_sentence++;
if(texts[i]=='a'||texts[i]=='e'||texts[i]=='i'||texts[i]=='o'||texts[i]=='u'||texts[i]=='A'||texts[i]=='E'||texts[i]=='I'||texts[i]=='O'||texts[i]=='U')
count_vowel++;
}
printf("\n The number of words: %d",count_word);
printf("\n The number of sentences: %d",count_sentence);
printf("\n The number of vowels: %d",count_vowel);


int j,k;
printf("\n The frequency of letter-");
for(j=65,k=97;j<=91,k<=123;j++,k++)
{
int count_letter=0;
for(i=0;texts[i]!='\0';i++)
{
if(texts[i]==j || texts[i]==k)
count_letter++;
}
printf("\n %c : %d",j,co*section 14
Name:P.sri Harsha Vardhan
Roll no:22MA10040
Assignment no:8
program 5*/
#include<stdio.h>
#include<stdlib.h>
int main()unt_letter);
}
retuen 0;
}