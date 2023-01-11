/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 8
desciption:
*/

#include<stdio.h>
#include<string.h>
char line[100];
int strlens(char str[]) // TO COUNT LENGTH 
{
 int len=0;
 while(str[len]!= '\0')
 len++;
 return len;
}

int words(char line[]) // TO COUNT WORDS 
{
 int words1=0;
 for(int i=0; i<strlen(line); i++)
 {
 if(line[i]==' ')
 words1++;
 }
 return words1;
}

int sentence(char line[]) // TO COUNT SENTENCES 
{
 int sent=0;
 for(int i=0; i<strlen(line); i++)
  {
   if(line[i]=='.')
   sent++;
  }
 return sent;
}

int vowels(char line[]) //TO COUNT VOWELS
{
 int vowels1=0;
 for(int i=0; i<strlen(line); i++)
 {
  if(line[i]=='a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')
  vowels1++;
 }
 return vowels1;
}

int main()
{
int len, length,wordss,sents, vowelss,uni[26];
scanf("%[^\n]", line);                         // INPUT OF LINE 
len=strlens(line);
printf("Length counted without using library: %d \n", len);

length=strlen(line);
printf("Length counted by strlen() : %d \n", length);
wordss=words(line);
printf("Number of words: %d \n", wordss+1);
sents=sentence(line);
printf("Number of sentences: %d \n", sents+1);
vowelss=vowels(line);
printf("Number of vowels: %d \n", vowelss);
}


