#include<stdio.h>
#include<string.h>
int main()
{ 
char text[100];
printf("\n Enter the message:");
gets(text);
int len;
len=strlen(text);
int count=0;
while(text[count]!='\0')
{
count++;
}
printf("\n The length of the text found without using strlen is %d",count);
printf("\n The length of the text found using strlen is %d",len);
int i,count_word=1,count_sentence=0,count_vowel=0;
for(i=0;text[i]!='\0';i++)
{
if(text[i]==' ')
count_word++;
if(text[i]=='.')
count_sentence++;
if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
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
for(i=0;text[i]!='\0';i++)
{
 if(text[i]==j || text[i]==k)
 count_letter++;
}
printf("\n %c : %d",j,count_letter);
}
}

 



  
